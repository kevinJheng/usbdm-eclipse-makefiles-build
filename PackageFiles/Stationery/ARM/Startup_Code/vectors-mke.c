/*
 *  Vectors-mke.c
 *
 *  Generic vectors and security for Kinetis MKExx
 *
 *  Created on: 07/12/2012
 *      Author: podonoghue
 */
#include <stdint.h>
#include <string.h>
#include "derivative.h"

#define $(targetDeviceSubFamily)

/*
 * Security information
 */
typedef struct {
   uint8_t  backdoorKey[8];
   uint32_t reseved;
   uint8_t  eeprot;
   uint8_t  fprot;
   uint8_t  fsec;
   uint8_t  fopt;
} SecurityInfo;

__attribute__ ((section(".security_information")))
const SecurityInfo securityInfo = {
    /* backdoor */ {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    /* reseved  */ 0xFFFFFFFF,
    /* eeprot   */ 0xFF,
    /* fprot    */ 0xFF,
    /* fsec     */ 0xFE,
    /* fopt     */ 0xFF,
};

/*
 * Vector table related
 */
typedef void( *const intfunc )( void );

#define WEAK_DEFAULT_HANDLER __attribute__ ((__weak__, alias("Default_Handler")))

#ifndef SCB_ICSR
#define SCB_ICSR (*(volatile uint32_t*)(0xE000ED04))
#endif

__attribute__((__interrupt__))
void Default_Handler(void) {

   uint32_t vectorNum = SCB_ICSR;

   (void)vectorNum;

   while (1) {
      __asm__("bkpt #0");
   }
}

typedef struct {
   unsigned int r0;
   unsigned int r1;
   unsigned int r2;
   unsigned int r3;
   unsigned int r12;
   void       (*lr)();
   void       (*pc)();
   unsigned int psr;
} ExceptionFrame;

typedef struct {
   unsigned int scb_hfsr;
   unsigned int scb_cfsr;
   unsigned int scb_bfar;
} ExceptionInfo;

/*  Low-level exception handler
 *
 *  Interface from asm to C.
 *  Passes address of exception handler to C-level handler
 *
 *  See http://www.freertos.org/Debugging-Hard-Faults-On-Cortex-M-Microcontrollers.html
 */
__attribute__((__naked__, __weak__, __interrupt__))
void HardFault_Handler(void) {
   __asm volatile (
          "       mov r0,lr                                     \n"
          "       mov r1,#4                                     \n"
          "       and r0,r1                                     \n"
          "       bne skip1                                     \n"
          "       mrs r0,msp                                    \n"
          "       b   skip2                                     \n"
          "skip1:                                               \n"
          "       mrs r0,psp                                    \n"
          "skip2:                                               \n"
          "       nop                                           \n"
          "       ldr r2, handler_addr_const                    \n"
          "       bx r2                                         \n"
          "       handler_addr_const: .word _HardFault_Handler  \n"
      );
}

/******************************************************************************/
/* Exception frame without floating-point storage
 * hard fault handler in C,
 * with stack frame location as input parameter
 *
 * @param exceptionFrame address of exception frame
 *
 */
void _HardFault_Handler(volatile ExceptionFrame *exceptionFrame) {
   (void)exceptionFrame;
#ifdef SCB_HFSR
   char reason[200] = "";
   volatile ExceptionInfo exceptionInfo = {0};
   exceptionInfo.scb_hfsr = SCB_HFSR;
   (void)exceptionInfo.scb_hfsr;
   if ((exceptionInfo.scb_hfsr&SCB_HFSR_FORCED_MASK) != 0) {
      // Forced
      exceptionInfo.scb_cfsr = SCB_CFSR;

      if (SCB_CFSR&SCB_CFSR_BFARVALID_MASK) {
         exceptionInfo.scb_bfar = SCB_BFAR;
      }
      /* CFSR Bit Fields */
      if (SCB_CFSR&SCB_CFSR_DIVBYZERO_MASK  ) { strcat(reason, "Divide by zero,"); }
      if (SCB_CFSR&SCB_CFSR_UNALIGNED_MASK  ) { strcat(reason, "Unaligned access,"); }
      if (SCB_CFSR&SCB_CFSR_NOCP_MASK       ) { strcat(reason, "No co-processor"); }
      if (SCB_CFSR&SCB_CFSR_INVPC_MASK      ) { strcat(reason, "Invalid PC (on return),"); }
      if (SCB_CFSR&SCB_CFSR_INVSTATE_MASK   ) { strcat(reason, "Invalid state (EPSR.T/IT,"); }
      if (SCB_CFSR&SCB_CFSR_UNDEFINSTR_MASK ) { strcat(reason, "Undefined Instruction,"); }
      if (SCB_CFSR&SCB_CFSR_BFARVALID_MASK  ) { strcat(reason, "BFAR contents valid,"); }
      if (SCB_CFSR&SCB_CFSR_LSPERR_MASK     ) { strcat(reason, "Bus fault on FP state save,"); }
      if (SCB_CFSR&SCB_CFSR_STKERR_MASK     ) { strcat(reason, "Bus fault on exception entry,"); }
      if (SCB_CFSR&SCB_CFSR_UNSTKERR_MASK   ) { strcat(reason, "Bus fault on exception return,"); }
      if (SCB_CFSR&SCB_CFSR_IMPRECISERR_MASK) { strcat(reason, "Imprecise data access error,"); }
      if (SCB_CFSR&SCB_CFSR_PRECISERR_MASK  ) { strcat(reason, "Precise data access error,"); }
      if (SCB_CFSR&SCB_CFSR_IBUSERR_MASK    ) { strcat(reason, "Bus fault on instruction pre-fetch,"); }
      if (SCB_CFSR&SCB_CFSR_MMARVALID_MASK  ) { strcat(reason, "MMAR contents valid,"); }
      if (SCB_CFSR&SCB_CFSR_MLSPERR_MASK    ) { strcat(reason, "MemManage fault on FP state save,"); }
      if (SCB_CFSR&SCB_CFSR_MSTKERR_MASK    ) { strcat(reason, "MemManage fault on exception entry,"); }
      if (SCB_CFSR&SCB_CFSR_MUNSTKERR_MASK  ) { strcat(reason, "MemManage fault on exception return,"); }
      if (SCB_CFSR&SCB_CFSR_DACCVIOL_MASK   ) { strcat(reason, "MemManage access violation on data access,"); }
      if (SCB_CFSR&SCB_CFSR_IACCVIOL_MASK   ) { strcat(reason, "MemManage access violation on instruction fetch,"); }
   }
#endif
   while (1) {
      asm("bkpt #0");
   }
}

void __HardReset(void) __attribute__((__interrupt__));
extern uint32_t __StackTop;

/*
 * Each vector is assigned an unique name.  This is then 'weakly' assigned to the
 * default handler.
 * To install a handler, create a function with the name shown and it will override
 * the weak default.
 */
$(cVectorTable)


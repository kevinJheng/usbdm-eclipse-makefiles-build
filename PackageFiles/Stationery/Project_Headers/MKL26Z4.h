/****************************************************************************************************//**
 * @file     MKL26Z4.h
 *
 * @brief    CMSIS Cortex-M Peripheral Access Layer Header File for MKL26Z4.
 *           Equivalent: MKL26Z64M4, MKL26Z32M4, MKL26Z256M4, MKL26Z128M4
 *
 * @version  V0.0
 * @date     2014/01
 *
 *******************************************************************************************************/

#ifndef MCU_MKL26Z4
#define MCU_MKL26Z4

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/* -------------------------  Interrupt Number Definition  ------------------------ */

typedef enum {
/* --------------------  Cortex-M Processor Exceptions Numbers  ------------------- */
  Reset_IRQn                    = -15,   /*!<   1 Reset Vector, invoked on Power up and warm reset                                 */
  NonMaskableInt_IRQn           = -14,   /*!<   2 Non maskable Interrupt, cannot be stopped or preempted                           */
  HardFault_IRQn                = -13,   /*!<   3 Hard Fault, all classes of Fault                                                 */
  MemoryManagement_IRQn         = -12,   /*!<   4 Memory Management, MPU mismatch, including Access Violation and No Match         */
  BusFault_IRQn                 = -11,   /*!<   5 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory related Fault   */
  UsageFault_IRQn               = -10,   /*!<   6 Usage Fault, i.e. Undef Instruction, Illegal State Transition                    */
  SVCall_IRQn                   =  -5,   /*!<  11 System Service Call via SVC instruction                                          */
  DebugMonitor_IRQn             =  -4,   /*!<  12 Debug Monitor                                                                    */
  PendSV_IRQn                   =  -2,   /*!<  14 Pendable request for system service                                              */
  SysTick_IRQn                  =  -1,   /*!<  15 System Tick Timer                                                                */
/* ----------------------   MKL26Z4 VectorTable                      ---------------------- */
  DMA0_IRQn                     =   0,   /*!<  16 DMA0 Transfer complete or error                                                  */
  DMA1_IRQn                     =   1,   /*!<  17 DMA1 Transfer complete or error                                                  */
  DMA2_IRQn                     =   2,   /*!<  18 DMA2 Transfer complete or error                                                  */
  DMA3_IRQn                     =   3,   /*!<  19 DMA3 Transfer complete or error                                                  */
  FTFA_IRQn                     =   5,   /*!<  21 FTFA Command complete or error                                                   */
  PMC_IRQn                      =   6,   /*!<  22 PMC Low-voltage detect, low-voltage warning                                      */
  LLWU_IRQn                     =   7,   /*!<  23 Low Leakage Wakeup                                                               */
  I2C0_IRQn                     =   8,   /*!<  24 I2C Interface 0                                                                  */
  I2C1_IRQn                     =   9,   /*!<  25 I2C Interface 1                                                                  */
  SPI0_IRQn                     =  10,   /*!<  26 Serial Peripheral Interface 0                                                    */
  SPI1_IRQn                     =  11,   /*!<  27 Serial Peripheral Interface 1                                                    */
  UART0_IRQn                    =  12,   /*!<  28 UART0 Status and error                                                           */
  UART1_IRQn                    =  13,   /*!<  29 UART1 Status and error                                                           */
  UART2_IRQn                    =  14,   /*!<  30 UART2 Status and error                                                           */
  ADC0_IRQn                     =  15,   /*!<  31 Analogue to Digital Converter 0                                                  */
  ACMP0_IRQn                    =  16,   /*!<  32 Analogue comparator 0                                                            */
  TPM0_IRQn                     =  17,   /*!<  33 Timer/PWM Module 0                                                               */
  TPM1_IRQn                     =  18,   /*!<  34 Timer/PWM Module 1                                                               */
  TPM2_IRQn                     =  19,   /*!<  35 Timer/PWM Module 2                                                               */
  RTC_Alarm_IRQn                =  20,   /*!<  36 Real Time Clock Alarm                                                            */
  RTC_Seconds_IRQn              =  21,   /*!<  37 Real Time Clock Seconds                                                          */
  PIT_IRQn                      =  22,   /*!<  38 Programmable Interrupt Timer (All channels)                                      */
  I2S0_IRQn                     =  23,   /*!<  39 I2S0                                                                             */
  USBOTG_IRQn                   =  24,   /*!<  40 USBB On The Go                                                                   */
  DAC0_IRQn                     =  25,   /*!<  41 Digital to Analogue Converter                                                    */
  TSI0_IRQn                     =  26,   /*!<  42 Touch Sense Input                                                                */
  MCG_IRQn                      =  27,   /*!<  43 Clock                                                                            */
  LPTMR0_IRQn                   =  28,   /*!<  44 Low Power Timer                                                                  */
  PORTA_IRQn                    =  30,   /*!<  46 Port A                                                                           */
  PORTC_D_IRQn                  =  31,   /*!<  47 Port C & Port D                                                                  */
} IRQn_Type;

/* -------------------------  Exception Handlers  ------------------------ */
extern void NMI_Handler(void);
extern void HardFault_Handler(void);
extern void MemManage_Handler(void);
extern void BusFault_Handler(void);
extern void UsageFault_Handler(void);
extern void SVC_Handler(void);
extern void DebugMon_Handler(void);
extern void PendSV_Handler(void);
extern void SysTick_Handler(void);
extern void DMA0_IRQHandler(void);
extern void DMA1_IRQHandler(void);
extern void DMA2_IRQHandler(void);
extern void DMA3_IRQHandler(void);
extern void FTFA_IRQHandler(void);
extern void PMC_IRQHandler(void);
extern void LLWU_IRQHandler(void);
extern void I2C0_IRQHandler(void);
extern void I2C1_IRQHandler(void);
extern void SPI0_IRQHandler(void);
extern void SPI1_IRQHandler(void);
extern void UART0_IRQHandler(void);
extern void UART1_IRQHandler(void);
extern void UART2_IRQHandler(void);
extern void ADC0_IRQHandler(void);
extern void ACMP0_IRQHandler(void);
extern void TPM0_IRQHandler(void);
extern void TPM1_IRQHandler(void);
extern void TPM2_IRQHandler(void);
extern void RTC_Alarm_IRQHandler(void);
extern void RTC_Seconds_IRQHandler(void);
extern void PIT_IRQHandler(void);
extern void I2S0_IRQHandler(void);
extern void USBOTG_IRQHandler(void);
extern void DAC0_IRQHandler(void);
extern void TSI0_IRQHandler(void);
extern void MCG_IRQHandler(void);
extern void LPTMR0_IRQHandler(void);
extern void PORTA_IRQHandler(void);
extern void PORTC_D_IRQHandler(void);

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/* ----------------Configuration of the cm4 Processor and Core Peripherals---------------- */
#define __CM0_REV                0x0100
#define __MPU_PRESENT            0
#define __NVIC_PRIO_BITS         2
#define __Vendor_SysTickConfig   0
#define __FPU_PRESENT            0

#include <core_cm0.h>   /*!< Cortex-M4 processor and core peripherals                              */

#ifndef __IO
#define __IO volatile 
#endif

#ifndef __I
#define __I volatile const
#endif

#ifndef __O
#define __O volatile
#endif


/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */



/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif

/* ================================================================================ */
/* ================           ADC0 (file:ADC0_MKD5_MKLZ4)          ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter (ADC0)
 */
typedef struct {                                /*!<       ADC0 Structure                                               */
   __IO uint32_t  SC1A;                         /*!< 0000: ADC Status and Control Registers 1                           */
   __IO uint32_t  SC1B;                         /*!< 0004: ADC Status and Control Registers 1                           */
   __IO uint32_t  CFG1;                         /*!< 0008: ADC Configuration Register 1                                 */
   __IO uint32_t  CFG2;                         /*!< 000C: ADC Configuration Register 2                                 */
   __I  uint32_t  RA;                           /*!< 0010: ADC Data Result Register                                     */
   __I  uint32_t  RB;                           /*!< 0014: ADC Data Result Register                                     */
   __IO uint32_t  CV1;                          /*!< 0018: Compare Value                                                */
   __IO uint32_t  CV2;                          /*!< 001C: Compare Value                                                */
   __IO uint32_t  SC2;                          /*!< 0020: Status and Control Register 2                                */
   __IO uint32_t  SC3;                          /*!< 0024: Status and Control Register 3                                */
   __IO uint32_t  OFS;                          /*!< 0028: ADC Offset Correction Register                               */
   __IO uint32_t  PG;                           /*!< 002C: ADC Plus-Side Gain Register                                  */
   __IO uint32_t  MG;                           /*!< 0030: ADC Minus-Side Gain Register                                 */
   __IO uint32_t  CLPD;                         /*!< 0034: ADC Plus-Side General Calibration Value Register             */
   __IO uint32_t  CLPS;                         /*!< 0038: ADC Plus-Side General Calibration Value Register             */
   __IO uint32_t  CLP4;                         /*!< 003C: ADC Plus-Side General Calibration Value Register             */
   __IO uint32_t  CLP3;                         /*!< 0040: ADC Plus-Side General Calibration Value Register             */
   __IO uint32_t  CLP2;                         /*!< 0044: ADC Plus-Side General Calibration Value Register             */
   __IO uint32_t  CLP1;                         /*!< 0048: ADC Plus-Side General Calibration Value Register             */
   __IO uint32_t  CLP0;                         /*!< 004C: ADC Plus-Side General Calibration Value Register             */
   __I  uint32_t  RESERVED0;                    /*!< 0050:                                                              */
   __IO uint32_t  CLMD;                         /*!< 0054: ADC Minus-Side General Calibration Value Register            */
   __IO uint32_t  CLMS;                         /*!< 0058: ADC Minus-Side General Calibration Value Register            */
   __IO uint32_t  CLM4;                         /*!< 005C: ADC Minus-Side General Calibration Value Register            */
   __IO uint32_t  CLM3;                         /*!< 0060: ADC Minus-Side General Calibration Value Register            */
   __IO uint32_t  CLM2;                         /*!< 0064: ADC Minus-Side General Calibration Value Register            */
   __IO uint32_t  CLM1;                         /*!< 0068: ADC Minus-Side General Calibration Value Register            */
   __IO uint32_t  CLM0;                         /*!< 006C: ADC Minus-Side General Calibration Value Register            */
} ADC0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- ADC0_SC1                                 ------ */
#define ADC_SC1_ADCH_MASK                        (0x1FUL << ADC_SC1_ADCH_SHIFT)                      /*!< ADC0_SC1: ADCH Mask                     */
#define ADC_SC1_ADCH_SHIFT                       0                                                   /*!< ADC0_SC1: ADCH Position                 */
#define ADC_SC1_ADCH(x)                          (((x)<<ADC_SC1_ADCH_SHIFT)&ADC_SC1_ADCH_MASK)       /*!< ADC0_SC1                                */
#define ADC_SC1_DIFF_MASK                        (0x01UL << ADC_SC1_DIFF_SHIFT)                      /*!< ADC0_SC1: DIFF Mask                     */
#define ADC_SC1_DIFF_SHIFT                       5                                                   /*!< ADC0_SC1: DIFF Position                 */
#define ADC_SC1_AIEN_MASK                        (0x01UL << ADC_SC1_AIEN_SHIFT)                      /*!< ADC0_SC1: AIEN Mask                     */
#define ADC_SC1_AIEN_SHIFT                       6                                                   /*!< ADC0_SC1: AIEN Position                 */
#define ADC_SC1_COCO_MASK                        (0x01UL << ADC_SC1_COCO_SHIFT)                      /*!< ADC0_SC1: COCO Mask                     */
#define ADC_SC1_COCO_SHIFT                       7                                                   /*!< ADC0_SC1: COCO Position                 */

/* ------- ADC0_CFG1                                ------ */
#define ADC_CFG1_ADICLK_MASK                     (0x03UL << ADC_CFG1_ADICLK_SHIFT)                   /*!< ADC0_CFG1: ADICLK Mask                  */
#define ADC_CFG1_ADICLK_SHIFT                    0                                                   /*!< ADC0_CFG1: ADICLK Position              */
#define ADC_CFG1_ADICLK(x)                       (((x)<<ADC_CFG1_ADICLK_SHIFT)&ADC_CFG1_ADICLK_MASK) /*!< ADC0_CFG1                               */
#define ADC_CFG1_MODE_MASK                       (0x03UL << ADC_CFG1_MODE_SHIFT)                     /*!< ADC0_CFG1: MODE Mask                    */
#define ADC_CFG1_MODE_SHIFT                      2                                                   /*!< ADC0_CFG1: MODE Position                */
#define ADC_CFG1_MODE(x)                         (((x)<<ADC_CFG1_MODE_SHIFT)&ADC_CFG1_MODE_MASK)     /*!< ADC0_CFG1                               */
#define ADC_CFG1_ADLSMP_MASK                     (0x01UL << ADC_CFG1_ADLSMP_SHIFT)                   /*!< ADC0_CFG1: ADLSMP Mask                  */
#define ADC_CFG1_ADLSMP_SHIFT                    4                                                   /*!< ADC0_CFG1: ADLSMP Position              */
#define ADC_CFG1_ADIV_MASK                       (0x03UL << ADC_CFG1_ADIV_SHIFT)                     /*!< ADC0_CFG1: ADIV Mask                    */
#define ADC_CFG1_ADIV_SHIFT                      5                                                   /*!< ADC0_CFG1: ADIV Position                */
#define ADC_CFG1_ADIV(x)                         (((x)<<ADC_CFG1_ADIV_SHIFT)&ADC_CFG1_ADIV_MASK)     /*!< ADC0_CFG1                               */
#define ADC_CFG1_ADLPC_MASK                      (0x01UL << ADC_CFG1_ADLPC_SHIFT)                    /*!< ADC0_CFG1: ADLPC Mask                   */
#define ADC_CFG1_ADLPC_SHIFT                     7                                                   /*!< ADC0_CFG1: ADLPC Position               */

/* ------- ADC0_CFG2                                ------ */
#define ADC_CFG2_ADLSTS_MASK                     (0x03UL << ADC_CFG2_ADLSTS_SHIFT)                   /*!< ADC0_CFG2: ADLSTS Mask                  */
#define ADC_CFG2_ADLSTS_SHIFT                    0                                                   /*!< ADC0_CFG2: ADLSTS Position              */
#define ADC_CFG2_ADLSTS(x)                       (((x)<<ADC_CFG2_ADLSTS_SHIFT)&ADC_CFG2_ADLSTS_MASK) /*!< ADC0_CFG2                               */
#define ADC_CFG2_ADHSC_MASK                      (0x01UL << ADC_CFG2_ADHSC_SHIFT)                    /*!< ADC0_CFG2: ADHSC Mask                   */
#define ADC_CFG2_ADHSC_SHIFT                     2                                                   /*!< ADC0_CFG2: ADHSC Position               */
#define ADC_CFG2_ADACKEN_MASK                    (0x01UL << ADC_CFG2_ADACKEN_SHIFT)                  /*!< ADC0_CFG2: ADACKEN Mask                 */
#define ADC_CFG2_ADACKEN_SHIFT                   3                                                   /*!< ADC0_CFG2: ADACKEN Position             */
#define ADC_CFG2_MUXSEL_MASK                     (0x01UL << ADC_CFG2_MUXSEL_SHIFT)                   /*!< ADC0_CFG2: MUXSEL Mask                  */
#define ADC_CFG2_MUXSEL_SHIFT                    4                                                   /*!< ADC0_CFG2: MUXSEL Position              */

/* ------- ADC0_R                                   ------ */
#define ADC_R_D_MASK                             (0xFFFFUL << ADC_R_D_SHIFT)                         /*!< ADC0_R: D Mask                          */
#define ADC_R_D_SHIFT                            0                                                   /*!< ADC0_R: D Position                      */
#define ADC_R_D(x)                               (((x)<<ADC_R_D_SHIFT)&ADC_R_D_MASK)                 /*!< ADC0_R                                  */

/* ------- ADC0_CV                                  ------ */
#define ADC_CV_CV_MASK                           (0xFFFFUL << ADC_CV_CV_SHIFT)                       /*!< ADC0_CV: CV Mask                        */
#define ADC_CV_CV_SHIFT                          0                                                   /*!< ADC0_CV: CV Position                    */
#define ADC_CV_CV(x)                             (((x)<<ADC_CV_CV_SHIFT)&ADC_CV_CV_MASK)             /*!< ADC0_CV                                 */

/* ------- ADC0_SC2                                 ------ */
#define ADC_SC2_REFSEL_MASK                      (0x03UL << ADC_SC2_REFSEL_SHIFT)                    /*!< ADC0_SC2: REFSEL Mask                   */
#define ADC_SC2_REFSEL_SHIFT                     0                                                   /*!< ADC0_SC2: REFSEL Position               */
#define ADC_SC2_REFSEL(x)                        (((x)<<ADC_SC2_REFSEL_SHIFT)&ADC_SC2_REFSEL_MASK)   /*!< ADC0_SC2                                */
#define ADC_SC2_DMAEN_MASK                       (0x01UL << ADC_SC2_DMAEN_SHIFT)                     /*!< ADC0_SC2: DMAEN Mask                    */
#define ADC_SC2_DMAEN_SHIFT                      2                                                   /*!< ADC0_SC2: DMAEN Position                */
#define ADC_SC2_ACREN_MASK                       (0x01UL << ADC_SC2_ACREN_SHIFT)                     /*!< ADC0_SC2: ACREN Mask                    */
#define ADC_SC2_ACREN_SHIFT                      3                                                   /*!< ADC0_SC2: ACREN Position                */
#define ADC_SC2_ACFGT_MASK                       (0x01UL << ADC_SC2_ACFGT_SHIFT)                     /*!< ADC0_SC2: ACFGT Mask                    */
#define ADC_SC2_ACFGT_SHIFT                      4                                                   /*!< ADC0_SC2: ACFGT Position                */
#define ADC_SC2_ACFE_MASK                        (0x01UL << ADC_SC2_ACFE_SHIFT)                      /*!< ADC0_SC2: ACFE Mask                     */
#define ADC_SC2_ACFE_SHIFT                       5                                                   /*!< ADC0_SC2: ACFE Position                 */
#define ADC_SC2_ADTRG_MASK                       (0x01UL << ADC_SC2_ADTRG_SHIFT)                     /*!< ADC0_SC2: ADTRG Mask                    */
#define ADC_SC2_ADTRG_SHIFT                      6                                                   /*!< ADC0_SC2: ADTRG Position                */
#define ADC_SC2_ADACT_MASK                       (0x01UL << ADC_SC2_ADACT_SHIFT)                     /*!< ADC0_SC2: ADACT Mask                    */
#define ADC_SC2_ADACT_SHIFT                      7                                                   /*!< ADC0_SC2: ADACT Position                */

/* ------- ADC0_SC3                                 ------ */
#define ADC_SC3_AVGS_MASK                        (0x03UL << ADC_SC3_AVGS_SHIFT)                      /*!< ADC0_SC3: AVGS Mask                     */
#define ADC_SC3_AVGS_SHIFT                       0                                                   /*!< ADC0_SC3: AVGS Position                 */
#define ADC_SC3_AVGS(x)                          (((x)<<ADC_SC3_AVGS_SHIFT)&ADC_SC3_AVGS_MASK)       /*!< ADC0_SC3                                */
#define ADC_SC3_AVGE_MASK                        (0x01UL << ADC_SC3_AVGE_SHIFT)                      /*!< ADC0_SC3: AVGE Mask                     */
#define ADC_SC3_AVGE_SHIFT                       2                                                   /*!< ADC0_SC3: AVGE Position                 */
#define ADC_SC3_ADCO_MASK                        (0x01UL << ADC_SC3_ADCO_SHIFT)                      /*!< ADC0_SC3: ADCO Mask                     */
#define ADC_SC3_ADCO_SHIFT                       3                                                   /*!< ADC0_SC3: ADCO Position                 */
#define ADC_SC3_CALF_MASK                        (0x01UL << ADC_SC3_CALF_SHIFT)                      /*!< ADC0_SC3: CALF Mask                     */
#define ADC_SC3_CALF_SHIFT                       6                                                   /*!< ADC0_SC3: CALF Position                 */
#define ADC_SC3_CAL_MASK                         (0x01UL << ADC_SC3_CAL_SHIFT)                       /*!< ADC0_SC3: CAL Mask                      */
#define ADC_SC3_CAL_SHIFT                        7                                                   /*!< ADC0_SC3: CAL Position                  */

/* ------- ADC0_OFS                                 ------ */
#define ADC_OFS_OFS_MASK                         (0xFFFFUL << ADC_OFS_OFS_SHIFT)                     /*!< ADC0_OFS: OFS Mask                      */
#define ADC_OFS_OFS_SHIFT                        0                                                   /*!< ADC0_OFS: OFS Position                  */
#define ADC_OFS_OFS(x)                           (((x)<<ADC_OFS_OFS_SHIFT)&ADC_OFS_OFS_MASK)         /*!< ADC0_OFS                                */

/* ------- ADC0_PG                                  ------ */
#define ADC_PG_PG_MASK                           (0xFFFFUL << ADC_PG_PG_SHIFT)                       /*!< ADC0_PG: PG Mask                        */
#define ADC_PG_PG_SHIFT                          0                                                   /*!< ADC0_PG: PG Position                    */
#define ADC_PG_PG(x)                             (((x)<<ADC_PG_PG_SHIFT)&ADC_PG_PG_MASK)             /*!< ADC0_PG                                 */

/* ------- ADC0_MG                                  ------ */
#define ADC_MG_MG_MASK                           (0xFFFFUL << ADC_MG_MG_SHIFT)                       /*!< ADC0_MG: MG Mask                        */
#define ADC_MG_MG_SHIFT                          0                                                   /*!< ADC0_MG: MG Position                    */
#define ADC_MG_MG(x)                             (((x)<<ADC_MG_MG_SHIFT)&ADC_MG_MG_MASK)             /*!< ADC0_MG                                 */

/* ------- ADC0_CLPD                                ------ */
#define ADC_CLPD_CLPD_MASK                       (0x3FUL << ADC_CLPD_CLPD_SHIFT)                     /*!< ADC0_CLPD: CLPD Mask                    */
#define ADC_CLPD_CLPD_SHIFT                      0                                                   /*!< ADC0_CLPD: CLPD Position                */
#define ADC_CLPD_CLPD(x)                         (((x)<<ADC_CLPD_CLPD_SHIFT)&ADC_CLPD_CLPD_MASK)     /*!< ADC0_CLPD                               */

/* ------- ADC0_CLPS                                ------ */
#define ADC_CLPS_CLPS_MASK                       (0x3FUL << ADC_CLPS_CLPS_SHIFT)                     /*!< ADC0_CLPS: CLPS Mask                    */
#define ADC_CLPS_CLPS_SHIFT                      0                                                   /*!< ADC0_CLPS: CLPS Position                */
#define ADC_CLPS_CLPS(x)                         (((x)<<ADC_CLPS_CLPS_SHIFT)&ADC_CLPS_CLPS_MASK)     /*!< ADC0_CLPS                               */

/* ------- ADC0_CLP4                                ------ */
#define ADC_CLP4_CLP4_MASK                       (0x3FFUL << ADC_CLP4_CLP4_SHIFT)                    /*!< ADC0_CLP4: CLP4 Mask                    */
#define ADC_CLP4_CLP4_SHIFT                      0                                                   /*!< ADC0_CLP4: CLP4 Position                */
#define ADC_CLP4_CLP4(x)                         (((x)<<ADC_CLP4_CLP4_SHIFT)&ADC_CLP4_CLP4_MASK)     /*!< ADC0_CLP4                               */

/* ------- ADC0_CLP3                                ------ */
#define ADC_CLP3_CLP3_MASK                       (0x1FFUL << ADC_CLP3_CLP3_SHIFT)                    /*!< ADC0_CLP3: CLP3 Mask                    */
#define ADC_CLP3_CLP3_SHIFT                      0                                                   /*!< ADC0_CLP3: CLP3 Position                */
#define ADC_CLP3_CLP3(x)                         (((x)<<ADC_CLP3_CLP3_SHIFT)&ADC_CLP3_CLP3_MASK)     /*!< ADC0_CLP3                               */

/* ------- ADC0_CLP2                                ------ */
#define ADC_CLP2_CLP2_MASK                       (0xFFUL << ADC_CLP2_CLP2_SHIFT)                     /*!< ADC0_CLP2: CLP2 Mask                    */
#define ADC_CLP2_CLP2_SHIFT                      0                                                   /*!< ADC0_CLP2: CLP2 Position                */
#define ADC_CLP2_CLP2(x)                         (((x)<<ADC_CLP2_CLP2_SHIFT)&ADC_CLP2_CLP2_MASK)     /*!< ADC0_CLP2                               */

/* ------- ADC0_CLP1                                ------ */
#define ADC_CLP1_CLP1_MASK                       (0x7FUL << ADC_CLP1_CLP1_SHIFT)                     /*!< ADC0_CLP1: CLP1 Mask                    */
#define ADC_CLP1_CLP1_SHIFT                      0                                                   /*!< ADC0_CLP1: CLP1 Position                */
#define ADC_CLP1_CLP1(x)                         (((x)<<ADC_CLP1_CLP1_SHIFT)&ADC_CLP1_CLP1_MASK)     /*!< ADC0_CLP1                               */

/* ------- ADC0_CLP0                                ------ */
#define ADC_CLP0_CLP0_MASK                       (0x3FUL << ADC_CLP0_CLP0_SHIFT)                     /*!< ADC0_CLP0: CLP0 Mask                    */
#define ADC_CLP0_CLP0_SHIFT                      0                                                   /*!< ADC0_CLP0: CLP0 Position                */
#define ADC_CLP0_CLP0(x)                         (((x)<<ADC_CLP0_CLP0_SHIFT)&ADC_CLP0_CLP0_MASK)     /*!< ADC0_CLP0                               */

/* ------- ADC0_CLMD                                ------ */
#define ADC_CLMD_CLMD_MASK                       (0x3FUL << ADC_CLMD_CLMD_SHIFT)                     /*!< ADC0_CLMD: CLMD Mask                    */
#define ADC_CLMD_CLMD_SHIFT                      0                                                   /*!< ADC0_CLMD: CLMD Position                */
#define ADC_CLMD_CLMD(x)                         (((x)<<ADC_CLMD_CLMD_SHIFT)&ADC_CLMD_CLMD_MASK)     /*!< ADC0_CLMD                               */

/* ------- ADC0_CLMS                                ------ */
#define ADC_CLMS_CLMS_MASK                       (0x3FUL << ADC_CLMS_CLMS_SHIFT)                     /*!< ADC0_CLMS: CLMS Mask                    */
#define ADC_CLMS_CLMS_SHIFT                      0                                                   /*!< ADC0_CLMS: CLMS Position                */
#define ADC_CLMS_CLMS(x)                         (((x)<<ADC_CLMS_CLMS_SHIFT)&ADC_CLMS_CLMS_MASK)     /*!< ADC0_CLMS                               */

/* ------- ADC0_CLM4                                ------ */
#define ADC_CLM4_CLM4_MASK                       (0x3FFUL << ADC_CLM4_CLM4_SHIFT)                    /*!< ADC0_CLM4: CLM4 Mask                    */
#define ADC_CLM4_CLM4_SHIFT                      0                                                   /*!< ADC0_CLM4: CLM4 Position                */
#define ADC_CLM4_CLM4(x)                         (((x)<<ADC_CLM4_CLM4_SHIFT)&ADC_CLM4_CLM4_MASK)     /*!< ADC0_CLM4                               */

/* ------- ADC0_CLM3                                ------ */
#define ADC_CLM3_CLM3_MASK                       (0x1FFUL << ADC_CLM3_CLM3_SHIFT)                    /*!< ADC0_CLM3: CLM3 Mask                    */
#define ADC_CLM3_CLM3_SHIFT                      0                                                   /*!< ADC0_CLM3: CLM3 Position                */
#define ADC_CLM3_CLM3(x)                         (((x)<<ADC_CLM3_CLM3_SHIFT)&ADC_CLM3_CLM3_MASK)     /*!< ADC0_CLM3                               */

/* ------- ADC0_CLM2                                ------ */
#define ADC_CLM2_CLM2_MASK                       (0xFFUL << ADC_CLM2_CLM2_SHIFT)                     /*!< ADC0_CLM2: CLM2 Mask                    */
#define ADC_CLM2_CLM2_SHIFT                      0                                                   /*!< ADC0_CLM2: CLM2 Position                */
#define ADC_CLM2_CLM2(x)                         (((x)<<ADC_CLM2_CLM2_SHIFT)&ADC_CLM2_CLM2_MASK)     /*!< ADC0_CLM2                               */

/* ------- ADC0_CLM1                                ------ */
#define ADC_CLM1_CLM1_MASK                       (0x7FUL << ADC_CLM1_CLM1_SHIFT)                     /*!< ADC0_CLM1: CLM1 Mask                    */
#define ADC_CLM1_CLM1_SHIFT                      0                                                   /*!< ADC0_CLM1: CLM1 Position                */
#define ADC_CLM1_CLM1(x)                         (((x)<<ADC_CLM1_CLM1_SHIFT)&ADC_CLM1_CLM1_MASK)     /*!< ADC0_CLM1                               */

/* ------- ADC0_CLM0                                ------ */
#define ADC_CLM0_CLM0_MASK                       (0x3FUL << ADC_CLM0_CLM0_SHIFT)                     /*!< ADC0_CLM0: CLM0 Mask                    */
#define ADC_CLM0_CLM0_SHIFT                      0                                                   /*!< ADC0_CLM0: CLM0 Position                */
#define ADC_CLM0_CLM0(x)                         (((x)<<ADC_CLM0_CLM0_SHIFT)&ADC_CLM0_CLM0_MASK)     /*!< ADC0_CLM0                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define ADC0_SC1A                      (ADC0->SC1A)
#define ADC0_SC1B                      (ADC0->SC1B)
#define ADC0_CFG1                      (ADC0->CFG1)
#define ADC0_CFG2                      (ADC0->CFG2)
#define ADC0_RA                        (ADC0->RA)
#define ADC0_RB                        (ADC0->RB)
#define ADC0_CV1                       (ADC0->CV1)
#define ADC0_CV2                       (ADC0->CV2)
#define ADC0_SC2                       (ADC0->SC2)
#define ADC0_SC3                       (ADC0->SC3)
#define ADC0_OFS                       (ADC0->OFS)
#define ADC0_PG                        (ADC0->PG)
#define ADC0_MG                        (ADC0->MG)
#define ADC0_CLPD                      (ADC0->CLPD)
#define ADC0_CLPS                      (ADC0->CLPS)
#define ADC0_CLP4                      (ADC0->CLP4)
#define ADC0_CLP3                      (ADC0->CLP3)
#define ADC0_CLP2                      (ADC0->CLP2)
#define ADC0_CLP1                      (ADC0->CLP1)
#define ADC0_CLP0                      (ADC0->CLP0)
#define ADC0_CLMD                      (ADC0->CLMD)
#define ADC0_CLMS                      (ADC0->CLMS)
#define ADC0_CLM4                      (ADC0->CLM4)
#define ADC0_CLM3                      (ADC0->CLM3)
#define ADC0_CLM2                      (ADC0->CLM2)
#define ADC0_CLM1                      (ADC0->CLM1)
#define ADC0_CLM0                      (ADC0->CLM0)

/* ================================================================================ */
/* ================           BP (file:BP_0)                       ================ */
/* ================================================================================ */

/**
 * @brief Breakpoint Unit
 */
typedef struct {                                /*!<       BP Structure                                                 */
   __IO uint32_t  CTRL;                         /*!< 0000: FlashPatch Control Register                                  */
   __I  uint32_t  RESERVED0;                    /*!< 0004:                                                              */
   __IO uint32_t  COMP0;                        /*!< 0008: FlashPatch Comparator Register 0                             */
   __IO uint32_t  COMP1;                        /*!< 000C: FlashPatch Comparator Register 1                             */
   __I  uint32_t  RESERVED1[1008];              /*!< 0010:                                                              */
   __I  uint32_t  PID4;                         /*!< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PID5;                         /*!< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PID6;                         /*!< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PID7;                         /*!< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PID0;                         /*!< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PID1;                         /*!< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PID2;                         /*!< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PID3;                         /*!< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CID0;                         /*!< 0FF0: Component Identification Register 0                          */
   __I  uint32_t  CID1;                         /*!< 0FF4: Component Identification Register 1                          */
   __I  uint32_t  CID2;                         /*!< 0FF8: Component Identification Register 2                          */
   __I  uint32_t  CID3;                         /*!< 0FFC: Component Identification Register 3                          */
} BP_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'BP' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- BP_CTRL                                  ------ */
#define BP_CTRL_ENABLE_MASK                      (0x01UL << BP_CTRL_ENABLE_SHIFT)                    /*!< BP_CTRL: ENABLE Mask                    */
#define BP_CTRL_ENABLE_SHIFT                     0                                                   /*!< BP_CTRL: ENABLE Position                */
#define BP_CTRL_KEY_MASK                         (0x01UL << BP_CTRL_KEY_SHIFT)                       /*!< BP_CTRL: KEY Mask                       */
#define BP_CTRL_KEY_SHIFT                        1                                                   /*!< BP_CTRL: KEY Position                   */
#define BP_CTRL_NUM_CODE_MASK                    (0x0FUL << BP_CTRL_NUM_CODE_SHIFT)                  /*!< BP_CTRL: NUM_CODE Mask                  */
#define BP_CTRL_NUM_CODE_SHIFT                   4                                                   /*!< BP_CTRL: NUM_CODE Position              */
#define BP_CTRL_NUM_CODE(x)                      (((x)<<BP_CTRL_NUM_CODE_SHIFT)&BP_CTRL_NUM_CODE_MASK) /*!< BP_CTRL                                 */

/* ------- BP_COMP0                                 ------ */
#define BP_COMP0_ENABLE_MASK                     (0x01UL << BP_COMP0_ENABLE_SHIFT)                   /*!< BP_COMP0: ENABLE Mask                   */
#define BP_COMP0_ENABLE_SHIFT                    0                                                   /*!< BP_COMP0: ENABLE Position               */
#define BP_COMP0_COMP_MASK                       (0x7FFFFFFUL << BP_COMP0_COMP_SHIFT)                /*!< BP_COMP0: COMP Mask                     */
#define BP_COMP0_COMP_SHIFT                      2                                                   /*!< BP_COMP0: COMP Position                 */
#define BP_COMP0_COMP(x)                         (((x)<<BP_COMP0_COMP_SHIFT)&BP_COMP0_COMP_MASK)     /*!< BP_COMP0                                */
#define BP_COMP0_BP_MATCH_MASK                   (0x03UL << BP_COMP0_BP_MATCH_SHIFT)                 /*!< BP_COMP0: BP_MATCH Mask                 */
#define BP_COMP0_BP_MATCH_SHIFT                  30                                                  /*!< BP_COMP0: BP_MATCH Position             */
#define BP_COMP0_BP_MATCH(x)                     (((x)<<BP_COMP0_BP_MATCH_SHIFT)&BP_COMP0_BP_MATCH_MASK) /*!< BP_COMP0                                */

/* ------- BP_COMP1                                 ------ */
#define BP_COMP1_ENABLE_MASK                     (0x01UL << BP_COMP1_ENABLE_SHIFT)                   /*!< BP_COMP1: ENABLE Mask                   */
#define BP_COMP1_ENABLE_SHIFT                    0                                                   /*!< BP_COMP1: ENABLE Position               */
#define BP_COMP1_COMP_MASK                       (0x7FFFFFFUL << BP_COMP1_COMP_SHIFT)                /*!< BP_COMP1: COMP Mask                     */
#define BP_COMP1_COMP_SHIFT                      2                                                   /*!< BP_COMP1: COMP Position                 */
#define BP_COMP1_COMP(x)                         (((x)<<BP_COMP1_COMP_SHIFT)&BP_COMP1_COMP_MASK)     /*!< BP_COMP1                                */
#define BP_COMP1_REPLACE_MASK                    (0x03UL << BP_COMP1_REPLACE_SHIFT)                  /*!< BP_COMP1: REPLACE Mask                  */
#define BP_COMP1_REPLACE_SHIFT                   30                                                  /*!< BP_COMP1: REPLACE Position              */
#define BP_COMP1_REPLACE(x)                      (((x)<<BP_COMP1_REPLACE_SHIFT)&BP_COMP1_REPLACE_MASK) /*!< BP_COMP1                                */

/* ------- BP_PID4                                  ------ */
#define BP_PID4_JEP106_MASK                      (0x0FUL << BP_PID4_JEP106_SHIFT)                    /*!< BP_PID4: JEP106 Mask                    */
#define BP_PID4_JEP106_SHIFT                     0                                                   /*!< BP_PID4: JEP106 Position                */
#define BP_PID4_JEP106(x)                        (((x)<<BP_PID4_JEP106_SHIFT)&BP_PID4_JEP106_MASK)   /*!< BP_PID4                                 */
#define BP_PID4_c4KB_MASK                        (0x0FUL << BP_PID4_c4KB_SHIFT)                      /*!< BP_PID4: c4KB Mask                      */
#define BP_PID4_c4KB_SHIFT                       4                                                   /*!< BP_PID4: c4KB Position                  */
#define BP_PID4_c4KB(x)                          (((x)<<BP_PID4_c4KB_SHIFT)&BP_PID4_c4KB_MASK)       /*!< BP_PID4                                 */

/* ------- BP_PID                                   ------ */

/* ------- BP_PID0                                  ------ */
#define BP_PID0_PartNumber_MASK                  (0xFFUL << BP_PID0_PartNumber_SHIFT)                /*!< BP_PID0: PartNumber Mask                */
#define BP_PID0_PartNumber_SHIFT                 0                                                   /*!< BP_PID0: PartNumber Position            */
#define BP_PID0_PartNumber(x)                    (((x)<<BP_PID0_PartNumber_SHIFT)&BP_PID0_PartNumber_MASK) /*!< BP_PID0                                 */

/* ------- BP_PID1                                  ------ */
#define BP_PID1_PartNumber_MASK                  (0x0FUL << BP_PID1_PartNumber_SHIFT)                /*!< BP_PID1: PartNumber Mask                */
#define BP_PID1_PartNumber_SHIFT                 0                                                   /*!< BP_PID1: PartNumber Position            */
#define BP_PID1_PartNumber(x)                    (((x)<<BP_PID1_PartNumber_SHIFT)&BP_PID1_PartNumber_MASK) /*!< BP_PID1                                 */
#define BP_PID1_JEP106_identity_code_MASK        (0x0FUL << BP_PID1_JEP106_identity_code_SHIFT)      /*!< BP_PID1: JEP106_identity_code Mask      */
#define BP_PID1_JEP106_identity_code_SHIFT       4                                                   /*!< BP_PID1: JEP106_identity_code Position  */
#define BP_PID1_JEP106_identity_code(x)          (((x)<<BP_PID1_JEP106_identity_code_SHIFT)&BP_PID1_JEP106_identity_code_MASK) /*!< BP_PID1                                 */

/* ------- BP_PID2                                  ------ */
#define BP_PID2_JEP106_identity_code_MASK        (0x07UL << BP_PID2_JEP106_identity_code_SHIFT)      /*!< BP_PID2: JEP106_identity_code Mask      */
#define BP_PID2_JEP106_identity_code_SHIFT       0                                                   /*!< BP_PID2: JEP106_identity_code Position  */
#define BP_PID2_JEP106_identity_code(x)          (((x)<<BP_PID2_JEP106_identity_code_SHIFT)&BP_PID2_JEP106_identity_code_MASK) /*!< BP_PID2                                 */
#define BP_PID2_JEP106_identity_code_used_MASK   (0x01UL << BP_PID2_JEP106_identity_code_used_SHIFT) /*!< BP_PID2: JEP106_identity_code_used Mask */
#define BP_PID2_JEP106_identity_code_used_SHIFT  3                                                   /*!< BP_PID2: JEP106_identity_code_used Position*/
#define BP_PID2_Revision_MASK                    (0x0FUL << BP_PID2_Revision_SHIFT)                  /*!< BP_PID2: Revision Mask                  */
#define BP_PID2_Revision_SHIFT                   4                                                   /*!< BP_PID2: Revision Position              */
#define BP_PID2_Revision(x)                      (((x)<<BP_PID2_Revision_SHIFT)&BP_PID2_Revision_MASK) /*!< BP_PID2                                 */

/* ------- BP_PID3                                  ------ */
#define BP_PID3_CustomerModified_MASK            (0x0FUL << BP_PID3_CustomerModified_SHIFT)          /*!< BP_PID3: CustomerModified Mask          */
#define BP_PID3_CustomerModified_SHIFT           0                                                   /*!< BP_PID3: CustomerModified Position      */
#define BP_PID3_CustomerModified(x)              (((x)<<BP_PID3_CustomerModified_SHIFT)&BP_PID3_CustomerModified_MASK) /*!< BP_PID3                                 */
#define BP_PID3_RevAnd_MASK                      (0x0FUL << BP_PID3_RevAnd_SHIFT)                    /*!< BP_PID3: RevAnd Mask                    */
#define BP_PID3_RevAnd_SHIFT                     4                                                   /*!< BP_PID3: RevAnd Position                */
#define BP_PID3_RevAnd(x)                        (((x)<<BP_PID3_RevAnd_SHIFT)&BP_PID3_RevAnd_MASK)   /*!< BP_PID3                                 */

/* ------- BP_CID0                                  ------ */
#define BP_CID0_Preamble_MASK                    (0xFFUL << BP_CID0_Preamble_SHIFT)                  /*!< BP_CID0: Preamble Mask                  */
#define BP_CID0_Preamble_SHIFT                   0                                                   /*!< BP_CID0: Preamble Position              */
#define BP_CID0_Preamble(x)                      (((x)<<BP_CID0_Preamble_SHIFT)&BP_CID0_Preamble_MASK) /*!< BP_CID0                                 */

/* ------- BP_CID1                                  ------ */
#define BP_CID1_Preamble_MASK                    (0x0FUL << BP_CID1_Preamble_SHIFT)                  /*!< BP_CID1: Preamble Mask                  */
#define BP_CID1_Preamble_SHIFT                   0                                                   /*!< BP_CID1: Preamble Position              */
#define BP_CID1_Preamble(x)                      (((x)<<BP_CID1_Preamble_SHIFT)&BP_CID1_Preamble_MASK) /*!< BP_CID1                                 */
#define BP_CID1_ComponentClass_MASK              (0x0FUL << BP_CID1_ComponentClass_SHIFT)            /*!< BP_CID1: ComponentClass Mask            */
#define BP_CID1_ComponentClass_SHIFT             4                                                   /*!< BP_CID1: ComponentClass Position        */
#define BP_CID1_ComponentClass(x)                (((x)<<BP_CID1_ComponentClass_SHIFT)&BP_CID1_ComponentClass_MASK) /*!< BP_CID1                                 */

/* ------- BP_CID2                                  ------ */
#define BP_CID2_Preamble_MASK                    (0xFFUL << BP_CID2_Preamble_SHIFT)                  /*!< BP_CID2: Preamble Mask                  */
#define BP_CID2_Preamble_SHIFT                   0                                                   /*!< BP_CID2: Preamble Position              */
#define BP_CID2_Preamble(x)                      (((x)<<BP_CID2_Preamble_SHIFT)&BP_CID2_Preamble_MASK) /*!< BP_CID2                                 */

/* ------- BP_CID3                                  ------ */
#define BP_CID3_Preamble_MASK                    (0xFFUL << BP_CID3_Preamble_SHIFT)                  /*!< BP_CID3: Preamble Mask                  */
#define BP_CID3_Preamble_SHIFT                   0                                                   /*!< BP_CID3: Preamble Position              */
#define BP_CID3_Preamble(x)                      (((x)<<BP_CID3_Preamble_SHIFT)&BP_CID3_Preamble_MASK) /*!< BP_CID3                                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'BP' Register Access macros                          ----------- */
/* -------------------------------------------------------------------------------- */

#define BP_CTRL                        (BP->CTRL)
#define BP_COMP0                       (BP->COMP0)
#define BP_COMP1                       (BP->COMP1)
#define BP_PID4                        (BP->PID4)
#define BP_PID5                        (BP->PID5)
#define BP_PID6                        (BP->PID6)
#define BP_PID7                        (BP->PID7)
#define BP_PID0                        (BP->PID0)
#define BP_PID1                        (BP->PID1)
#define BP_PID2                        (BP->PID2)
#define BP_PID3                        (BP->PID3)
#define BP_CID0                        (BP->CID0)
#define BP_CID1                        (BP->CID1)
#define BP_CID2                        (BP->CID2)
#define BP_CID3                        (BP->CID3)

/* ================================================================================ */
/* ================           CMP0 (file:CMP0_MKL_DMA)             ================ */
/* ================================================================================ */

/**
 * @brief High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX) (CMP0)
 */
typedef struct {                                /*!<       CMP0 Structure                                               */
   __IO uint8_t   CR0;                          /*!< 0000: CMP Control Register 0                                       */
   __IO uint8_t   CR1;                          /*!< 0001: CMP Control Register 1                                       */
   __IO uint8_t   FPR;                          /*!< 0002: CMP Filter Period Register                                   */
   __IO uint8_t   SCR;                          /*!< 0003: CMP Status and Control Register                              */
   __IO uint8_t   DACCR;                        /*!< 0004: DAC Control Register                                         */
   __IO uint8_t   MUXCR;                        /*!< 0005: MUX Control Register                                         */
} CMP0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'CMP0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- CMP0_CR0                                 ------ */
#define CMP_CR0_HYSTCTR_MASK                     (0x03UL << CMP_CR0_HYSTCTR_SHIFT)                   /*!< CMP0_CR0: HYSTCTR Mask                  */
#define CMP_CR0_HYSTCTR_SHIFT                    0                                                   /*!< CMP0_CR0: HYSTCTR Position              */
#define CMP_CR0_HYSTCTR(x)                       (((x)<<CMP_CR0_HYSTCTR_SHIFT)&CMP_CR0_HYSTCTR_MASK) /*!< CMP0_CR0                                */
#define CMP_CR0_FILTER_CNT_MASK                  (0x07UL << CMP_CR0_FILTER_CNT_SHIFT)                /*!< CMP0_CR0: FILTER_CNT Mask               */
#define CMP_CR0_FILTER_CNT_SHIFT                 4                                                   /*!< CMP0_CR0: FILTER_CNT Position           */
#define CMP_CR0_FILTER_CNT(x)                    (((x)<<CMP_CR0_FILTER_CNT_SHIFT)&CMP_CR0_FILTER_CNT_MASK) /*!< CMP0_CR0                                */

/* ------- CMP0_CR1                                 ------ */
#define CMP_CR1_EN_MASK                          (0x01UL << CMP_CR1_EN_SHIFT)                        /*!< CMP0_CR1: EN Mask                       */
#define CMP_CR1_EN_SHIFT                         0                                                   /*!< CMP0_CR1: EN Position                   */
#define CMP_CR1_OPE_MASK                         (0x01UL << CMP_CR1_OPE_SHIFT)                       /*!< CMP0_CR1: OPE Mask                      */
#define CMP_CR1_OPE_SHIFT                        1                                                   /*!< CMP0_CR1: OPE Position                  */
#define CMP_CR1_COS_MASK                         (0x01UL << CMP_CR1_COS_SHIFT)                       /*!< CMP0_CR1: COS Mask                      */
#define CMP_CR1_COS_SHIFT                        2                                                   /*!< CMP0_CR1: COS Position                  */
#define CMP_CR1_INV_MASK                         (0x01UL << CMP_CR1_INV_SHIFT)                       /*!< CMP0_CR1: INV Mask                      */
#define CMP_CR1_INV_SHIFT                        3                                                   /*!< CMP0_CR1: INV Position                  */
#define CMP_CR1_PMODE_MASK                       (0x01UL << CMP_CR1_PMODE_SHIFT)                     /*!< CMP0_CR1: PMODE Mask                    */
#define CMP_CR1_PMODE_SHIFT                      4                                                   /*!< CMP0_CR1: PMODE Position                */
#define CMP_CR1_TRIGM_MASK                       (0x01UL << CMP_CR1_TRIGM_SHIFT)                     /*!< CMP0_CR1: TRIGM Mask                    */
#define CMP_CR1_TRIGM_SHIFT                      5                                                   /*!< CMP0_CR1: TRIGM Position                */
#define CMP_CR1_WE_MASK                          (0x01UL << CMP_CR1_WE_SHIFT)                        /*!< CMP0_CR1: WE Mask                       */
#define CMP_CR1_WE_SHIFT                         6                                                   /*!< CMP0_CR1: WE Position                   */
#define CMP_CR1_SE_MASK                          (0x01UL << CMP_CR1_SE_SHIFT)                        /*!< CMP0_CR1: SE Mask                       */
#define CMP_CR1_SE_SHIFT                         7                                                   /*!< CMP0_CR1: SE Position                   */

/* ------- CMP0_FPR                                 ------ */
#define CMP_FPR_FILT_PER_MASK                    (0xFFUL << CMP_FPR_FILT_PER_SHIFT)                  /*!< CMP0_FPR: FILT_PER Mask                 */
#define CMP_FPR_FILT_PER_SHIFT                   0                                                   /*!< CMP0_FPR: FILT_PER Position             */
#define CMP_FPR_FILT_PER(x)                      (((x)<<CMP_FPR_FILT_PER_SHIFT)&CMP_FPR_FILT_PER_MASK) /*!< CMP0_FPR                                */

/* ------- CMP0_SCR                                 ------ */
#define CMP_SCR_COUT_MASK                        (0x01UL << CMP_SCR_COUT_SHIFT)                      /*!< CMP0_SCR: COUT Mask                     */
#define CMP_SCR_COUT_SHIFT                       0                                                   /*!< CMP0_SCR: COUT Position                 */
#define CMP_SCR_CFF_MASK                         (0x01UL << CMP_SCR_CFF_SHIFT)                       /*!< CMP0_SCR: CFF Mask                      */
#define CMP_SCR_CFF_SHIFT                        1                                                   /*!< CMP0_SCR: CFF Position                  */
#define CMP_SCR_CFR_MASK                         (0x01UL << CMP_SCR_CFR_SHIFT)                       /*!< CMP0_SCR: CFR Mask                      */
#define CMP_SCR_CFR_SHIFT                        2                                                   /*!< CMP0_SCR: CFR Position                  */
#define CMP_SCR_IEF_MASK                         (0x01UL << CMP_SCR_IEF_SHIFT)                       /*!< CMP0_SCR: IEF Mask                      */
#define CMP_SCR_IEF_SHIFT                        3                                                   /*!< CMP0_SCR: IEF Position                  */
#define CMP_SCR_IER_MASK                         (0x01UL << CMP_SCR_IER_SHIFT)                       /*!< CMP0_SCR: IER Mask                      */
#define CMP_SCR_IER_SHIFT                        4                                                   /*!< CMP0_SCR: IER Position                  */
#define CMP_SCR_DMAEN_MASK                       (0x01UL << CMP_SCR_DMAEN_SHIFT)                     /*!< CMP0_SCR: DMAEN Mask                    */
#define CMP_SCR_DMAEN_SHIFT                      6                                                   /*!< CMP0_SCR: DMAEN Position                */

/* ------- CMP0_DACCR                               ------ */
#define CMP_DACCR_VOSEL_MASK                     (0x3FUL << CMP_DACCR_VOSEL_SHIFT)                   /*!< CMP0_DACCR: VOSEL Mask                  */
#define CMP_DACCR_VOSEL_SHIFT                    0                                                   /*!< CMP0_DACCR: VOSEL Position              */
#define CMP_DACCR_VOSEL(x)                       (((x)<<CMP_DACCR_VOSEL_SHIFT)&CMP_DACCR_VOSEL_MASK) /*!< CMP0_DACCR                              */
#define CMP_DACCR_VRSEL_MASK                     (0x01UL << CMP_DACCR_VRSEL_SHIFT)                   /*!< CMP0_DACCR: VRSEL Mask                  */
#define CMP_DACCR_VRSEL_SHIFT                    6                                                   /*!< CMP0_DACCR: VRSEL Position              */
#define CMP_DACCR_DACEN_MASK                     (0x01UL << CMP_DACCR_DACEN_SHIFT)                   /*!< CMP0_DACCR: DACEN Mask                  */
#define CMP_DACCR_DACEN_SHIFT                    7                                                   /*!< CMP0_DACCR: DACEN Position              */

/* ------- CMP0_MUXCR                               ------ */
#define CMP_MUXCR_MSEL_MASK                      (0x07UL << CMP_MUXCR_MSEL_SHIFT)                    /*!< CMP0_MUXCR: MSEL Mask                   */
#define CMP_MUXCR_MSEL_SHIFT                     0                                                   /*!< CMP0_MUXCR: MSEL Position               */
#define CMP_MUXCR_MSEL(x)                        (((x)<<CMP_MUXCR_MSEL_SHIFT)&CMP_MUXCR_MSEL_MASK)   /*!< CMP0_MUXCR                              */
#define CMP_MUXCR_PSEL_MASK                      (0x07UL << CMP_MUXCR_PSEL_SHIFT)                    /*!< CMP0_MUXCR: PSEL Mask                   */
#define CMP_MUXCR_PSEL_SHIFT                     3                                                   /*!< CMP0_MUXCR: PSEL Position               */
#define CMP_MUXCR_PSEL(x)                        (((x)<<CMP_MUXCR_PSEL_SHIFT)&CMP_MUXCR_PSEL_MASK)   /*!< CMP0_MUXCR                              */
#define CMP_MUXCR_PSTM_MASK                      (0x01UL << CMP_MUXCR_PSTM_SHIFT)                    /*!< CMP0_MUXCR: PSTM Mask                   */
#define CMP_MUXCR_PSTM_SHIFT                     7                                                   /*!< CMP0_MUXCR: PSTM Position               */

/* -------------------------------------------------------------------------------- */
/* -----------     'CMP0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define CMP0_CR0                       (CMP0->CR0)
#define CMP0_CR1                       (CMP0->CR1)
#define CMP0_FPR                       (CMP0->FPR)
#define CMP0_SCR                       (CMP0->SCR)
#define CMP0_DACCR                     (CMP0->DACCR)
#define CMP0_MUXCR                     (CMP0->MUXCR)

/* ================================================================================ */
/* ================           DAC0 (file:DAC0_MKLZ4)               ================ */
/* ================================================================================ */

/**
 * @brief 12-Bit Digital-to-Analog Converter (DAC0)
 */
typedef struct {                                /*!<       DAC0 Structure                                               */
   struct { /* (cluster) */                     /*!< 0000: (size=0x0004, 4)                                             */
      __IO uint8_t   DATL;                      /*!< 0000: DAC Data Low Register                                        */
      __IO uint8_t   DATH;                      /*!< 0001: DAC Data High Register                                       */
   } DAT[2];
   __I  uint32_t  RESERVED0[7];                 /*!< 0004:                                                              */
   __IO uint8_t   SR;                           /*!< 0020: DAC Status Register                                          */
   __IO uint8_t   C0;                           /*!< 0021: DAC Control Register                                         */
   __IO uint8_t   C1;                           /*!< 0022: DAC Control Register 1                                       */
   __IO uint8_t   C2;                           /*!< 0023: DAC Control Register 2                                       */
} DAC0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DAC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- DAC0_DATL                                ------ */
#define DAC_DATL_DATA0_MASK                      (0xFFUL << DAC_DATL_DATA0_SHIFT)                    /*!< DAC0_DATL: DATA0 Mask                   */
#define DAC_DATL_DATA0_SHIFT                     0                                                   /*!< DAC0_DATL: DATA0 Position               */
#define DAC_DATL_DATA0(x)                        (((x)<<DAC_DATL_DATA0_SHIFT)&DAC_DATL_DATA0_MASK)   /*!< DAC0_DATL                               */

/* ------- DAC0_DATH                                ------ */
#define DAC_DATH_DATA1_MASK                      (0x0FUL << DAC_DATH_DATA1_SHIFT)                    /*!< DAC0_DATH: DATA1 Mask                   */
#define DAC_DATH_DATA1_SHIFT                     0                                                   /*!< DAC0_DATH: DATA1 Position               */
#define DAC_DATH_DATA1(x)                        (((x)<<DAC_DATH_DATA1_SHIFT)&DAC_DATH_DATA1_MASK)   /*!< DAC0_DATH                               */

/* ------- DAC0_SR                                  ------ */
#define DAC_SR_DACBFRPBF_MASK                    (0x01UL << DAC_SR_DACBFRPBF_SHIFT)                  /*!< DAC0_SR: DACBFRPBF Mask                 */
#define DAC_SR_DACBFRPBF_SHIFT                   0                                                   /*!< DAC0_SR: DACBFRPBF Position             */
#define DAC_SR_DACBFRPTF_MASK                    (0x01UL << DAC_SR_DACBFRPTF_SHIFT)                  /*!< DAC0_SR: DACBFRPTF Mask                 */
#define DAC_SR_DACBFRPTF_SHIFT                   1                                                   /*!< DAC0_SR: DACBFRPTF Position             */

/* ------- DAC0_C0                                  ------ */
#define DAC_C0_DACBBIEN_MASK                     (0x01UL << DAC_C0_DACBBIEN_SHIFT)                   /*!< DAC0_C0: DACBBIEN Mask                  */
#define DAC_C0_DACBBIEN_SHIFT                    0                                                   /*!< DAC0_C0: DACBBIEN Position              */
#define DAC_C0_DACBTIEN_MASK                     (0x01UL << DAC_C0_DACBTIEN_SHIFT)                   /*!< DAC0_C0: DACBTIEN Mask                  */
#define DAC_C0_DACBTIEN_SHIFT                    1                                                   /*!< DAC0_C0: DACBTIEN Position              */
#define DAC_C0_LPEN_MASK                         (0x01UL << DAC_C0_LPEN_SHIFT)                       /*!< DAC0_C0: LPEN Mask                      */
#define DAC_C0_LPEN_SHIFT                        3                                                   /*!< DAC0_C0: LPEN Position                  */
#define DAC_C0_DACSWTRG_MASK                     (0x01UL << DAC_C0_DACSWTRG_SHIFT)                   /*!< DAC0_C0: DACSWTRG Mask                  */
#define DAC_C0_DACSWTRG_SHIFT                    4                                                   /*!< DAC0_C0: DACSWTRG Position              */
#define DAC_C0_DACTRGSEL_MASK                    (0x01UL << DAC_C0_DACTRGSEL_SHIFT)                  /*!< DAC0_C0: DACTRGSEL Mask                 */
#define DAC_C0_DACTRGSEL_SHIFT                   5                                                   /*!< DAC0_C0: DACTRGSEL Position             */
#define DAC_C0_DACRFS_MASK                       (0x01UL << DAC_C0_DACRFS_SHIFT)                     /*!< DAC0_C0: DACRFS Mask                    */
#define DAC_C0_DACRFS_SHIFT                      6                                                   /*!< DAC0_C0: DACRFS Position                */
#define DAC_C0_DACEN_MASK                        (0x01UL << DAC_C0_DACEN_SHIFT)                      /*!< DAC0_C0: DACEN Mask                     */
#define DAC_C0_DACEN_SHIFT                       7                                                   /*!< DAC0_C0: DACEN Position                 */

/* ------- DAC0_C1                                  ------ */
#define DAC_C1_DACBFEN_MASK                      (0x01UL << DAC_C1_DACBFEN_SHIFT)                    /*!< DAC0_C1: DACBFEN Mask                   */
#define DAC_C1_DACBFEN_SHIFT                     0                                                   /*!< DAC0_C1: DACBFEN Position               */
#define DAC_C1_DACBFMD_MASK                      (0x01UL << DAC_C1_DACBFMD_SHIFT)                    /*!< DAC0_C1: DACBFMD Mask                   */
#define DAC_C1_DACBFMD_SHIFT                     2                                                   /*!< DAC0_C1: DACBFMD Position               */
#define DAC_C1_DMAEN_MASK                        (0x01UL << DAC_C1_DMAEN_SHIFT)                      /*!< DAC0_C1: DMAEN Mask                     */
#define DAC_C1_DMAEN_SHIFT                       7                                                   /*!< DAC0_C1: DMAEN Position                 */

/* ------- DAC0_C2                                  ------ */
#define DAC_C2_DACBFUP_MASK                      (0x01UL << DAC_C2_DACBFUP_SHIFT)                    /*!< DAC0_C2: DACBFUP Mask                   */
#define DAC_C2_DACBFUP_SHIFT                     0                                                   /*!< DAC0_C2: DACBFUP Position               */
#define DAC_C2_DACBFRP_MASK                      (0x01UL << DAC_C2_DACBFRP_SHIFT)                    /*!< DAC0_C2: DACBFRP Mask                   */
#define DAC_C2_DACBFRP_SHIFT                     4                                                   /*!< DAC0_C2: DACBFRP Position               */

/* -------------------------------------------------------------------------------- */
/* -----------     'DAC0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define DAC0_DAT0L                     (DAC0->DAT[0].DATL)
#define DAC0_DAT0H                     (DAC0->DAT[0].DATH)
#define DAC0_DAT1L                     (DAC0->DAT[1].DATL)
#define DAC0_DAT1H                     (DAC0->DAT[1].DATH)
#define DAC0_SR                        (DAC0->SR)
#define DAC0_C0                        (DAC0->C0)
#define DAC0_C1                        (DAC0->C1)
#define DAC0_C2                        (DAC0->C2)

/* ================================================================================ */
/* ================           DMA (file:DMA_MKLZ4)                 ================ */
/* ================================================================================ */

/**
 * @brief DMA Controller (DMA)
 */
typedef struct {                                /*!<       DMA Structure                                                */
   __I  uint32_t  RESERVED0[64];                /*!< 0000:                                                              */
   struct { /* (cluster) */                     /*!< 0100: (size=0x0040, 64)                                            */
      __IO uint32_t  SAR;                       /*!< 0100: Source Address Register                                      */
      __IO uint32_t  DAR;                       /*!< 0104: Destination Address Register                                 */
      union {                                   /*!< 0100: (size=0004)                                                  */
         __IO uint32_t  DSR_BCR;                /*!< 0108: DMA Status Register / Byte Count Register                    */
         struct {                               /*!< 0100: (size=0004)                                                  */
            __I  uint8_t   RESERVED0[3];        /*!< 0108:                                                              */
            __IO uint8_t   DSR;                 /*!< 010B: DMA Status Register                                          */
         };
      };
      __IO uint32_t  DCR;                       /*!< 010C: DMA Control Register                                         */
   } DMA[4];
} DMA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DMA' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- DMA_SAR                                  ------ */
#define DMA_SAR_SAR_MASK                         (0xFFFFFFFFUL << DMA_SAR_SAR_SHIFT)                 /*!< DMA_SAR: SAR Mask                       */
#define DMA_SAR_SAR_SHIFT                        0                                                   /*!< DMA_SAR: SAR Position                   */
#define DMA_SAR_SAR(x)                           (((x)<<DMA_SAR_SAR_SHIFT)&DMA_SAR_SAR_MASK)         /*!< DMA_SAR                                 */

/* ------- DMA_DAR                                  ------ */
#define DMA_DAR_DAR_MASK                         (0xFFFFFFFFUL << DMA_DAR_DAR_SHIFT)                 /*!< DMA_DAR: DAR Mask                       */
#define DMA_DAR_DAR_SHIFT                        0                                                   /*!< DMA_DAR: DAR Position                   */
#define DMA_DAR_DAR(x)                           (((x)<<DMA_DAR_DAR_SHIFT)&DMA_DAR_DAR_MASK)         /*!< DMA_DAR                                 */

/* ------- DMA_DSR_BCR                              ------ */
#define DMA_DSR_BCR_BCR_MASK                     (0xFFFFFFUL << DMA_DSR_BCR_BCR_SHIFT)               /*!< DMA_DSR_BCR: BCR Mask                   */
#define DMA_DSR_BCR_BCR_SHIFT                    0                                                   /*!< DMA_DSR_BCR: BCR Position               */
#define DMA_DSR_BCR_BCR(x)                       (((x)<<DMA_DSR_BCR_BCR_SHIFT)&DMA_DSR_BCR_BCR_MASK) /*!< DMA_DSR_BCR                             */
#define DMA_DSR_BCR_DONE_MASK                    (0x01UL << DMA_DSR_BCR_DONE_SHIFT)                  /*!< DMA_DSR_BCR: DONE Mask                  */
#define DMA_DSR_BCR_DONE_SHIFT                   24                                                  /*!< DMA_DSR_BCR: DONE Position              */
#define DMA_DSR_BCR_BSY_MASK                     (0x01UL << DMA_DSR_BCR_BSY_SHIFT)                   /*!< DMA_DSR_BCR: BSY Mask                   */
#define DMA_DSR_BCR_BSY_SHIFT                    25                                                  /*!< DMA_DSR_BCR: BSY Position               */
#define DMA_DSR_BCR_REQ_MASK                     (0x01UL << DMA_DSR_BCR_REQ_SHIFT)                   /*!< DMA_DSR_BCR: REQ Mask                   */
#define DMA_DSR_BCR_REQ_SHIFT                    26                                                  /*!< DMA_DSR_BCR: REQ Position               */
#define DMA_DSR_BCR_BED_MASK                     (0x01UL << DMA_DSR_BCR_BED_SHIFT)                   /*!< DMA_DSR_BCR: BED Mask                   */
#define DMA_DSR_BCR_BED_SHIFT                    28                                                  /*!< DMA_DSR_BCR: BED Position               */
#define DMA_DSR_BCR_BES_MASK                     (0x01UL << DMA_DSR_BCR_BES_SHIFT)                   /*!< DMA_DSR_BCR: BES Mask                   */
#define DMA_DSR_BCR_BES_SHIFT                    29                                                  /*!< DMA_DSR_BCR: BES Position               */
#define DMA_DSR_BCR_CE_MASK                      (0x01UL << DMA_DSR_BCR_CE_SHIFT)                    /*!< DMA_DSR_BCR: CE Mask                    */
#define DMA_DSR_BCR_CE_SHIFT                     30                                                  /*!< DMA_DSR_BCR: CE Position                */

/* ------- DMA_DSR                                  ------ */
#define DMA_DSR_DONE_MASK                        (0x01UL << DMA_DSR_DONE_SHIFT)                      /*!< DMA_DSR: DONE Mask                      */
#define DMA_DSR_DONE_SHIFT                       0                                                   /*!< DMA_DSR: DONE Position                  */
#define DMA_DSR_BSY_MASK                         (0x01UL << DMA_DSR_BSY_SHIFT)                       /*!< DMA_DSR: BSY Mask                       */
#define DMA_DSR_BSY_SHIFT                        1                                                   /*!< DMA_DSR: BSY Position                   */
#define DMA_DSR_REQ_MASK                         (0x01UL << DMA_DSR_REQ_SHIFT)                       /*!< DMA_DSR: REQ Mask                       */
#define DMA_DSR_REQ_SHIFT                        2                                                   /*!< DMA_DSR: REQ Position                   */
#define DMA_DSR_BED_MASK                         (0x01UL << DMA_DSR_BED_SHIFT)                       /*!< DMA_DSR: BED Mask                       */
#define DMA_DSR_BED_SHIFT                        4                                                   /*!< DMA_DSR: BED Position                   */
#define DMA_DSR_BES_MASK                         (0x01UL << DMA_DSR_BES_SHIFT)                       /*!< DMA_DSR: BES Mask                       */
#define DMA_DSR_BES_SHIFT                        5                                                   /*!< DMA_DSR: BES Position                   */
#define DMA_DSR_CE_MASK                          (0x01UL << DMA_DSR_CE_SHIFT)                        /*!< DMA_DSR: CE Mask                        */
#define DMA_DSR_CE_SHIFT                         6                                                   /*!< DMA_DSR: CE Position                    */

/* ------- DMA_DCR                                  ------ */
#define DMA_DCR_LCH2_MASK                        (0x03UL << DMA_DCR_LCH2_SHIFT)                      /*!< DMA_DCR: LCH2 Mask                      */
#define DMA_DCR_LCH2_SHIFT                       0                                                   /*!< DMA_DCR: LCH2 Position                  */
#define DMA_DCR_LCH2(x)                          (((x)<<DMA_DCR_LCH2_SHIFT)&DMA_DCR_LCH2_MASK)       /*!< DMA_DCR                                 */
#define DMA_DCR_LCH1_MASK                        (0x03UL << DMA_DCR_LCH1_SHIFT)                      /*!< DMA_DCR: LCH1 Mask                      */
#define DMA_DCR_LCH1_SHIFT                       2                                                   /*!< DMA_DCR: LCH1 Position                  */
#define DMA_DCR_LCH1(x)                          (((x)<<DMA_DCR_LCH1_SHIFT)&DMA_DCR_LCH1_MASK)       /*!< DMA_DCR                                 */
#define DMA_DCR_LINKCC_MASK                      (0x03UL << DMA_DCR_LINKCC_SHIFT)                    /*!< DMA_DCR: LINKCC Mask                    */
#define DMA_DCR_LINKCC_SHIFT                     4                                                   /*!< DMA_DCR: LINKCC Position                */
#define DMA_DCR_LINKCC(x)                        (((x)<<DMA_DCR_LINKCC_SHIFT)&DMA_DCR_LINKCC_MASK)   /*!< DMA_DCR                                 */
#define DMA_DCR_D_REQ_MASK                       (0x01UL << DMA_DCR_D_REQ_SHIFT)                     /*!< DMA_DCR: D_REQ Mask                     */
#define DMA_DCR_D_REQ_SHIFT                      7                                                   /*!< DMA_DCR: D_REQ Position                 */
#define DMA_DCR_DMOD_MASK                        (0x0FUL << DMA_DCR_DMOD_SHIFT)                      /*!< DMA_DCR: DMOD Mask                      */
#define DMA_DCR_DMOD_SHIFT                       8                                                   /*!< DMA_DCR: DMOD Position                  */
#define DMA_DCR_DMOD(x)                          (((x)<<DMA_DCR_DMOD_SHIFT)&DMA_DCR_DMOD_MASK)       /*!< DMA_DCR                                 */
#define DMA_DCR_SMOD_MASK                        (0x0FUL << DMA_DCR_SMOD_SHIFT)                      /*!< DMA_DCR: SMOD Mask                      */
#define DMA_DCR_SMOD_SHIFT                       12                                                  /*!< DMA_DCR: SMOD Position                  */
#define DMA_DCR_SMOD(x)                          (((x)<<DMA_DCR_SMOD_SHIFT)&DMA_DCR_SMOD_MASK)       /*!< DMA_DCR                                 */
#define DMA_DCR_START_MASK                       (0x01UL << DMA_DCR_START_SHIFT)                     /*!< DMA_DCR: START Mask                     */
#define DMA_DCR_START_SHIFT                      16                                                  /*!< DMA_DCR: START Position                 */
#define DMA_DCR_DSIZE_MASK                       (0x03UL << DMA_DCR_DSIZE_SHIFT)                     /*!< DMA_DCR: DSIZE Mask                     */
#define DMA_DCR_DSIZE_SHIFT                      17                                                  /*!< DMA_DCR: DSIZE Position                 */
#define DMA_DCR_DSIZE(x)                         (((x)<<DMA_DCR_DSIZE_SHIFT)&DMA_DCR_DSIZE_MASK)     /*!< DMA_DCR                                 */
#define DMA_DCR_DINC_MASK                        (0x01UL << DMA_DCR_DINC_SHIFT)                      /*!< DMA_DCR: DINC Mask                      */
#define DMA_DCR_DINC_SHIFT                       19                                                  /*!< DMA_DCR: DINC Position                  */
#define DMA_DCR_SSIZE_MASK                       (0x03UL << DMA_DCR_SSIZE_SHIFT)                     /*!< DMA_DCR: SSIZE Mask                     */
#define DMA_DCR_SSIZE_SHIFT                      20                                                  /*!< DMA_DCR: SSIZE Position                 */
#define DMA_DCR_SSIZE(x)                         (((x)<<DMA_DCR_SSIZE_SHIFT)&DMA_DCR_SSIZE_MASK)     /*!< DMA_DCR                                 */
#define DMA_DCR_SINC_MASK                        (0x01UL << DMA_DCR_SINC_SHIFT)                      /*!< DMA_DCR: SINC Mask                      */
#define DMA_DCR_SINC_SHIFT                       22                                                  /*!< DMA_DCR: SINC Position                  */
#define DMA_DCR_EADREQ_MASK                      (0x01UL << DMA_DCR_EADREQ_SHIFT)                    /*!< DMA_DCR: EADREQ Mask                    */
#define DMA_DCR_EADREQ_SHIFT                     23                                                  /*!< DMA_DCR: EADREQ Position                */
#define DMA_DCR_AA_MASK                          (0x01UL << DMA_DCR_AA_SHIFT)                        /*!< DMA_DCR: AA Mask                        */
#define DMA_DCR_AA_SHIFT                         28                                                  /*!< DMA_DCR: AA Position                    */
#define DMA_DCR_CS_MASK                          (0x01UL << DMA_DCR_CS_SHIFT)                        /*!< DMA_DCR: CS Mask                        */
#define DMA_DCR_CS_SHIFT                         29                                                  /*!< DMA_DCR: CS Position                    */
#define DMA_DCR_ERQ_MASK                         (0x01UL << DMA_DCR_ERQ_SHIFT)                       /*!< DMA_DCR: ERQ Mask                       */
#define DMA_DCR_ERQ_SHIFT                        30                                                  /*!< DMA_DCR: ERQ Position                   */
#define DMA_DCR_EINT_MASK                        (0x01UL << DMA_DCR_EINT_SHIFT)                      /*!< DMA_DCR: EINT Mask                      */
#define DMA_DCR_EINT_SHIFT                       31                                                  /*!< DMA_DCR: EINT Position                  */

/* -------------------------------------------------------------------------------- */
/* -----------     'DMA' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define DMA_SAR0                       (DMA->DMA[0].SAR)
#define DMA_DAR0                       (DMA->DMA[0].DAR)
#define DMA_DSR_BCR0                   (DMA->DMA[0].DSR_BCR)
#define DMA_DSR0                       (DMA->DMA[0].DSR)
#define DMA_DCR0                       (DMA->DMA[0].DCR)
#define DMA_SAR1                       (DMA->DMA[1].SAR)
#define DMA_DAR1                       (DMA->DMA[1].DAR)
#define DMA_DSR_BCR1                   (DMA->DMA[1].DSR_BCR)
#define DMA_DSR1                       (DMA->DMA[1].DSR)
#define DMA_DCR1                       (DMA->DMA[1].DCR)
#define DMA_SAR2                       (DMA->DMA[2].SAR)
#define DMA_DAR2                       (DMA->DMA[2].DAR)
#define DMA_DSR_BCR2                   (DMA->DMA[2].DSR_BCR)
#define DMA_DSR2                       (DMA->DMA[2].DSR)
#define DMA_DCR2                       (DMA->DMA[2].DCR)
#define DMA_SAR3                       (DMA->DMA[3].SAR)
#define DMA_DAR3                       (DMA->DMA[3].DAR)
#define DMA_DSR_BCR3                   (DMA->DMA[3].DSR_BCR)
#define DMA_DSR3                       (DMA->DMA[3].DSR)
#define DMA_DCR3                       (DMA->DMA[3].DCR)

/* ================================================================================ */
/* ================           DMAMUX (file:DMAMUX_4CH)             ================ */
/* ================================================================================ */

/**
 * @brief DMA channel multiplexor (DMAMUX)
 */
typedef struct {                                /*!<       DMAMUX Structure                                             */
   __IO uint8_t   CHCFG[4];                     /*!< 0000: Channel Configuration Register                               */
} DMAMUX_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'DMAMUX' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- DMAMUX_CHCFG                             ------ */
#define DMAMUX_CHCFG_SOURCE_MASK                 (0x3FUL << DMAMUX_CHCFG_SOURCE_SHIFT)               /*!< DMAMUX_CHCFG: SOURCE Mask               */
#define DMAMUX_CHCFG_SOURCE_SHIFT                0                                                   /*!< DMAMUX_CHCFG: SOURCE Position           */
#define DMAMUX_CHCFG_SOURCE(x)                   (((x)<<DMAMUX_CHCFG_SOURCE_SHIFT)&DMAMUX_CHCFG_SOURCE_MASK) /*!< DMAMUX_CHCFG                            */
#define DMAMUX_CHCFG_TRIG_MASK                   (0x01UL << DMAMUX_CHCFG_TRIG_SHIFT)                 /*!< DMAMUX_CHCFG: TRIG Mask                 */
#define DMAMUX_CHCFG_TRIG_SHIFT                  6                                                   /*!< DMAMUX_CHCFG: TRIG Position             */
#define DMAMUX_CHCFG_ENBL_MASK                   (0x01UL << DMAMUX_CHCFG_ENBL_SHIFT)                 /*!< DMAMUX_CHCFG: ENBL Mask                 */
#define DMAMUX_CHCFG_ENBL_SHIFT                  7                                                   /*!< DMAMUX_CHCFG: ENBL Position             */

/* -------------------------------------------------------------------------------- */
/* -----------     'DMAMUX' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define DMAMUX_CHCFG0                  (DMAMUX->CHCFG[0])
#define DMAMUX_CHCFG1                  (DMAMUX->CHCFG[1])
#define DMAMUX_CHCFG2                  (DMAMUX->CHCFG[2])
#define DMAMUX_CHCFG3                  (DMAMUX->CHCFG[3])

/* ================================================================================ */
/* ================           FGPIOA (file:FGPIOA_0)               ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (PTA)
 */
typedef struct {                                /*!<       FGPIOA Structure                                             */
   __IO uint32_t  PDOR;                         /*!< 0000: Port Data Output Register                                    */
   __O  uint32_t  PSOR;                         /*!< 0004: Port Set Output Register                                     */
   __O  uint32_t  PCOR;                         /*!< 0008: Port Clear Output Register                                   */
   __O  uint32_t  PTOR;                         /*!< 000C: Port Toggle Output Register                                  */
   __I  uint32_t  PDIR;                         /*!< 0010: Port Data Input Register                                     */
   __IO uint32_t  PDDR;                         /*!< 0014: Port Data Direction Register                                 */
} FGPIOA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOA' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- FGPIOA_PDOR                              ------ */
#define GPIO_PDOR_PDO_MASK                       (0xFFFFFFFFUL << GPIO_PDOR_PDO_SHIFT)               /*!< FGPIOA_PDOR: PDO Mask                   */
#define GPIO_PDOR_PDO_SHIFT                      0                                                   /*!< FGPIOA_PDOR: PDO Position               */
#define GPIO_PDOR_PDO(x)                         (((x)<<GPIO_PDOR_PDO_SHIFT)&GPIO_PDOR_PDO_MASK)     /*!< FGPIOA_PDOR                             */

/* ------- FGPIOA_PSOR                              ------ */
#define GPIO_PSOR_PTSO_MASK                      (0xFFFFFFFFUL << GPIO_PSOR_PTSO_SHIFT)              /*!< FGPIOA_PSOR: PTSO Mask                  */
#define GPIO_PSOR_PTSO_SHIFT                     0                                                   /*!< FGPIOA_PSOR: PTSO Position              */
#define GPIO_PSOR_PTSO(x)                        (((x)<<GPIO_PSOR_PTSO_SHIFT)&GPIO_PSOR_PTSO_MASK)   /*!< FGPIOA_PSOR                             */

/* ------- FGPIOA_PCOR                              ------ */
#define GPIO_PCOR_PTCO_MASK                      (0xFFFFFFFFUL << GPIO_PCOR_PTCO_SHIFT)              /*!< FGPIOA_PCOR: PTCO Mask                  */
#define GPIO_PCOR_PTCO_SHIFT                     0                                                   /*!< FGPIOA_PCOR: PTCO Position              */
#define GPIO_PCOR_PTCO(x)                        (((x)<<GPIO_PCOR_PTCO_SHIFT)&GPIO_PCOR_PTCO_MASK)   /*!< FGPIOA_PCOR                             */

/* ------- FGPIOA_PTOR                              ------ */
#define GPIO_PTOR_PTTO_MASK                      (0xFFFFFFFFUL << GPIO_PTOR_PTTO_SHIFT)              /*!< FGPIOA_PTOR: PTTO Mask                  */
#define GPIO_PTOR_PTTO_SHIFT                     0                                                   /*!< FGPIOA_PTOR: PTTO Position              */
#define GPIO_PTOR_PTTO(x)                        (((x)<<GPIO_PTOR_PTTO_SHIFT)&GPIO_PTOR_PTTO_MASK)   /*!< FGPIOA_PTOR                             */

/* ------- FGPIOA_PDIR                              ------ */
#define GPIO_PDIR_PDI_MASK                       (0xFFFFFFFFUL << GPIO_PDIR_PDI_SHIFT)               /*!< FGPIOA_PDIR: PDI Mask                   */
#define GPIO_PDIR_PDI_SHIFT                      0                                                   /*!< FGPIOA_PDIR: PDI Position               */
#define GPIO_PDIR_PDI(x)                         (((x)<<GPIO_PDIR_PDI_SHIFT)&GPIO_PDIR_PDI_MASK)     /*!< FGPIOA_PDIR                             */

/* ------- FGPIOA_PDDR                              ------ */
#define GPIO_PDDR_PDD_MASK                       (0xFFFFFFFFUL << GPIO_PDDR_PDD_SHIFT)               /*!< FGPIOA_PDDR: PDD Mask                   */
#define GPIO_PDDR_PDD_SHIFT                      0                                                   /*!< FGPIOA_PDDR: PDD Position               */
#define GPIO_PDDR_PDD(x)                         (((x)<<GPIO_PDDR_PDD_SHIFT)&GPIO_PDDR_PDD_MASK)     /*!< FGPIOA_PDDR                             */

/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOA' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define FGPIOA_PDOR                    (FGPIOA->PDOR)
#define FGPIOA_PSOR                    (FGPIOA->PSOR)
#define FGPIOA_PCOR                    (FGPIOA->PCOR)
#define FGPIOA_PTOR                    (FGPIOA->PTOR)
#define FGPIOA_PDIR                    (FGPIOA->PDIR)
#define FGPIOA_PDDR                    (FGPIOA->PDDR)

/* ================================================================================ */
/* ================           FGPIOB (derived from FGPIOA)         ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (FPTB)
 */
typedef FGPIOA_Type FGPIOB_Type;  /*!< FGPIOB Structure                                            */


/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOB' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define FGPIOB_PDOR                    (FGPIOB->PDOR)
#define FGPIOB_PSOR                    (FGPIOB->PSOR)
#define FGPIOB_PCOR                    (FGPIOB->PCOR)
#define FGPIOB_PTOR                    (FGPIOB->PTOR)
#define FGPIOB_PDIR                    (FGPIOB->PDIR)
#define FGPIOB_PDDR                    (FGPIOB->PDDR)

/* ================================================================================ */
/* ================           FGPIOC (derived from FGPIOA)         ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (FPTC)
 */
typedef FGPIOA_Type FGPIOC_Type;  /*!< FGPIOC Structure                                            */


/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOC' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define FGPIOC_PDOR                    (FGPIOC->PDOR)
#define FGPIOC_PSOR                    (FGPIOC->PSOR)
#define FGPIOC_PCOR                    (FGPIOC->PCOR)
#define FGPIOC_PTOR                    (FGPIOC->PTOR)
#define FGPIOC_PDIR                    (FGPIOC->PDIR)
#define FGPIOC_PDDR                    (FGPIOC->PDDR)

/* ================================================================================ */
/* ================           FGPIOD (derived from FGPIOA)         ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (FPTD)
 */
typedef FGPIOA_Type FGPIOD_Type;  /*!< FGPIOD Structure                                            */


/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOD' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define FGPIOD_PDOR                    (FGPIOD->PDOR)
#define FGPIOD_PSOR                    (FGPIOD->PSOR)
#define FGPIOD_PCOR                    (FGPIOD->PCOR)
#define FGPIOD_PTOR                    (FGPIOD->PTOR)
#define FGPIOD_PDIR                    (FGPIOD->PDIR)
#define FGPIOD_PDDR                    (FGPIOD->PDDR)

/* ================================================================================ */
/* ================           FGPIOE (derived from FGPIOA)         ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (FPTE)
 */
typedef FGPIOA_Type FGPIOE_Type;  /*!< FGPIOE Structure                                            */


/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOE' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define FGPIOE_PDOR                    (FGPIOE->PDOR)
#define FGPIOE_PSOR                    (FGPIOE->PSOR)
#define FGPIOE_PCOR                    (FGPIOE->PCOR)
#define FGPIOE_PTOR                    (FGPIOE->PTOR)
#define FGPIOE_PDIR                    (FGPIOE->PDIR)
#define FGPIOE_PDDR                    (FGPIOE->PDDR)

/* ================================================================================ */
/* ================           FTFA (file:FTFA)                     ================ */
/* ================================================================================ */

/**
 * @brief Flash Memory Interface (FTFA)
 */
typedef struct {                                /*!<       FTFA Structure                                               */
   __IO uint8_t   FSTAT;                        /*!< 0000: Flash Status Register                                        */
   __IO uint8_t   FCNFG;                        /*!< 0001: Flash Configuration Register                                 */
   __I  uint8_t   FSEC;                         /*!< 0002: Flash Security Register                                      */
   __I  uint8_t   FOPT;                         /*!< 0003: Flash Option Register                                        */
   __IO uint8_t   FCCOB3;                       /*!< 0004: Flash Common Command Object Register 3 - Usually Flash address [7..0] */
   __IO uint8_t   FCCOB2;                       /*!< 0005: Flash Common Command Object Register 2 - Usually Flash address [15..8] */
   __IO uint8_t   FCCOB1;                       /*!< 0006: Flash Common Command Object Register 1 - Usually Flash address [23..16] */
   __IO uint8_t   FCCOB0;                       /*!< 0007: Flash Common Command Object Register 0 - Usually FCMD (a code that defines the flash command) */
   __IO uint8_t   FCCOB7;                       /*!< 0008: Flash Common Command Object Register 7 - Usually Data Byte 3 */
   __IO uint8_t   FCCOB6;                       /*!< 0009: Flash Common Command Object Register 6 - Usually Data Byte 2 */
   __IO uint8_t   FCCOB5;                       /*!< 000A: Flash Common Command Object Register 5 - Usually Data Byte 1 */
   __IO uint8_t   FCCOB4;                       /*!< 000B: Flash Common Command Object Register 4 - Usually Data Byte 0 */
   __IO uint8_t   FCCOBB;                       /*!< 000C: Flash Common Command Object Register B - Usually Data Byte 7 */
   __IO uint8_t   FCCOBA;                       /*!< 000D: Flash Common Command Object Register A - Usually Data Byte 6 */
   __IO uint8_t   FCCOB9;                       /*!< 000E: Flash Common Command Object Register 9 - Usually Data Byte 5 */
   __IO uint8_t   FCCOB8;                       /*!< 000F: Flash Common Command Object Register 8 - Usually Data Byte 4 */
   __IO uint8_t   FPROT3;                       /*!< 0010: Program Flash Protection                                     */
   __IO uint8_t   FPROT2;                       /*!< 0011: Program Flash Protection                                     */
   __IO uint8_t   FPROT1;                       /*!< 0012: Program Flash Protection                                     */
   __IO uint8_t   FPROT0;                       /*!< 0013: Program Flash Protection                                     */
} FTFA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'FTFA' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- FTFA_FSTAT                               ------ */
#define FTFA_FSTAT_MGSTAT0_MASK                  (0x01UL << FTFA_FSTAT_MGSTAT0_SHIFT)                /*!< FTFA_FSTAT: MGSTAT0 Mask                */
#define FTFA_FSTAT_MGSTAT0_SHIFT                 0                                                   /*!< FTFA_FSTAT: MGSTAT0 Position            */
#define FTFA_FSTAT_FPVIOL_MASK                   (0x01UL << FTFA_FSTAT_FPVIOL_SHIFT)                 /*!< FTFA_FSTAT: FPVIOL Mask                 */
#define FTFA_FSTAT_FPVIOL_SHIFT                  4                                                   /*!< FTFA_FSTAT: FPVIOL Position             */
#define FTFA_FSTAT_ACCERR_MASK                   (0x01UL << FTFA_FSTAT_ACCERR_SHIFT)                 /*!< FTFA_FSTAT: ACCERR Mask                 */
#define FTFA_FSTAT_ACCERR_SHIFT                  5                                                   /*!< FTFA_FSTAT: ACCERR Position             */
#define FTFA_FSTAT_RDCOLERR_MASK                 (0x01UL << FTFA_FSTAT_RDCOLERR_SHIFT)               /*!< FTFA_FSTAT: RDCOLERR Mask               */
#define FTFA_FSTAT_RDCOLERR_SHIFT                6                                                   /*!< FTFA_FSTAT: RDCOLERR Position           */
#define FTFA_FSTAT_CCIF_MASK                     (0x01UL << FTFA_FSTAT_CCIF_SHIFT)                   /*!< FTFA_FSTAT: CCIF Mask                   */
#define FTFA_FSTAT_CCIF_SHIFT                    7                                                   /*!< FTFA_FSTAT: CCIF Position               */

/* ------- FTFA_FCNFG                               ------ */
#define FTFA_FCNFG_ERSSUSP_MASK                  (0x01UL << FTFA_FCNFG_ERSSUSP_SHIFT)                /*!< FTFA_FCNFG: ERSSUSP Mask                */
#define FTFA_FCNFG_ERSSUSP_SHIFT                 4                                                   /*!< FTFA_FCNFG: ERSSUSP Position            */
#define FTFA_FCNFG_ERSAREQ_MASK                  (0x01UL << FTFA_FCNFG_ERSAREQ_SHIFT)                /*!< FTFA_FCNFG: ERSAREQ Mask                */
#define FTFA_FCNFG_ERSAREQ_SHIFT                 5                                                   /*!< FTFA_FCNFG: ERSAREQ Position            */
#define FTFA_FCNFG_RDCOLLIE_MASK                 (0x01UL << FTFA_FCNFG_RDCOLLIE_SHIFT)               /*!< FTFA_FCNFG: RDCOLLIE Mask               */
#define FTFA_FCNFG_RDCOLLIE_SHIFT                6                                                   /*!< FTFA_FCNFG: RDCOLLIE Position           */
#define FTFA_FCNFG_CCIE_MASK                     (0x01UL << FTFA_FCNFG_CCIE_SHIFT)                   /*!< FTFA_FCNFG: CCIE Mask                   */
#define FTFA_FCNFG_CCIE_SHIFT                    7                                                   /*!< FTFA_FCNFG: CCIE Position               */

/* ------- FTFA_FSEC                                ------ */
#define FTFA_FSEC_SEC_MASK                       (0x03UL << FTFA_FSEC_SEC_SHIFT)                     /*!< FTFA_FSEC: SEC Mask                     */
#define FTFA_FSEC_SEC_SHIFT                      0                                                   /*!< FTFA_FSEC: SEC Position                 */
#define FTFA_FSEC_SEC(x)                         (((x)<<FTFA_FSEC_SEC_SHIFT)&FTFA_FSEC_SEC_MASK)     /*!< FTFA_FSEC                               */
#define FTFA_FSEC_FSLACC_MASK                    (0x03UL << FTFA_FSEC_FSLACC_SHIFT)                  /*!< FTFA_FSEC: FSLACC Mask                  */
#define FTFA_FSEC_FSLACC_SHIFT                   2                                                   /*!< FTFA_FSEC: FSLACC Position              */
#define FTFA_FSEC_FSLACC(x)                      (((x)<<FTFA_FSEC_FSLACC_SHIFT)&FTFA_FSEC_FSLACC_MASK) /*!< FTFA_FSEC                               */
#define FTFA_FSEC_MEEN_MASK                      (0x03UL << FTFA_FSEC_MEEN_SHIFT)                    /*!< FTFA_FSEC: MEEN Mask                    */
#define FTFA_FSEC_MEEN_SHIFT                     4                                                   /*!< FTFA_FSEC: MEEN Position                */
#define FTFA_FSEC_MEEN(x)                        (((x)<<FTFA_FSEC_MEEN_SHIFT)&FTFA_FSEC_MEEN_MASK)   /*!< FTFA_FSEC                               */
#define FTFA_FSEC_KEYEN_MASK                     (0x03UL << FTFA_FSEC_KEYEN_SHIFT)                   /*!< FTFA_FSEC: KEYEN Mask                   */
#define FTFA_FSEC_KEYEN_SHIFT                    6                                                   /*!< FTFA_FSEC: KEYEN Position               */
#define FTFA_FSEC_KEYEN(x)                       (((x)<<FTFA_FSEC_KEYEN_SHIFT)&FTFA_FSEC_KEYEN_MASK) /*!< FTFA_FSEC                               */

/* ------- FTFA_FOPT                                ------ */
#define FTFA_FOPT_OPT_MASK                       (0xFFUL << FTFA_FOPT_OPT_SHIFT)                     /*!< FTFA_FOPT: OPT Mask                     */
#define FTFA_FOPT_OPT_SHIFT                      0                                                   /*!< FTFA_FOPT: OPT Position                 */
#define FTFA_FOPT_OPT(x)                         (((x)<<FTFA_FOPT_OPT_SHIFT)&FTFA_FOPT_OPT_MASK)     /*!< FTFA_FOPT                               */

/* ------- FTFA_FCCOB                               ------ */
#define FTFA_FCCOB_CCOBn_MASK                    (0xFFUL << FTFA_FCCOB_CCOBn_SHIFT)                  /*!< FTFA_FCCOB: CCOBn Mask                  */
#define FTFA_FCCOB_CCOBn_SHIFT                   0                                                   /*!< FTFA_FCCOB: CCOBn Position              */
#define FTFA_FCCOB_CCOBn(x)                      (((x)<<FTFA_FCCOB_CCOBn_SHIFT)&FTFA_FCCOB_CCOBn_MASK) /*!< FTFA_FCCOB                              */

/* ------- FTFA_FPROT                               ------ */
#define FTFA_FPROT_PROT_MASK                     (0xFFUL << FTFA_FPROT_PROT_SHIFT)                   /*!< FTFA_FPROT: PROT Mask                   */
#define FTFA_FPROT_PROT_SHIFT                    0                                                   /*!< FTFA_FPROT: PROT Position               */
#define FTFA_FPROT_PROT(x)                       (((x)<<FTFA_FPROT_PROT_SHIFT)&FTFA_FPROT_PROT_MASK) /*!< FTFA_FPROT                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTFA' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define FTFA_FSTAT                     (FTFA->FSTAT)
#define FTFA_FCNFG                     (FTFA->FCNFG)
#define FTFA_FSEC                      (FTFA->FSEC)
#define FTFA_FOPT                      (FTFA->FOPT)
#define FTFA_FCCOB3                    (FTFA->FCCOB3)
#define FTFA_FCCOB2                    (FTFA->FCCOB2)
#define FTFA_FCCOB1                    (FTFA->FCCOB1)
#define FTFA_FCCOB0                    (FTFA->FCCOB0)
#define FTFA_FCCOB7                    (FTFA->FCCOB7)
#define FTFA_FCCOB6                    (FTFA->FCCOB6)
#define FTFA_FCCOB5                    (FTFA->FCCOB5)
#define FTFA_FCCOB4                    (FTFA->FCCOB4)
#define FTFA_FCCOBB                    (FTFA->FCCOBB)
#define FTFA_FCCOBA                    (FTFA->FCCOBA)
#define FTFA_FCCOB9                    (FTFA->FCCOB9)
#define FTFA_FCCOB8                    (FTFA->FCCOB8)
#define FTFA_FPROT3                    (FTFA->FPROT3)
#define FTFA_FPROT2                    (FTFA->FPROT2)
#define FTFA_FPROT1                    (FTFA->FPROT1)
#define FTFA_FPROT0                    (FTFA->FPROT0)

/* ================================================================================ */
/* ================           GPIOA (derived from FGPIOA)          ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (PTA)
 */
typedef FGPIOA_Type GPIOA_Type;  /*!< GPIOA Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOA' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOA_PDOR                     (GPIOA->PDOR)
#define GPIOA_PSOR                     (GPIOA->PSOR)
#define GPIOA_PCOR                     (GPIOA->PCOR)
#define GPIOA_PTOR                     (GPIOA->PTOR)
#define GPIOA_PDIR                     (GPIOA->PDIR)
#define GPIOA_PDDR                     (GPIOA->PDDR)

/* ================================================================================ */
/* ================           GPIOB (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (PTB)
 */
typedef GPIOA_Type GPIOB_Type;  /*!< GPIOB Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOB' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOB_PDOR                     (GPIOB->PDOR)
#define GPIOB_PSOR                     (GPIOB->PSOR)
#define GPIOB_PCOR                     (GPIOB->PCOR)
#define GPIOB_PTOR                     (GPIOB->PTOR)
#define GPIOB_PDIR                     (GPIOB->PDIR)
#define GPIOB_PDDR                     (GPIOB->PDDR)

/* ================================================================================ */
/* ================           GPIOC (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (PTC)
 */
typedef GPIOA_Type GPIOC_Type;  /*!< GPIOC Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOC' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOC_PDOR                     (GPIOC->PDOR)
#define GPIOC_PSOR                     (GPIOC->PSOR)
#define GPIOC_PCOR                     (GPIOC->PCOR)
#define GPIOC_PTOR                     (GPIOC->PTOR)
#define GPIOC_PDIR                     (GPIOC->PDIR)
#define GPIOC_PDDR                     (GPIOC->PDDR)

/* ================================================================================ */
/* ================           GPIOD (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (PTD)
 */
typedef GPIOA_Type GPIOD_Type;  /*!< GPIOD Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOD' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOD_PDOR                     (GPIOD->PDOR)
#define GPIOD_PSOR                     (GPIOD->PSOR)
#define GPIOD_PCOR                     (GPIOD->PCOR)
#define GPIOD_PTOR                     (GPIOD->PTOR)
#define GPIOD_PDIR                     (GPIOD->PDIR)
#define GPIOD_PDDR                     (GPIOD->PDDR)

/* ================================================================================ */
/* ================           GPIOE (derived from GPIOA)           ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output (PTE)
 */
typedef GPIOA_Type GPIOE_Type;  /*!< GPIOE Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'GPIOE' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define GPIOE_PDOR                     (GPIOE->PDOR)
#define GPIOE_PSOR                     (GPIOE->PSOR)
#define GPIOE_PCOR                     (GPIOE->PCOR)
#define GPIOE_PTOR                     (GPIOE->PTOR)
#define GPIOE_PDIR                     (GPIOE->PDIR)
#define GPIOE_PDDR                     (GPIOE->PDDR)

/* ================================================================================ */
/* ================           I2C0 (file:I2C0_SMB_1)               ================ */
/* ================================================================================ */

/**
 * @brief Inter-Integrated Circuit (I2C0)
 */
typedef struct {                                /*!<       I2C0 Structure                                               */
   __IO uint8_t   A1;                           /*!< 0000: I2C Address Register 1                                       */
   __IO uint8_t   F;                            /*!< 0001: I2C Frequency Divider register                               */
   __IO uint8_t   C1;                           /*!< 0002: I2C Control Register 1                                       */
   __IO uint8_t   S;                            /*!< 0003: I2C Status Register                                          */
   __IO uint8_t   D;                            /*!< 0004: I2C Data I/O register                                        */
   __IO uint8_t   C2;                           /*!< 0005: I2C Control Register 2                                       */
   __IO uint8_t   FLT;                          /*!< 0006: I2C Programmable Input Glitch Filter register                */
   __IO uint8_t   RA;                           /*!< 0007: I2C Range Address register                                   */
   __IO uint8_t   SMB;                          /*!< 0008: I2C SMBus Control and Status register                        */
   __IO uint8_t   A2;                           /*!< 0009: I2C Address Register 2                                       */
   __IO uint8_t   SLTH;                         /*!< 000A: I2C SCL Low Timeout Register High                            */
   __IO uint8_t   SLTL;                         /*!< 000B: I2C SCL Low Timeout Register Low                             */
} I2C0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'I2C0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- I2C0_A1                                  ------ */
#define I2C_A1_AD_MASK                           (0x7FUL << I2C_A1_AD_SHIFT)                         /*!< I2C0_A1: AD Mask                        */
#define I2C_A1_AD_SHIFT                          1                                                   /*!< I2C0_A1: AD Position                    */
#define I2C_A1_AD(x)                             (((x)<<I2C_A1_AD_SHIFT)&I2C_A1_AD_MASK)             /*!< I2C0_A1                                 */

/* ------- I2C0_F                                   ------ */
#define I2C_F_ICR_MASK                           (0x3FUL << I2C_F_ICR_SHIFT)                         /*!< I2C0_F: ICR Mask                        */
#define I2C_F_ICR_SHIFT                          0                                                   /*!< I2C0_F: ICR Position                    */
#define I2C_F_ICR(x)                             (((x)<<I2C_F_ICR_SHIFT)&I2C_F_ICR_MASK)             /*!< I2C0_F                                  */
#define I2C_F_MULT_MASK                          (0x03UL << I2C_F_MULT_SHIFT)                        /*!< I2C0_F: MULT Mask                       */
#define I2C_F_MULT_SHIFT                         6                                                   /*!< I2C0_F: MULT Position                   */
#define I2C_F_MULT(x)                            (((x)<<I2C_F_MULT_SHIFT)&I2C_F_MULT_MASK)           /*!< I2C0_F                                  */

/* ------- I2C0_C1                                  ------ */
#define I2C_C1_DMAEN_MASK                        (0x01UL << I2C_C1_DMAEN_SHIFT)                      /*!< I2C0_C1: DMAEN Mask                     */
#define I2C_C1_DMAEN_SHIFT                       0                                                   /*!< I2C0_C1: DMAEN Position                 */
#define I2C_C1_WUEN_MASK                         (0x01UL << I2C_C1_WUEN_SHIFT)                       /*!< I2C0_C1: WUEN Mask                      */
#define I2C_C1_WUEN_SHIFT                        1                                                   /*!< I2C0_C1: WUEN Position                  */
#define I2C_C1_RSTA_MASK                         (0x01UL << I2C_C1_RSTA_SHIFT)                       /*!< I2C0_C1: RSTA Mask                      */
#define I2C_C1_RSTA_SHIFT                        2                                                   /*!< I2C0_C1: RSTA Position                  */
#define I2C_C1_TXAK_MASK                         (0x01UL << I2C_C1_TXAK_SHIFT)                       /*!< I2C0_C1: TXAK Mask                      */
#define I2C_C1_TXAK_SHIFT                        3                                                   /*!< I2C0_C1: TXAK Position                  */
#define I2C_C1_TX_MASK                           (0x01UL << I2C_C1_TX_SHIFT)                         /*!< I2C0_C1: TX Mask                        */
#define I2C_C1_TX_SHIFT                          4                                                   /*!< I2C0_C1: TX Position                    */
#define I2C_C1_MST_MASK                          (0x01UL << I2C_C1_MST_SHIFT)                        /*!< I2C0_C1: MST Mask                       */
#define I2C_C1_MST_SHIFT                         5                                                   /*!< I2C0_C1: MST Position                   */
#define I2C_C1_IICIE_MASK                        (0x01UL << I2C_C1_IICIE_SHIFT)                      /*!< I2C0_C1: IICIE Mask                     */
#define I2C_C1_IICIE_SHIFT                       6                                                   /*!< I2C0_C1: IICIE Position                 */
#define I2C_C1_IICEN_MASK                        (0x01UL << I2C_C1_IICEN_SHIFT)                      /*!< I2C0_C1: IICEN Mask                     */
#define I2C_C1_IICEN_SHIFT                       7                                                   /*!< I2C0_C1: IICEN Position                 */

/* ------- I2C0_S                                   ------ */
#define I2C_S_RXAK_MASK                          (0x01UL << I2C_S_RXAK_SHIFT)                        /*!< I2C0_S: RXAK Mask                       */
#define I2C_S_RXAK_SHIFT                         0                                                   /*!< I2C0_S: RXAK Position                   */
#define I2C_S_IICIF_MASK                         (0x01UL << I2C_S_IICIF_SHIFT)                       /*!< I2C0_S: IICIF Mask                      */
#define I2C_S_IICIF_SHIFT                        1                                                   /*!< I2C0_S: IICIF Position                  */
#define I2C_S_SRW_MASK                           (0x01UL << I2C_S_SRW_SHIFT)                         /*!< I2C0_S: SRW Mask                        */
#define I2C_S_SRW_SHIFT                          2                                                   /*!< I2C0_S: SRW Position                    */
#define I2C_S_RAM_MASK                           (0x01UL << I2C_S_RAM_SHIFT)                         /*!< I2C0_S: RAM Mask                        */
#define I2C_S_RAM_SHIFT                          3                                                   /*!< I2C0_S: RAM Position                    */
#define I2C_S_ARBL_MASK                          (0x01UL << I2C_S_ARBL_SHIFT)                        /*!< I2C0_S: ARBL Mask                       */
#define I2C_S_ARBL_SHIFT                         4                                                   /*!< I2C0_S: ARBL Position                   */
#define I2C_S_BUSY_MASK                          (0x01UL << I2C_S_BUSY_SHIFT)                        /*!< I2C0_S: BUSY Mask                       */
#define I2C_S_BUSY_SHIFT                         5                                                   /*!< I2C0_S: BUSY Position                   */
#define I2C_S_IAAS_MASK                          (0x01UL << I2C_S_IAAS_SHIFT)                        /*!< I2C0_S: IAAS Mask                       */
#define I2C_S_IAAS_SHIFT                         6                                                   /*!< I2C0_S: IAAS Position                   */
#define I2C_S_TCF_MASK                           (0x01UL << I2C_S_TCF_SHIFT)                         /*!< I2C0_S: TCF Mask                        */
#define I2C_S_TCF_SHIFT                          7                                                   /*!< I2C0_S: TCF Position                    */

/* ------- I2C0_D                                   ------ */
#define I2C_D_DATA_MASK                          (0xFFUL << I2C_D_DATA_SHIFT)                        /*!< I2C0_D: DATA Mask                       */
#define I2C_D_DATA_SHIFT                         0                                                   /*!< I2C0_D: DATA Position                   */
#define I2C_D_DATA(x)                            (((x)<<I2C_D_DATA_SHIFT)&I2C_D_DATA_MASK)           /*!< I2C0_D                                  */

/* ------- I2C0_C2                                  ------ */
#define I2C_C2_AD_MASK                           (0x07UL << I2C_C2_AD_SHIFT)                         /*!< I2C0_C2: AD Mask                        */
#define I2C_C2_AD_SHIFT                          0                                                   /*!< I2C0_C2: AD Position                    */
#define I2C_C2_AD(x)                             (((x)<<I2C_C2_AD_SHIFT)&I2C_C2_AD_MASK)             /*!< I2C0_C2                                 */
#define I2C_C2_RMEN_MASK                         (0x01UL << I2C_C2_RMEN_SHIFT)                       /*!< I2C0_C2: RMEN Mask                      */
#define I2C_C2_RMEN_SHIFT                        3                                                   /*!< I2C0_C2: RMEN Position                  */
#define I2C_C2_SBRC_MASK                         (0x01UL << I2C_C2_SBRC_SHIFT)                       /*!< I2C0_C2: SBRC Mask                      */
#define I2C_C2_SBRC_SHIFT                        4                                                   /*!< I2C0_C2: SBRC Position                  */
#define I2C_C2_HDRS_MASK                         (0x01UL << I2C_C2_HDRS_SHIFT)                       /*!< I2C0_C2: HDRS Mask                      */
#define I2C_C2_HDRS_SHIFT                        5                                                   /*!< I2C0_C2: HDRS Position                  */
#define I2C_C2_ADEXT_MASK                        (0x01UL << I2C_C2_ADEXT_SHIFT)                      /*!< I2C0_C2: ADEXT Mask                     */
#define I2C_C2_ADEXT_SHIFT                       6                                                   /*!< I2C0_C2: ADEXT Position                 */
#define I2C_C2_GCAEN_MASK                        (0x01UL << I2C_C2_GCAEN_SHIFT)                      /*!< I2C0_C2: GCAEN Mask                     */
#define I2C_C2_GCAEN_SHIFT                       7                                                   /*!< I2C0_C2: GCAEN Position                 */

/* ------- I2C0_FLT                                 ------ */
#define I2C_FLT_FLT_MASK                         (0x1FUL << I2C_FLT_FLT_SHIFT)                       /*!< I2C0_FLT: FLT Mask                      */
#define I2C_FLT_FLT_SHIFT                        0                                                   /*!< I2C0_FLT: FLT Position                  */
#define I2C_FLT_FLT(x)                           (((x)<<I2C_FLT_FLT_SHIFT)&I2C_FLT_FLT_MASK)         /*!< I2C0_FLT                                */
#define I2C_FLT_STOPIE_MASK                      (0x01UL << I2C_FLT_STOPIE_SHIFT)                    /*!< I2C0_FLT: STOPIE Mask                   */
#define I2C_FLT_STOPIE_SHIFT                     5                                                   /*!< I2C0_FLT: STOPIE Position               */
#define I2C_FLT_STOPF_MASK                       (0x01UL << I2C_FLT_STOPF_SHIFT)                     /*!< I2C0_FLT: STOPF Mask                    */
#define I2C_FLT_STOPF_SHIFT                      6                                                   /*!< I2C0_FLT: STOPF Position                */
#define I2C_FLT_SHEN_MASK                        (0x01UL << I2C_FLT_SHEN_SHIFT)                      /*!< I2C0_FLT: SHEN Mask                     */
#define I2C_FLT_SHEN_SHIFT                       7                                                   /*!< I2C0_FLT: SHEN Position                 */

/* ------- I2C0_RA                                  ------ */
#define I2C_RA_RAD_MASK                          (0x7FUL << I2C_RA_RAD_SHIFT)                        /*!< I2C0_RA: RAD Mask                       */
#define I2C_RA_RAD_SHIFT                         1                                                   /*!< I2C0_RA: RAD Position                   */
#define I2C_RA_RAD(x)                            (((x)<<I2C_RA_RAD_SHIFT)&I2C_RA_RAD_MASK)           /*!< I2C0_RA                                 */

/* ------- I2C0_SMB                                 ------ */
#define I2C_SMB_SHTF2IE_MASK                     (0x01UL << I2C_SMB_SHTF2IE_SHIFT)                   /*!< I2C0_SMB: SHTF2IE Mask                  */
#define I2C_SMB_SHTF2IE_SHIFT                    0                                                   /*!< I2C0_SMB: SHTF2IE Position              */
#define I2C_SMB_SHTF2_MASK                       (0x01UL << I2C_SMB_SHTF2_SHIFT)                     /*!< I2C0_SMB: SHTF2 Mask                    */
#define I2C_SMB_SHTF2_SHIFT                      1                                                   /*!< I2C0_SMB: SHTF2 Position                */
#define I2C_SMB_SHTF1_MASK                       (0x01UL << I2C_SMB_SHTF1_SHIFT)                     /*!< I2C0_SMB: SHTF1 Mask                    */
#define I2C_SMB_SHTF1_SHIFT                      2                                                   /*!< I2C0_SMB: SHTF1 Position                */
#define I2C_SMB_SLTF_MASK                        (0x01UL << I2C_SMB_SLTF_SHIFT)                      /*!< I2C0_SMB: SLTF Mask                     */
#define I2C_SMB_SLTF_SHIFT                       3                                                   /*!< I2C0_SMB: SLTF Position                 */
#define I2C_SMB_TCKSEL_MASK                      (0x01UL << I2C_SMB_TCKSEL_SHIFT)                    /*!< I2C0_SMB: TCKSEL Mask                   */
#define I2C_SMB_TCKSEL_SHIFT                     4                                                   /*!< I2C0_SMB: TCKSEL Position               */
#define I2C_SMB_SIICAEN_MASK                     (0x01UL << I2C_SMB_SIICAEN_SHIFT)                   /*!< I2C0_SMB: SIICAEN Mask                  */
#define I2C_SMB_SIICAEN_SHIFT                    5                                                   /*!< I2C0_SMB: SIICAEN Position              */
#define I2C_SMB_ALERTEN_MASK                     (0x01UL << I2C_SMB_ALERTEN_SHIFT)                   /*!< I2C0_SMB: ALERTEN Mask                  */
#define I2C_SMB_ALERTEN_SHIFT                    6                                                   /*!< I2C0_SMB: ALERTEN Position              */
#define I2C_SMB_FACK_MASK                        (0x01UL << I2C_SMB_FACK_SHIFT)                      /*!< I2C0_SMB: FACK Mask                     */
#define I2C_SMB_FACK_SHIFT                       7                                                   /*!< I2C0_SMB: FACK Position                 */

/* ------- I2C0_A2                                  ------ */
#define I2C_A2_SAD_MASK                          (0x7FUL << I2C_A2_SAD_SHIFT)                        /*!< I2C0_A2: SAD Mask                       */
#define I2C_A2_SAD_SHIFT                         1                                                   /*!< I2C0_A2: SAD Position                   */
#define I2C_A2_SAD(x)                            (((x)<<I2C_A2_SAD_SHIFT)&I2C_A2_SAD_MASK)           /*!< I2C0_A2                                 */

/* ------- I2C0_SLTH                                ------ */
#define I2C_SLTH_SSLT_MASK                       (0xFFUL << I2C_SLTH_SSLT_SHIFT)                     /*!< I2C0_SLTH: SSLT Mask                    */
#define I2C_SLTH_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTH: SSLT Position                */
#define I2C_SLTH_SSLT(x)                         (((x)<<I2C_SLTH_SSLT_SHIFT)&I2C_SLTH_SSLT_MASK)     /*!< I2C0_SLTH                               */

/* ------- I2C0_SLTL                                ------ */
#define I2C_SLTL_SSLT_MASK                       (0xFFUL << I2C_SLTL_SSLT_SHIFT)                     /*!< I2C0_SLTL: SSLT Mask                    */
#define I2C_SLTL_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTL: SSLT Position                */
#define I2C_SLTL_SSLT(x)                         (((x)<<I2C_SLTL_SSLT_SHIFT)&I2C_SLTL_SSLT_MASK)     /*!< I2C0_SLTL                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'I2C0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define I2C0_A1                        (I2C0->A1)
#define I2C0_F                         (I2C0->F)
#define I2C0_C1                        (I2C0->C1)
#define I2C0_S                         (I2C0->S)
#define I2C0_D                         (I2C0->D)
#define I2C0_C2                        (I2C0->C2)
#define I2C0_FLT                       (I2C0->FLT)
#define I2C0_RA                        (I2C0->RA)
#define I2C0_SMB                       (I2C0->SMB)
#define I2C0_A2                        (I2C0->A2)
#define I2C0_SLTH                      (I2C0->SLTH)
#define I2C0_SLTL                      (I2C0->SLTL)

/* ================================================================================ */
/* ================           I2C1 (derived from I2C0)             ================ */
/* ================================================================================ */

/**
 * @brief Inter-Integrated Circuit (I2C1)
 */
typedef I2C0_Type I2C1_Type;  /*!< I2C1 Structure                                              */


/* -------------------------------------------------------------------------------- */
/* -----------     'I2C1' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define I2C1_A1                        (I2C1->A1)
#define I2C1_F                         (I2C1->F)
#define I2C1_C1                        (I2C1->C1)
#define I2C1_S                         (I2C1->S)
#define I2C1_D                         (I2C1->D)
#define I2C1_C2                        (I2C1->C2)
#define I2C1_FLT                       (I2C1->FLT)
#define I2C1_RA                        (I2C1->RA)
#define I2C1_SMB                       (I2C1->SMB)
#define I2C1_A2                        (I2C1->A2)
#define I2C1_SLTH                      (I2C1->SLTH)
#define I2C1_SLTL                      (I2C1->SLTL)

/* ================================================================================ */
/* ================           I2S0 (file:I2S0_3)                   ================ */
/* ================================================================================ */

/**
 * @brief Inter-IC Sound / Synchronous Audio Interface (I2S0)
 */
typedef struct {                                /*!<       I2S0 Structure                                               */
   __IO uint32_t  TCSR;                         /*!< 0000: SAI Transmit Control Register                                */
   __I  uint32_t  RESERVED0;                    /*!< 0004:                                                              */
   __IO uint32_t  TCR2;                         /*!< 0008: SAI Transmit Configuration 2 Register                        */
   __IO uint32_t  TCR3;                         /*!< 000C: SAI Transmit Configuration 3 Register                        */
   __IO uint32_t  TCR4;                         /*!< 0010: SAI Transmit Configuration 4 Register                        */
   __IO uint32_t  TCR5;                         /*!< 0014: SAI Transmit Configuration 5 Register                        */
   __I  uint32_t  RESERVED1[2];                 /*!< 0018:                                                              */
   __O  uint32_t  TDR0;                         /*!< 0020: SAI Transmit Data Register                                   */
   __I  uint32_t  RESERVED2[15];                /*!< 0024:                                                              */
   __IO uint32_t  TMR;                          /*!< 0060: SAI Transmit Mask Register                                   */
   __I  uint32_t  RESERVED3[7];                 /*!< 0064:                                                              */
   __IO uint32_t  RCSR;                         /*!< 0080: SAI Receive Control Register                                 */
   __I  uint32_t  RESERVED4;                    /*!< 0084:                                                              */
   __IO uint32_t  RCR2;                         /*!< 0088: SAI Receive Configuration 2 Register                         */
   __IO uint32_t  RCR3;                         /*!< 008C: SAI Receive Configuration 3 Register                         */
   __IO uint32_t  RCR4;                         /*!< 0090: SAI Receive Configuration 4 Register                         */
   __IO uint32_t  RCR5;                         /*!< 0094: SAI Receive Configuration 5 Register                         */
   __I  uint32_t  RESERVED5[2];                 /*!< 0098:                                                              */
   __I  uint32_t  RDR0;                         /*!< 00A0: SAI Receive Data Register                                    */
   __I  uint32_t  RESERVED6[15];                /*!< 00A4:                                                              */
   __IO uint32_t  RMR;                          /*!< 00E0: SAI Receive Mask Register                                    */
   __I  uint32_t  RESERVED7[7];                 /*!< 00E4:                                                              */
   __IO uint32_t  MCR;                          /*!< 0100: SAI MCLK Control Register                                    */
   __IO uint32_t  MDR;                          /*!< 0104: SAI MCLK Divide Register                                     */
} I2S0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'I2S0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- I2S0_TCSR                                ------ */
#define I2S_TCSR_FWDE_MASK                       (0x01UL << I2S_TCSR_FWDE_SHIFT)                     /*!< I2S_TCSR: FWDE Mask                     */
#define I2S_TCSR_FWDE_SHIFT                      1                                                   /*!< I2S_TCSR: FWDE Position                 */
#define I2S_TCSR_FWIE_MASK                       (0x01UL << I2S_TCSR_FWIE_SHIFT)                     /*!< I2S_TCSR: FWIE Mask                     */
#define I2S_TCSR_FWIE_SHIFT                      9                                                   /*!< I2S_TCSR: FWIE Position                 */
#define I2S_TCSR_FEIE_MASK                       (0x01UL << I2S_TCSR_FEIE_SHIFT)                     /*!< I2S_TCSR: FEIE Mask                     */
#define I2S_TCSR_FEIE_SHIFT                      10                                                  /*!< I2S_TCSR: FEIE Position                 */
#define I2S_TCSR_SEIE_MASK                       (0x01UL << I2S_TCSR_SEIE_SHIFT)                     /*!< I2S_TCSR: SEIE Mask                     */
#define I2S_TCSR_SEIE_SHIFT                      11                                                  /*!< I2S_TCSR: SEIE Position                 */
#define I2S_TCSR_WSIE_MASK                       (0x01UL << I2S_TCSR_WSIE_SHIFT)                     /*!< I2S_TCSR: WSIE Mask                     */
#define I2S_TCSR_WSIE_SHIFT                      12                                                  /*!< I2S_TCSR: WSIE Position                 */
#define I2S_TCSR_FWF_MASK                        (0x01UL << I2S_TCSR_FWF_SHIFT)                      /*!< I2S_TCSR: FWF Mask                      */
#define I2S_TCSR_FWF_SHIFT                       17                                                  /*!< I2S_TCSR: FWF Position                  */
#define I2S_TCSR_FEF_MASK                        (0x01UL << I2S_TCSR_FEF_SHIFT)                      /*!< I2S_TCSR: FEF Mask                      */
#define I2S_TCSR_FEF_SHIFT                       18                                                  /*!< I2S_TCSR: FEF Position                  */
#define I2S_TCSR_SEF_MASK                        (0x01UL << I2S_TCSR_SEF_SHIFT)                      /*!< I2S_TCSR: SEF Mask                      */
#define I2S_TCSR_SEF_SHIFT                       19                                                  /*!< I2S_TCSR: SEF Position                  */
#define I2S_TCSR_WSF_MASK                        (0x01UL << I2S_TCSR_WSF_SHIFT)                      /*!< I2S_TCSR: WSF Mask                      */
#define I2S_TCSR_WSF_SHIFT                       20                                                  /*!< I2S_TCSR: WSF Position                  */
#define I2S_TCSR_SR_MASK                         (0x01UL << I2S_TCSR_SR_SHIFT)                       /*!< I2S_TCSR: SR Mask                       */
#define I2S_TCSR_SR_SHIFT                        24                                                  /*!< I2S_TCSR: SR Position                   */
#define I2S_TCSR_FR_MASK                         (0x01UL << I2S_TCSR_FR_SHIFT)                       /*!< I2S_TCSR: FR Mask                       */
#define I2S_TCSR_FR_SHIFT                        25                                                  /*!< I2S_TCSR: FR Position                   */
#define I2S_TCSR_BCE_MASK                        (0x01UL << I2S_TCSR_BCE_SHIFT)                      /*!< I2S_TCSR: BCE Mask                      */
#define I2S_TCSR_BCE_SHIFT                       28                                                  /*!< I2S_TCSR: BCE Position                  */
#define I2S_TCSR_DBGE_MASK                       (0x01UL << I2S_TCSR_DBGE_SHIFT)                     /*!< I2S_TCSR: DBGE Mask                     */
#define I2S_TCSR_DBGE_SHIFT                      29                                                  /*!< I2S_TCSR: DBGE Position                 */
#define I2S_TCSR_STOPE_MASK                      (0x01UL << I2S_TCSR_STOPE_SHIFT)                    /*!< I2S_TCSR: STOPE Mask                    */
#define I2S_TCSR_STOPE_SHIFT                     30                                                  /*!< I2S_TCSR: STOPE Position                */
#define I2S_TCSR_TE_MASK                         (0x01UL << I2S_TCSR_TE_SHIFT)                       /*!< I2S_TCSR: TE Mask                       */
#define I2S_TCSR_TE_SHIFT                        31                                                  /*!< I2S_TCSR: TE Position                   */

/* ------- I2S0_TCR2                                ------ */
#define I2S_TCR2_DIV_MASK                        (0xFFUL << I2S_TCR2_DIV_SHIFT)                      /*!< I2S_TCR2: DIV Mask                      */
#define I2S_TCR2_DIV_SHIFT                       0                                                   /*!< I2S_TCR2: DIV Position                  */
#define I2S_TCR2_DIV(x)                          (((x)<<I2S_TCR2_DIV_SHIFT)&I2S_TCR2_DIV_MASK)       /*!< I2S_TCR2                                */
#define I2S_TCR2_BCD_MASK                        (0x01UL << I2S_TCR2_BCD_SHIFT)                      /*!< I2S_TCR2: BCD Mask                      */
#define I2S_TCR2_BCD_SHIFT                       24                                                  /*!< I2S_TCR2: BCD Position                  */
#define I2S_TCR2_BCP_MASK                        (0x01UL << I2S_TCR2_BCP_SHIFT)                      /*!< I2S_TCR2: BCP Mask                      */
#define I2S_TCR2_BCP_SHIFT                       25                                                  /*!< I2S_TCR2: BCP Position                  */
#define I2S_TCR2_CLKMODE_MASK                    (0x03UL << I2S_TCR2_CLKMODE_SHIFT)                  /*!< I2S_TCR2: CLKMODE Mask                  */
#define I2S_TCR2_CLKMODE_SHIFT                   26                                                  /*!< I2S_TCR2: CLKMODE Position              */
#define I2S_TCR2_CLKMODE(x)                      (((x)<<I2S_TCR2_CLKMODE_SHIFT)&I2S_TCR2_CLKMODE_MASK) /*!< I2S_TCR2                                */

/* ------- I2S0_TCR3                                ------ */
#define I2S_TCR3_WDFL_MASK                       (0x01UL << I2S_TCR3_WDFL_SHIFT)                     /*!< I2S_TCR3: WDFL Mask                     */
#define I2S_TCR3_WDFL_SHIFT                      0                                                   /*!< I2S_TCR3: WDFL Position                 */
#define I2S_TCR3_TCE_MASK                        (0x01UL << I2S_TCR3_TCE_SHIFT)                      /*!< I2S_TCR3: TCE Mask                      */
#define I2S_TCR3_TCE_SHIFT                       16                                                  /*!< I2S_TCR3: TCE Position                  */

/* ------- I2S0_TCR4                                ------ */
#define I2S_TCR4_FSD_MASK                        (0x01UL << I2S_TCR4_FSD_SHIFT)                      /*!< I2S_TCR4: FSD Mask                      */
#define I2S_TCR4_FSD_SHIFT                       0                                                   /*!< I2S_TCR4: FSD Position                  */
#define I2S_TCR4_FSP_MASK                        (0x01UL << I2S_TCR4_FSP_SHIFT)                      /*!< I2S_TCR4: FSP Mask                      */
#define I2S_TCR4_FSP_SHIFT                       1                                                   /*!< I2S_TCR4: FSP Position                  */
#define I2S_TCR4_FSE_MASK                        (0x01UL << I2S_TCR4_FSE_SHIFT)                      /*!< I2S_TCR4: FSE Mask                      */
#define I2S_TCR4_FSE_SHIFT                       3                                                   /*!< I2S_TCR4: FSE Position                  */
#define I2S_TCR4_MF_MASK                         (0x01UL << I2S_TCR4_MF_SHIFT)                       /*!< I2S_TCR4: MF Mask                       */
#define I2S_TCR4_MF_SHIFT                        4                                                   /*!< I2S_TCR4: MF Position                   */
#define I2S_TCR4_SYWD_MASK                       (0x1FUL << I2S_TCR4_SYWD_SHIFT)                     /*!< I2S_TCR4: SYWD Mask                     */
#define I2S_TCR4_SYWD_SHIFT                      8                                                   /*!< I2S_TCR4: SYWD Position                 */
#define I2S_TCR4_SYWD(x)                         (((x)<<I2S_TCR4_SYWD_SHIFT)&I2S_TCR4_SYWD_MASK)     /*!< I2S_TCR4                                */
#define I2S_TCR4_FRSZ_MASK                       (0x01UL << I2S_TCR4_FRSZ_SHIFT)                     /*!< I2S_TCR4: FRSZ Mask                     */
#define I2S_TCR4_FRSZ_SHIFT                      16                                                  /*!< I2S_TCR4: FRSZ Position                 */

/* ------- I2S0_TCR5                                ------ */
#define I2S_TCR5_FBT_MASK                        (0x1FUL << I2S_TCR5_FBT_SHIFT)                      /*!< I2S_TCR5: FBT Mask                      */
#define I2S_TCR5_FBT_SHIFT                       8                                                   /*!< I2S_TCR5: FBT Position                  */
#define I2S_TCR5_FBT(x)                          (((x)<<I2S_TCR5_FBT_SHIFT)&I2S_TCR5_FBT_MASK)       /*!< I2S_TCR5                                */
#define I2S_TCR5_W0W_MASK                        (0x1FUL << I2S_TCR5_W0W_SHIFT)                      /*!< I2S_TCR5: W0W Mask                      */
#define I2S_TCR5_W0W_SHIFT                       16                                                  /*!< I2S_TCR5: W0W Position                  */
#define I2S_TCR5_W0W(x)                          (((x)<<I2S_TCR5_W0W_SHIFT)&I2S_TCR5_W0W_MASK)       /*!< I2S_TCR5                                */
#define I2S_TCR5_WNW_MASK                        (0x1FUL << I2S_TCR5_WNW_SHIFT)                      /*!< I2S_TCR5: WNW Mask                      */
#define I2S_TCR5_WNW_SHIFT                       24                                                  /*!< I2S_TCR5: WNW Position                  */
#define I2S_TCR5_WNW(x)                          (((x)<<I2S_TCR5_WNW_SHIFT)&I2S_TCR5_WNW_MASK)       /*!< I2S_TCR5                                */

/* ------- I2S0_TDR0                                ------ */
#define I2S_TDR0_TDR_MASK                        (0xFFFFFFFFUL << I2S_TDR0_TDR_SHIFT)                /*!< I2S_TDR0: TDR Mask                      */
#define I2S_TDR0_TDR_SHIFT                       0                                                   /*!< I2S_TDR0: TDR Position                  */
#define I2S_TDR0_TDR(x)                          (((x)<<I2S_TDR0_TDR_SHIFT)&I2S_TDR0_TDR_MASK)       /*!< I2S_TDR0                                */

/* ------- I2S0_TMR                                 ------ */
#define I2S_TMR_TWM_MASK                         (0x03UL << I2S_TMR_TWM_SHIFT)                       /*!< I2S_TMR: TWM Mask                       */
#define I2S_TMR_TWM_SHIFT                        0                                                   /*!< I2S_TMR: TWM Position                   */
#define I2S_TMR_TWM(x)                           (((x)<<I2S_TMR_TWM_SHIFT)&I2S_TMR_TWM_MASK)         /*!< I2S_TMR                                 */

/* ------- I2S0_RCSR                                ------ */
#define I2S_RCSR_FWDE_MASK                       (0x01UL << I2S_RCSR_FWDE_SHIFT)                     /*!< I2S_RCSR: FWDE Mask                     */
#define I2S_RCSR_FWDE_SHIFT                      1                                                   /*!< I2S_RCSR: FWDE Position                 */
#define I2S_RCSR_FWIE_MASK                       (0x01UL << I2S_RCSR_FWIE_SHIFT)                     /*!< I2S_RCSR: FWIE Mask                     */
#define I2S_RCSR_FWIE_SHIFT                      9                                                   /*!< I2S_RCSR: FWIE Position                 */
#define I2S_RCSR_FEIE_MASK                       (0x01UL << I2S_RCSR_FEIE_SHIFT)                     /*!< I2S_RCSR: FEIE Mask                     */
#define I2S_RCSR_FEIE_SHIFT                      10                                                  /*!< I2S_RCSR: FEIE Position                 */
#define I2S_RCSR_SEIE_MASK                       (0x01UL << I2S_RCSR_SEIE_SHIFT)                     /*!< I2S_RCSR: SEIE Mask                     */
#define I2S_RCSR_SEIE_SHIFT                      11                                                  /*!< I2S_RCSR: SEIE Position                 */
#define I2S_RCSR_WSIE_MASK                       (0x01UL << I2S_RCSR_WSIE_SHIFT)                     /*!< I2S_RCSR: WSIE Mask                     */
#define I2S_RCSR_WSIE_SHIFT                      12                                                  /*!< I2S_RCSR: WSIE Position                 */
#define I2S_RCSR_FWF_MASK                        (0x01UL << I2S_RCSR_FWF_SHIFT)                      /*!< I2S_RCSR: FWF Mask                      */
#define I2S_RCSR_FWF_SHIFT                       17                                                  /*!< I2S_RCSR: FWF Position                  */
#define I2S_RCSR_FEF_MASK                        (0x01UL << I2S_RCSR_FEF_SHIFT)                      /*!< I2S_RCSR: FEF Mask                      */
#define I2S_RCSR_FEF_SHIFT                       18                                                  /*!< I2S_RCSR: FEF Position                  */
#define I2S_RCSR_SEF_MASK                        (0x01UL << I2S_RCSR_SEF_SHIFT)                      /*!< I2S_RCSR: SEF Mask                      */
#define I2S_RCSR_SEF_SHIFT                       19                                                  /*!< I2S_RCSR: SEF Position                  */
#define I2S_RCSR_WSF_MASK                        (0x01UL << I2S_RCSR_WSF_SHIFT)                      /*!< I2S_RCSR: WSF Mask                      */
#define I2S_RCSR_WSF_SHIFT                       20                                                  /*!< I2S_RCSR: WSF Position                  */
#define I2S_RCSR_SR_MASK                         (0x01UL << I2S_RCSR_SR_SHIFT)                       /*!< I2S_RCSR: SR Mask                       */
#define I2S_RCSR_SR_SHIFT                        24                                                  /*!< I2S_RCSR: SR Position                   */
#define I2S_RCSR_FR_MASK                         (0x01UL << I2S_RCSR_FR_SHIFT)                       /*!< I2S_RCSR: FR Mask                       */
#define I2S_RCSR_FR_SHIFT                        25                                                  /*!< I2S_RCSR: FR Position                   */
#define I2S_RCSR_BCE_MASK                        (0x01UL << I2S_RCSR_BCE_SHIFT)                      /*!< I2S_RCSR: BCE Mask                      */
#define I2S_RCSR_BCE_SHIFT                       28                                                  /*!< I2S_RCSR: BCE Position                  */
#define I2S_RCSR_DBGE_MASK                       (0x01UL << I2S_RCSR_DBGE_SHIFT)                     /*!< I2S_RCSR: DBGE Mask                     */
#define I2S_RCSR_DBGE_SHIFT                      29                                                  /*!< I2S_RCSR: DBGE Position                 */
#define I2S_RCSR_STOPE_MASK                      (0x01UL << I2S_RCSR_STOPE_SHIFT)                    /*!< I2S_RCSR: STOPE Mask                    */
#define I2S_RCSR_STOPE_SHIFT                     30                                                  /*!< I2S_RCSR: STOPE Position                */
#define I2S_RCSR_RE_MASK                         (0x01UL << I2S_RCSR_RE_SHIFT)                       /*!< I2S_RCSR: RE Mask                       */
#define I2S_RCSR_RE_SHIFT                        31                                                  /*!< I2S_RCSR: RE Position                   */

/* ------- I2S0_RCR2                                ------ */
#define I2S_RCR2_DIV_MASK                        (0xFFUL << I2S_RCR2_DIV_SHIFT)                      /*!< I2S_RCR2: DIV Mask                      */
#define I2S_RCR2_DIV_SHIFT                       0                                                   /*!< I2S_RCR2: DIV Position                  */
#define I2S_RCR2_DIV(x)                          (((x)<<I2S_RCR2_DIV_SHIFT)&I2S_RCR2_DIV_MASK)       /*!< I2S_RCR2                                */
#define I2S_RCR2_BCD_MASK                        (0x01UL << I2S_RCR2_BCD_SHIFT)                      /*!< I2S_RCR2: BCD Mask                      */
#define I2S_RCR2_BCD_SHIFT                       24                                                  /*!< I2S_RCR2: BCD Position                  */
#define I2S_RCR2_BCP_MASK                        (0x01UL << I2S_RCR2_BCP_SHIFT)                      /*!< I2S_RCR2: BCP Mask                      */
#define I2S_RCR2_BCP_SHIFT                       25                                                  /*!< I2S_RCR2: BCP Position                  */
#define I2S_RCR2_CLKMODE_MASK                    (0x03UL << I2S_RCR2_CLKMODE_SHIFT)                  /*!< I2S_RCR2: CLKMODE Mask                  */
#define I2S_RCR2_CLKMODE_SHIFT                   26                                                  /*!< I2S_RCR2: CLKMODE Position              */
#define I2S_RCR2_CLKMODE(x)                      (((x)<<I2S_RCR2_CLKMODE_SHIFT)&I2S_RCR2_CLKMODE_MASK) /*!< I2S_RCR2                                */

/* ------- I2S0_RCR3                                ------ */
#define I2S_RCR3_WDFL_MASK                       (0x01UL << I2S_RCR3_WDFL_SHIFT)                     /*!< I2S_RCR3: WDFL Mask                     */
#define I2S_RCR3_WDFL_SHIFT                      0                                                   /*!< I2S_RCR3: WDFL Position                 */
#define I2S_RCR3_RCE_MASK                        (0x01UL << I2S_RCR3_RCE_SHIFT)                      /*!< I2S_RCR3: RCE Mask                      */
#define I2S_RCR3_RCE_SHIFT                       16                                                  /*!< I2S_RCR3: RCE Position                  */

/* ------- I2S0_RCR4                                ------ */
#define I2S_RCR4_FSD_MASK                        (0x01UL << I2S_RCR4_FSD_SHIFT)                      /*!< I2S_RCR4: FSD Mask                      */
#define I2S_RCR4_FSD_SHIFT                       0                                                   /*!< I2S_RCR4: FSD Position                  */
#define I2S_RCR4_FSP_MASK                        (0x01UL << I2S_RCR4_FSP_SHIFT)                      /*!< I2S_RCR4: FSP Mask                      */
#define I2S_RCR4_FSP_SHIFT                       1                                                   /*!< I2S_RCR4: FSP Position                  */
#define I2S_RCR4_FSE_MASK                        (0x01UL << I2S_RCR4_FSE_SHIFT)                      /*!< I2S_RCR4: FSE Mask                      */
#define I2S_RCR4_FSE_SHIFT                       3                                                   /*!< I2S_RCR4: FSE Position                  */
#define I2S_RCR4_MF_MASK                         (0x01UL << I2S_RCR4_MF_SHIFT)                       /*!< I2S_RCR4: MF Mask                       */
#define I2S_RCR4_MF_SHIFT                        4                                                   /*!< I2S_RCR4: MF Position                   */
#define I2S_RCR4_SYWD_MASK                       (0x1FUL << I2S_RCR4_SYWD_SHIFT)                     /*!< I2S_RCR4: SYWD Mask                     */
#define I2S_RCR4_SYWD_SHIFT                      8                                                   /*!< I2S_RCR4: SYWD Position                 */
#define I2S_RCR4_SYWD(x)                         (((x)<<I2S_RCR4_SYWD_SHIFT)&I2S_RCR4_SYWD_MASK)     /*!< I2S_RCR4                                */
#define I2S_RCR4_FRSZ_MASK                       (0x01UL << I2S_RCR4_FRSZ_SHIFT)                     /*!< I2S_RCR4: FRSZ Mask                     */
#define I2S_RCR4_FRSZ_SHIFT                      16                                                  /*!< I2S_RCR4: FRSZ Position                 */

/* ------- I2S0_RCR5                                ------ */
#define I2S_RCR5_FBT_MASK                        (0x1FUL << I2S_RCR5_FBT_SHIFT)                      /*!< I2S_RCR5: FBT Mask                      */
#define I2S_RCR5_FBT_SHIFT                       8                                                   /*!< I2S_RCR5: FBT Position                  */
#define I2S_RCR5_FBT(x)                          (((x)<<I2S_RCR5_FBT_SHIFT)&I2S_RCR5_FBT_MASK)       /*!< I2S_RCR5                                */
#define I2S_RCR5_W0W_MASK                        (0x1FUL << I2S_RCR5_W0W_SHIFT)                      /*!< I2S_RCR5: W0W Mask                      */
#define I2S_RCR5_W0W_SHIFT                       16                                                  /*!< I2S_RCR5: W0W Position                  */
#define I2S_RCR5_W0W(x)                          (((x)<<I2S_RCR5_W0W_SHIFT)&I2S_RCR5_W0W_MASK)       /*!< I2S_RCR5                                */
#define I2S_RCR5_WNW_MASK                        (0x1FUL << I2S_RCR5_WNW_SHIFT)                      /*!< I2S_RCR5: WNW Mask                      */
#define I2S_RCR5_WNW_SHIFT                       24                                                  /*!< I2S_RCR5: WNW Position                  */
#define I2S_RCR5_WNW(x)                          (((x)<<I2S_RCR5_WNW_SHIFT)&I2S_RCR5_WNW_MASK)       /*!< I2S_RCR5                                */

/* ------- I2S0_RDR0                                ------ */
#define I2S_RDR0_RDR_MASK                        (0xFFFFFFFFUL << I2S_RDR0_RDR_SHIFT)                /*!< I2S_RDR0: RDR Mask                      */
#define I2S_RDR0_RDR_SHIFT                       0                                                   /*!< I2S_RDR0: RDR Position                  */
#define I2S_RDR0_RDR(x)                          (((x)<<I2S_RDR0_RDR_SHIFT)&I2S_RDR0_RDR_MASK)       /*!< I2S_RDR0                                */

/* ------- I2S0_RMR                                 ------ */
#define I2S_RMR_RWM_MASK                         (0x03UL << I2S_RMR_RWM_SHIFT)                       /*!< I2S_RMR: RWM Mask                       */
#define I2S_RMR_RWM_SHIFT                        0                                                   /*!< I2S_RMR: RWM Position                   */
#define I2S_RMR_RWM(x)                           (((x)<<I2S_RMR_RWM_SHIFT)&I2S_RMR_RWM_MASK)         /*!< I2S_RMR                                 */

/* ------- I2S0_MCR                                 ------ */
#define I2S_MCR_MICS_MASK                        (0x03UL << I2S_MCR_MICS_SHIFT)                      /*!< I2S_MCR: MICS Mask                      */
#define I2S_MCR_MICS_SHIFT                       24                                                  /*!< I2S_MCR: MICS Position                  */
#define I2S_MCR_MICS(x)                          (((x)<<I2S_MCR_MICS_SHIFT)&I2S_MCR_MICS_MASK)       /*!< I2S_MCR                                 */
#define I2S_MCR_MOE_MASK                         (0x01UL << I2S_MCR_MOE_SHIFT)                       /*!< I2S_MCR: MOE Mask                       */
#define I2S_MCR_MOE_SHIFT                        30                                                  /*!< I2S_MCR: MOE Position                   */
#define I2S_MCR_DUF_MASK                         (0x01UL << I2S_MCR_DUF_SHIFT)                       /*!< I2S_MCR: DUF Mask                       */
#define I2S_MCR_DUF_SHIFT                        31                                                  /*!< I2S_MCR: DUF Position                   */

/* ------- I2S0_MDR                                 ------ */
#define I2S_MDR_DIVIDE_MASK                      (0xFFFUL << I2S_MDR_DIVIDE_SHIFT)                   /*!< I2S_MDR: DIVIDE Mask                    */
#define I2S_MDR_DIVIDE_SHIFT                     0                                                   /*!< I2S_MDR: DIVIDE Position                */
#define I2S_MDR_DIVIDE(x)                        (((x)<<I2S_MDR_DIVIDE_SHIFT)&I2S_MDR_DIVIDE_MASK)   /*!< I2S_MDR                                 */
#define I2S_MDR_FRACT_MASK                       (0xFFUL << I2S_MDR_FRACT_SHIFT)                     /*!< I2S_MDR: FRACT Mask                     */
#define I2S_MDR_FRACT_SHIFT                      12                                                  /*!< I2S_MDR: FRACT Position                 */
#define I2S_MDR_FRACT(x)                         (((x)<<I2S_MDR_FRACT_SHIFT)&I2S_MDR_FRACT_MASK)     /*!< I2S_MDR                                 */

/* -------------------------------------------------------------------------------- */
/* -----------     'I2S0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define I2S0_TCSR                      (I2S0->TCSR)
#define I2S0_TCR2                      (I2S0->TCR2)
#define I2S0_TCR3                      (I2S0->TCR3)
#define I2S0_TCR4                      (I2S0->TCR4)
#define I2S0_TCR5                      (I2S0->TCR5)
#define I2S0_TDR0                      (I2S0->TDR0)
#define I2S0_TMR                       (I2S0->TMR)
#define I2S0_RCSR                      (I2S0->RCSR)
#define I2S0_RCR2                      (I2S0->RCR2)
#define I2S0_RCR3                      (I2S0->RCR3)
#define I2S0_RCR4                      (I2S0->RCR4)
#define I2S0_RCR5                      (I2S0->RCR5)
#define I2S0_RDR0                      (I2S0->RDR0)
#define I2S0_RMR                       (I2S0->RMR)
#define I2S0_MCR                       (I2S0->MCR)
#define I2S0_MDR                       (I2S0->MDR)

/* ================================================================================ */
/* ================           LLWU (file:LLWU_3)                   ================ */
/* ================================================================================ */

/**
 * @brief Low leakage wakeup unit (LLWU)
 */
typedef struct {                                /*!<       LLWU Structure                                               */
   __IO uint8_t   PE1;                          /*!< 0000: LLWU Pin Enable 1 Register                                   */
   __IO uint8_t   PE2;                          /*!< 0001: LLWU Pin Enable 2 Register                                   */
   __IO uint8_t   PE3;                          /*!< 0002: LLWU Pin Enable 3 Register                                   */
   __IO uint8_t   PE4;                          /*!< 0003: LLWU Pin Enable 4 Register                                   */
   __IO uint8_t   ME;                           /*!< 0004: LLWU Module Enable Register                                  */
   __IO uint8_t   F1;                           /*!< 0005: LLWU Flag 1 Register                                         */
   __IO uint8_t   F2;                           /*!< 0006: LLWU Flag 2 Register                                         */
   __I  uint8_t   F3;                           /*!< 0007: LLWU Flag 3 Register                                         */
   __IO uint8_t   FILT1;                        /*!< 0008: LLWU Pin Filter 1 register                                   */
   __IO uint8_t   FILT2;                        /*!< 0009: LLWU Pin Filter 2 register                                   */
} LLWU_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'LLWU' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- LLWU_PE1                                 ------ */
#define LLWU_PE1_WUPE0_MASK                      (0x03UL << LLWU_PE1_WUPE0_SHIFT)                    /*!< LLWU_PE1: WUPE0 Mask                    */
#define LLWU_PE1_WUPE0_SHIFT                     0                                                   /*!< LLWU_PE1: WUPE0 Position                */
#define LLWU_PE1_WUPE0(x)                        (((x)<<LLWU_PE1_WUPE0_SHIFT)&LLWU_PE1_WUPE0_MASK)   /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE1_MASK                      (0x03UL << LLWU_PE1_WUPE1_SHIFT)                    /*!< LLWU_PE1: WUPE1 Mask                    */
#define LLWU_PE1_WUPE1_SHIFT                     2                                                   /*!< LLWU_PE1: WUPE1 Position                */
#define LLWU_PE1_WUPE1(x)                        (((x)<<LLWU_PE1_WUPE1_SHIFT)&LLWU_PE1_WUPE1_MASK)   /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE2_MASK                      (0x03UL << LLWU_PE1_WUPE2_SHIFT)                    /*!< LLWU_PE1: WUPE2 Mask                    */
#define LLWU_PE1_WUPE2_SHIFT                     4                                                   /*!< LLWU_PE1: WUPE2 Position                */
#define LLWU_PE1_WUPE2(x)                        (((x)<<LLWU_PE1_WUPE2_SHIFT)&LLWU_PE1_WUPE2_MASK)   /*!< LLWU_PE1                                */
#define LLWU_PE1_WUPE3_MASK                      (0x03UL << LLWU_PE1_WUPE3_SHIFT)                    /*!< LLWU_PE1: WUPE3 Mask                    */
#define LLWU_PE1_WUPE3_SHIFT                     6                                                   /*!< LLWU_PE1: WUPE3 Position                */
#define LLWU_PE1_WUPE3(x)                        (((x)<<LLWU_PE1_WUPE3_SHIFT)&LLWU_PE1_WUPE3_MASK)   /*!< LLWU_PE1                                */

/* ------- LLWU_PE2                                 ------ */
#define LLWU_PE2_WUPE4_MASK                      (0x03UL << LLWU_PE2_WUPE4_SHIFT)                    /*!< LLWU_PE2: WUPE4 Mask                    */
#define LLWU_PE2_WUPE4_SHIFT                     0                                                   /*!< LLWU_PE2: WUPE4 Position                */
#define LLWU_PE2_WUPE4(x)                        (((x)<<LLWU_PE2_WUPE4_SHIFT)&LLWU_PE2_WUPE4_MASK)   /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE5_MASK                      (0x03UL << LLWU_PE2_WUPE5_SHIFT)                    /*!< LLWU_PE2: WUPE5 Mask                    */
#define LLWU_PE2_WUPE5_SHIFT                     2                                                   /*!< LLWU_PE2: WUPE5 Position                */
#define LLWU_PE2_WUPE5(x)                        (((x)<<LLWU_PE2_WUPE5_SHIFT)&LLWU_PE2_WUPE5_MASK)   /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE6_MASK                      (0x03UL << LLWU_PE2_WUPE6_SHIFT)                    /*!< LLWU_PE2: WUPE6 Mask                    */
#define LLWU_PE2_WUPE6_SHIFT                     4                                                   /*!< LLWU_PE2: WUPE6 Position                */
#define LLWU_PE2_WUPE6(x)                        (((x)<<LLWU_PE2_WUPE6_SHIFT)&LLWU_PE2_WUPE6_MASK)   /*!< LLWU_PE2                                */
#define LLWU_PE2_WUPE7_MASK                      (0x03UL << LLWU_PE2_WUPE7_SHIFT)                    /*!< LLWU_PE2: WUPE7 Mask                    */
#define LLWU_PE2_WUPE7_SHIFT                     6                                                   /*!< LLWU_PE2: WUPE7 Position                */
#define LLWU_PE2_WUPE7(x)                        (((x)<<LLWU_PE2_WUPE7_SHIFT)&LLWU_PE2_WUPE7_MASK)   /*!< LLWU_PE2                                */

/* ------- LLWU_PE3                                 ------ */
#define LLWU_PE3_WUPE8_MASK                      (0x03UL << LLWU_PE3_WUPE8_SHIFT)                    /*!< LLWU_PE3: WUPE8 Mask                    */
#define LLWU_PE3_WUPE8_SHIFT                     0                                                   /*!< LLWU_PE3: WUPE8 Position                */
#define LLWU_PE3_WUPE8(x)                        (((x)<<LLWU_PE3_WUPE8_SHIFT)&LLWU_PE3_WUPE8_MASK)   /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE9_MASK                      (0x03UL << LLWU_PE3_WUPE9_SHIFT)                    /*!< LLWU_PE3: WUPE9 Mask                    */
#define LLWU_PE3_WUPE9_SHIFT                     2                                                   /*!< LLWU_PE3: WUPE9 Position                */
#define LLWU_PE3_WUPE9(x)                        (((x)<<LLWU_PE3_WUPE9_SHIFT)&LLWU_PE3_WUPE9_MASK)   /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE10_MASK                     (0x03UL << LLWU_PE3_WUPE10_SHIFT)                   /*!< LLWU_PE3: WUPE10 Mask                   */
#define LLWU_PE3_WUPE10_SHIFT                    4                                                   /*!< LLWU_PE3: WUPE10 Position               */
#define LLWU_PE3_WUPE10(x)                       (((x)<<LLWU_PE3_WUPE10_SHIFT)&LLWU_PE3_WUPE10_MASK) /*!< LLWU_PE3                                */
#define LLWU_PE3_WUPE11_MASK                     (0x03UL << LLWU_PE3_WUPE11_SHIFT)                   /*!< LLWU_PE3: WUPE11 Mask                   */
#define LLWU_PE3_WUPE11_SHIFT                    6                                                   /*!< LLWU_PE3: WUPE11 Position               */
#define LLWU_PE3_WUPE11(x)                       (((x)<<LLWU_PE3_WUPE11_SHIFT)&LLWU_PE3_WUPE11_MASK) /*!< LLWU_PE3                                */

/* ------- LLWU_PE4                                 ------ */
#define LLWU_PE4_WUPE12_MASK                     (0x03UL << LLWU_PE4_WUPE12_SHIFT)                   /*!< LLWU_PE4: WUPE12 Mask                   */
#define LLWU_PE4_WUPE12_SHIFT                    0                                                   /*!< LLWU_PE4: WUPE12 Position               */
#define LLWU_PE4_WUPE12(x)                       (((x)<<LLWU_PE4_WUPE12_SHIFT)&LLWU_PE4_WUPE12_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE13_MASK                     (0x03UL << LLWU_PE4_WUPE13_SHIFT)                   /*!< LLWU_PE4: WUPE13 Mask                   */
#define LLWU_PE4_WUPE13_SHIFT                    2                                                   /*!< LLWU_PE4: WUPE13 Position               */
#define LLWU_PE4_WUPE13(x)                       (((x)<<LLWU_PE4_WUPE13_SHIFT)&LLWU_PE4_WUPE13_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE14_MASK                     (0x03UL << LLWU_PE4_WUPE14_SHIFT)                   /*!< LLWU_PE4: WUPE14 Mask                   */
#define LLWU_PE4_WUPE14_SHIFT                    4                                                   /*!< LLWU_PE4: WUPE14 Position               */
#define LLWU_PE4_WUPE14(x)                       (((x)<<LLWU_PE4_WUPE14_SHIFT)&LLWU_PE4_WUPE14_MASK) /*!< LLWU_PE4                                */
#define LLWU_PE4_WUPE15_MASK                     (0x03UL << LLWU_PE4_WUPE15_SHIFT)                   /*!< LLWU_PE4: WUPE15 Mask                   */
#define LLWU_PE4_WUPE15_SHIFT                    6                                                   /*!< LLWU_PE4: WUPE15 Position               */
#define LLWU_PE4_WUPE15(x)                       (((x)<<LLWU_PE4_WUPE15_SHIFT)&LLWU_PE4_WUPE15_MASK) /*!< LLWU_PE4                                */

/* ------- LLWU_ME                                  ------ */
#define LLWU_ME_WUME0_MASK                       (0x01UL << LLWU_ME_WUME0_SHIFT)                     /*!< LLWU_ME: WUME0 Mask                     */
#define LLWU_ME_WUME0_SHIFT                      0                                                   /*!< LLWU_ME: WUME0 Position                 */
#define LLWU_ME_WUME1_MASK                       (0x01UL << LLWU_ME_WUME1_SHIFT)                     /*!< LLWU_ME: WUME1 Mask                     */
#define LLWU_ME_WUME1_SHIFT                      1                                                   /*!< LLWU_ME: WUME1 Position                 */
#define LLWU_ME_WUME2_MASK                       (0x01UL << LLWU_ME_WUME2_SHIFT)                     /*!< LLWU_ME: WUME2 Mask                     */
#define LLWU_ME_WUME2_SHIFT                      2                                                   /*!< LLWU_ME: WUME2 Position                 */
#define LLWU_ME_WUME3_MASK                       (0x01UL << LLWU_ME_WUME3_SHIFT)                     /*!< LLWU_ME: WUME3 Mask                     */
#define LLWU_ME_WUME3_SHIFT                      3                                                   /*!< LLWU_ME: WUME3 Position                 */
#define LLWU_ME_WUME4_MASK                       (0x01UL << LLWU_ME_WUME4_SHIFT)                     /*!< LLWU_ME: WUME4 Mask                     */
#define LLWU_ME_WUME4_SHIFT                      4                                                   /*!< LLWU_ME: WUME4 Position                 */
#define LLWU_ME_WUME5_MASK                       (0x01UL << LLWU_ME_WUME5_SHIFT)                     /*!< LLWU_ME: WUME5 Mask                     */
#define LLWU_ME_WUME5_SHIFT                      5                                                   /*!< LLWU_ME: WUME5 Position                 */
#define LLWU_ME_WUME6_MASK                       (0x01UL << LLWU_ME_WUME6_SHIFT)                     /*!< LLWU_ME: WUME6 Mask                     */
#define LLWU_ME_WUME6_SHIFT                      6                                                   /*!< LLWU_ME: WUME6 Position                 */
#define LLWU_ME_WUME7_MASK                       (0x01UL << LLWU_ME_WUME7_SHIFT)                     /*!< LLWU_ME: WUME7 Mask                     */
#define LLWU_ME_WUME7_SHIFT                      7                                                   /*!< LLWU_ME: WUME7 Position                 */

/* ------- LLWU_F1                                  ------ */
#define LLWU_F1_WUF0_MASK                        (0x01UL << LLWU_F1_WUF0_SHIFT)                      /*!< LLWU_F1: WUF0 Mask                      */
#define LLWU_F1_WUF0_SHIFT                       0                                                   /*!< LLWU_F1: WUF0 Position                  */
#define LLWU_F1_WUF1_MASK                        (0x01UL << LLWU_F1_WUF1_SHIFT)                      /*!< LLWU_F1: WUF1 Mask                      */
#define LLWU_F1_WUF1_SHIFT                       1                                                   /*!< LLWU_F1: WUF1 Position                  */
#define LLWU_F1_WUF2_MASK                        (0x01UL << LLWU_F1_WUF2_SHIFT)                      /*!< LLWU_F1: WUF2 Mask                      */
#define LLWU_F1_WUF2_SHIFT                       2                                                   /*!< LLWU_F1: WUF2 Position                  */
#define LLWU_F1_WUF3_MASK                        (0x01UL << LLWU_F1_WUF3_SHIFT)                      /*!< LLWU_F1: WUF3 Mask                      */
#define LLWU_F1_WUF3_SHIFT                       3                                                   /*!< LLWU_F1: WUF3 Position                  */
#define LLWU_F1_WUF4_MASK                        (0x01UL << LLWU_F1_WUF4_SHIFT)                      /*!< LLWU_F1: WUF4 Mask                      */
#define LLWU_F1_WUF4_SHIFT                       4                                                   /*!< LLWU_F1: WUF4 Position                  */
#define LLWU_F1_WUF5_MASK                        (0x01UL << LLWU_F1_WUF5_SHIFT)                      /*!< LLWU_F1: WUF5 Mask                      */
#define LLWU_F1_WUF5_SHIFT                       5                                                   /*!< LLWU_F1: WUF5 Position                  */
#define LLWU_F1_WUF6_MASK                        (0x01UL << LLWU_F1_WUF6_SHIFT)                      /*!< LLWU_F1: WUF6 Mask                      */
#define LLWU_F1_WUF6_SHIFT                       6                                                   /*!< LLWU_F1: WUF6 Position                  */
#define LLWU_F1_WUF7_MASK                        (0x01UL << LLWU_F1_WUF7_SHIFT)                      /*!< LLWU_F1: WUF7 Mask                      */
#define LLWU_F1_WUF7_SHIFT                       7                                                   /*!< LLWU_F1: WUF7 Position                  */

/* ------- LLWU_F2                                  ------ */
#define LLWU_F2_WUF8_MASK                        (0x01UL << LLWU_F2_WUF8_SHIFT)                      /*!< LLWU_F2: WUF8 Mask                      */
#define LLWU_F2_WUF8_SHIFT                       0                                                   /*!< LLWU_F2: WUF8 Position                  */
#define LLWU_F2_WUF9_MASK                        (0x01UL << LLWU_F2_WUF9_SHIFT)                      /*!< LLWU_F2: WUF9 Mask                      */
#define LLWU_F2_WUF9_SHIFT                       1                                                   /*!< LLWU_F2: WUF9 Position                  */
#define LLWU_F2_WUF10_MASK                       (0x01UL << LLWU_F2_WUF10_SHIFT)                     /*!< LLWU_F2: WUF10 Mask                     */
#define LLWU_F2_WUF10_SHIFT                      2                                                   /*!< LLWU_F2: WUF10 Position                 */
#define LLWU_F2_WUF11_MASK                       (0x01UL << LLWU_F2_WUF11_SHIFT)                     /*!< LLWU_F2: WUF11 Mask                     */
#define LLWU_F2_WUF11_SHIFT                      3                                                   /*!< LLWU_F2: WUF11 Position                 */
#define LLWU_F2_WUF12_MASK                       (0x01UL << LLWU_F2_WUF12_SHIFT)                     /*!< LLWU_F2: WUF12 Mask                     */
#define LLWU_F2_WUF12_SHIFT                      4                                                   /*!< LLWU_F2: WUF12 Position                 */
#define LLWU_F2_WUF13_MASK                       (0x01UL << LLWU_F2_WUF13_SHIFT)                     /*!< LLWU_F2: WUF13 Mask                     */
#define LLWU_F2_WUF13_SHIFT                      5                                                   /*!< LLWU_F2: WUF13 Position                 */
#define LLWU_F2_WUF14_MASK                       (0x01UL << LLWU_F2_WUF14_SHIFT)                     /*!< LLWU_F2: WUF14 Mask                     */
#define LLWU_F2_WUF14_SHIFT                      6                                                   /*!< LLWU_F2: WUF14 Position                 */
#define LLWU_F2_WUF15_MASK                       (0x01UL << LLWU_F2_WUF15_SHIFT)                     /*!< LLWU_F2: WUF15 Mask                     */
#define LLWU_F2_WUF15_SHIFT                      7                                                   /*!< LLWU_F2: WUF15 Position                 */

/* ------- LLWU_F3                                  ------ */
#define LLWU_F3_MWUF0_MASK                       (0x01UL << LLWU_F3_MWUF0_SHIFT)                     /*!< LLWU_F3: MWUF0 Mask                     */
#define LLWU_F3_MWUF0_SHIFT                      0                                                   /*!< LLWU_F3: MWUF0 Position                 */
#define LLWU_F3_MWUF1_MASK                       (0x01UL << LLWU_F3_MWUF1_SHIFT)                     /*!< LLWU_F3: MWUF1 Mask                     */
#define LLWU_F3_MWUF1_SHIFT                      1                                                   /*!< LLWU_F3: MWUF1 Position                 */
#define LLWU_F3_MWUF2_MASK                       (0x01UL << LLWU_F3_MWUF2_SHIFT)                     /*!< LLWU_F3: MWUF2 Mask                     */
#define LLWU_F3_MWUF2_SHIFT                      2                                                   /*!< LLWU_F3: MWUF2 Position                 */
#define LLWU_F3_MWUF3_MASK                       (0x01UL << LLWU_F3_MWUF3_SHIFT)                     /*!< LLWU_F3: MWUF3 Mask                     */
#define LLWU_F3_MWUF3_SHIFT                      3                                                   /*!< LLWU_F3: MWUF3 Position                 */
#define LLWU_F3_MWUF4_MASK                       (0x01UL << LLWU_F3_MWUF4_SHIFT)                     /*!< LLWU_F3: MWUF4 Mask                     */
#define LLWU_F3_MWUF4_SHIFT                      4                                                   /*!< LLWU_F3: MWUF4 Position                 */
#define LLWU_F3_MWUF5_MASK                       (0x01UL << LLWU_F3_MWUF5_SHIFT)                     /*!< LLWU_F3: MWUF5 Mask                     */
#define LLWU_F3_MWUF5_SHIFT                      5                                                   /*!< LLWU_F3: MWUF5 Position                 */
#define LLWU_F3_MWUF6_MASK                       (0x01UL << LLWU_F3_MWUF6_SHIFT)                     /*!< LLWU_F3: MWUF6 Mask                     */
#define LLWU_F3_MWUF6_SHIFT                      6                                                   /*!< LLWU_F3: MWUF6 Position                 */
#define LLWU_F3_MWUF7_MASK                       (0x01UL << LLWU_F3_MWUF7_SHIFT)                     /*!< LLWU_F3: MWUF7 Mask                     */
#define LLWU_F3_MWUF7_SHIFT                      7                                                   /*!< LLWU_F3: MWUF7 Position                 */

/* ------- LLWU_FILT                                ------ */
#define LLWU_FILT_FILTSEL_MASK                   (0x0FUL << LLWU_FILT_FILTSEL_SHIFT)                 /*!< LLWU_FILT: FILTSEL Mask                 */
#define LLWU_FILT_FILTSEL_SHIFT                  0                                                   /*!< LLWU_FILT: FILTSEL Position             */
#define LLWU_FILT_FILTSEL(x)                     (((x)<<LLWU_FILT_FILTSEL_SHIFT)&LLWU_FILT_FILTSEL_MASK) /*!< LLWU_FILT                               */
#define LLWU_FILT_FILTE_MASK                     (0x03UL << LLWU_FILT_FILTE_SHIFT)                   /*!< LLWU_FILT: FILTE Mask                   */
#define LLWU_FILT_FILTE_SHIFT                    5                                                   /*!< LLWU_FILT: FILTE Position               */
#define LLWU_FILT_FILTE(x)                       (((x)<<LLWU_FILT_FILTE_SHIFT)&LLWU_FILT_FILTE_MASK) /*!< LLWU_FILT                               */
#define LLWU_FILT_FILTF_MASK                     (0x01UL << LLWU_FILT_FILTF_SHIFT)                   /*!< LLWU_FILT: FILTF Mask                   */
#define LLWU_FILT_FILTF_SHIFT                    7                                                   /*!< LLWU_FILT: FILTF Position               */

/* -------------------------------------------------------------------------------- */
/* -----------     'LLWU' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define LLWU_PE1                       (LLWU->PE1)
#define LLWU_PE2                       (LLWU->PE2)
#define LLWU_PE3                       (LLWU->PE3)
#define LLWU_PE4                       (LLWU->PE4)
#define LLWU_ME                        (LLWU->ME)
#define LLWU_F1                        (LLWU->F1)
#define LLWU_F2                        (LLWU->F2)
#define LLWU_F3                        (LLWU->F3)
#define LLWU_FILT1                     (LLWU->FILT1)
#define LLWU_FILT2                     (LLWU->FILT2)

/* ================================================================================ */
/* ================           LPTMR0 (file:LPTMR0_0)               ================ */
/* ================================================================================ */

/**
 * @brief Low Power Timer (LPTMR0)
 */
typedef struct {                                /*!<       LPTMR0 Structure                                             */
   __IO uint32_t  CSR;                          /*!< 0000: Low Power Timer Control Status Register                      */
   __IO uint32_t  PSR;                          /*!< 0004: Low Power Timer Prescale Register                            */
   __IO uint32_t  CMR;                          /*!< 0008: Low Power Timer Compare Register                             */
   __I  uint32_t  CNR;                          /*!< 000C: Low Power Timer Counter Register                             */
} LPTMR0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'LPTMR0' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- LPTMR0_CSR                               ------ */
#define LPTMR0_CSR_TEN_MASK                      (0x01UL << LPTMR0_CSR_TEN_SHIFT)                    /*!< LPTMR0_CSR: TEN Mask                    */
#define LPTMR0_CSR_TEN_SHIFT                     0                                                   /*!< LPTMR0_CSR: TEN Position                */
#define LPTMR0_CSR_TMS_MASK                      (0x01UL << LPTMR0_CSR_TMS_SHIFT)                    /*!< LPTMR0_CSR: TMS Mask                    */
#define LPTMR0_CSR_TMS_SHIFT                     1                                                   /*!< LPTMR0_CSR: TMS Position                */
#define LPTMR0_CSR_TFC_MASK                      (0x01UL << LPTMR0_CSR_TFC_SHIFT)                    /*!< LPTMR0_CSR: TFC Mask                    */
#define LPTMR0_CSR_TFC_SHIFT                     2                                                   /*!< LPTMR0_CSR: TFC Position                */
#define LPTMR0_CSR_TPP_MASK                      (0x01UL << LPTMR0_CSR_TPP_SHIFT)                    /*!< LPTMR0_CSR: TPP Mask                    */
#define LPTMR0_CSR_TPP_SHIFT                     3                                                   /*!< LPTMR0_CSR: TPP Position                */
#define LPTMR0_CSR_TPS_MASK                      (0x03UL << LPTMR0_CSR_TPS_SHIFT)                    /*!< LPTMR0_CSR: TPS Mask                    */
#define LPTMR0_CSR_TPS_SHIFT                     4                                                   /*!< LPTMR0_CSR: TPS Position                */
#define LPTMR0_CSR_TPS(x)                        (((x)<<LPTMR0_CSR_TPS_SHIFT)&LPTMR0_CSR_TPS_MASK)   /*!< LPTMR0_CSR                              */
#define LPTMR0_CSR_TIE_MASK                      (0x01UL << LPTMR0_CSR_TIE_SHIFT)                    /*!< LPTMR0_CSR: TIE Mask                    */
#define LPTMR0_CSR_TIE_SHIFT                     6                                                   /*!< LPTMR0_CSR: TIE Position                */
#define LPTMR0_CSR_TCF_MASK                      (0x01UL << LPTMR0_CSR_TCF_SHIFT)                    /*!< LPTMR0_CSR: TCF Mask                    */
#define LPTMR0_CSR_TCF_SHIFT                     7                                                   /*!< LPTMR0_CSR: TCF Position                */

/* ------- LPTMR0_PSR                               ------ */
#define LPTMR0_PSR_PCS_MASK                      (0x03UL << LPTMR0_PSR_PCS_SHIFT)                    /*!< LPTMR0_PSR: PCS Mask                    */
#define LPTMR0_PSR_PCS_SHIFT                     0                                                   /*!< LPTMR0_PSR: PCS Position                */
#define LPTMR0_PSR_PCS(x)                        (((x)<<LPTMR0_PSR_PCS_SHIFT)&LPTMR0_PSR_PCS_MASK)   /*!< LPTMR0_PSR                              */
#define LPTMR0_PSR_PBYP_MASK                     (0x01UL << LPTMR0_PSR_PBYP_SHIFT)                   /*!< LPTMR0_PSR: PBYP Mask                   */
#define LPTMR0_PSR_PBYP_SHIFT                    2                                                   /*!< LPTMR0_PSR: PBYP Position               */
#define LPTMR0_PSR_PRESCALE_MASK                 (0x0FUL << LPTMR0_PSR_PRESCALE_SHIFT)               /*!< LPTMR0_PSR: PRESCALE Mask               */
#define LPTMR0_PSR_PRESCALE_SHIFT                3                                                   /*!< LPTMR0_PSR: PRESCALE Position           */
#define LPTMR0_PSR_PRESCALE(x)                   (((x)<<LPTMR0_PSR_PRESCALE_SHIFT)&LPTMR0_PSR_PRESCALE_MASK) /*!< LPTMR0_PSR                              */

/* ------- LPTMR0_CMR                               ------ */
#define LPTMR0_CMR_COMPARE_MASK                  (0xFFFFUL << LPTMR0_CMR_COMPARE_SHIFT)              /*!< LPTMR0_CMR: COMPARE Mask                */
#define LPTMR0_CMR_COMPARE_SHIFT                 0                                                   /*!< LPTMR0_CMR: COMPARE Position            */
#define LPTMR0_CMR_COMPARE(x)                    (((x)<<LPTMR0_CMR_COMPARE_SHIFT)&LPTMR0_CMR_COMPARE_MASK) /*!< LPTMR0_CMR                              */

/* ------- LPTMR0_CNR                               ------ */
#define LPTMR0_CNR_COUNTER_MASK                  (0xFFFFUL << LPTMR0_CNR_COUNTER_SHIFT)              /*!< LPTMR0_CNR: COUNTER Mask                */
#define LPTMR0_CNR_COUNTER_SHIFT                 0                                                   /*!< LPTMR0_CNR: COUNTER Position            */
#define LPTMR0_CNR_COUNTER(x)                    (((x)<<LPTMR0_CNR_COUNTER_SHIFT)&LPTMR0_CNR_COUNTER_MASK) /*!< LPTMR0_CNR                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'LPTMR0' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define LPTMR0_CSR                     (LPTMR0->CSR)
#define LPTMR0_PSR                     (LPTMR0->PSR)
#define LPTMR0_CMR                     (LPTMR0->CMR)
#define LPTMR0_CNR                     (LPTMR0->CNR)

/* ================================================================================ */
/* ================           MCG (file:MCG_7)                     ================ */
/* ================================================================================ */

/**
 * @brief Multipurpose Clock Generator module (MCG)
 */
typedef struct {                                /*!<       MCG Structure                                                */
   __IO uint8_t   C1;                           /*!< 0000: MCG Control 1 Register                                       */
   __IO uint8_t   C2;                           /*!< 0001: MCG Control 2 Register                                       */
   __IO uint8_t   C3;                           /*!< 0002: MCG Control 3 Register                                       */
   __IO uint8_t   C4;                           /*!< 0003: MCG Control 4 Register                                       */
   __IO uint8_t   C5;                           /*!< 0004: MCG Control 5 Register                                       */
   __IO uint8_t   C6;                           /*!< 0005: MCG Control 6 Register                                       */
   __I  uint8_t   S;                            /*!< 0006: MCG Status Register                                          */
   __I  uint8_t   RESERVED0;                    /*!< 0007:                                                              */
   __IO uint8_t   SC;                           /*!< 0008: MCG Status and Control Register                              */
   __I  uint8_t   RESERVED1;                    /*!< 0009:                                                              */
   __IO uint8_t   ATCVH;                        /*!< 000A: MCG Auto Trim Compare Value High Register                    */
   __IO uint8_t   ATCVL;                        /*!< 000B: MCG Auto Trim Compare Value Low Register                     */
   __I  uint8_t   C7;                           /*!< 000C: MCG Control 7 Register                                       */
   __IO uint8_t   C8;                           /*!< 000D: MCG Control 8 Register                                       */
   __I  uint8_t   C9;                           /*!< 000E: MCG Control 9 Register                                       */
   __I  uint8_t   C10;                          /*!< 000F: MCG Control 10 Register                                      */
} MCG_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MCG' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- MCG_C1                                   ------ */
#define MCG_C1_IREFSTEN_MASK                     (0x01UL << MCG_C1_IREFSTEN_SHIFT)                   /*!< MCG_C1: IREFSTEN Mask                   */
#define MCG_C1_IREFSTEN_SHIFT                    0                                                   /*!< MCG_C1: IREFSTEN Position               */
#define MCG_C1_IRCLKEN_MASK                      (0x01UL << MCG_C1_IRCLKEN_SHIFT)                    /*!< MCG_C1: IRCLKEN Mask                    */
#define MCG_C1_IRCLKEN_SHIFT                     1                                                   /*!< MCG_C1: IRCLKEN Position                */
#define MCG_C1_IREFS_MASK                        (0x01UL << MCG_C1_IREFS_SHIFT)                      /*!< MCG_C1: IREFS Mask                      */
#define MCG_C1_IREFS_SHIFT                       2                                                   /*!< MCG_C1: IREFS Position                  */
#define MCG_C1_FRDIV_MASK                        (0x07UL << MCG_C1_FRDIV_SHIFT)                      /*!< MCG_C1: FRDIV Mask                      */
#define MCG_C1_FRDIV_SHIFT                       3                                                   /*!< MCG_C1: FRDIV Position                  */
#define MCG_C1_FRDIV(x)                          (((x)<<MCG_C1_FRDIV_SHIFT)&MCG_C1_FRDIV_MASK)       /*!< MCG_C1                                  */
#define MCG_C1_CLKS_MASK                         (0x03UL << MCG_C1_CLKS_SHIFT)                       /*!< MCG_C1: CLKS Mask                       */
#define MCG_C1_CLKS_SHIFT                        6                                                   /*!< MCG_C1: CLKS Position                   */
#define MCG_C1_CLKS(x)                           (((x)<<MCG_C1_CLKS_SHIFT)&MCG_C1_CLKS_MASK)         /*!< MCG_C1                                  */

/* ------- MCG_C2                                   ------ */
#define MCG_C2_IRCS_MASK                         (0x01UL << MCG_C2_IRCS_SHIFT)                       /*!< MCG_C2: IRCS Mask                       */
#define MCG_C2_IRCS_SHIFT                        0                                                   /*!< MCG_C2: IRCS Position                   */
#define MCG_C2_LP_MASK                           (0x01UL << MCG_C2_LP_SHIFT)                         /*!< MCG_C2: LP Mask                         */
#define MCG_C2_LP_SHIFT                          1                                                   /*!< MCG_C2: LP Position                     */
#define MCG_C2_EREFS0_MASK                       (0x01UL << MCG_C2_EREFS0_SHIFT)                     /*!< MCG_C2: EREFS0 Mask                     */
#define MCG_C2_EREFS0_SHIFT                      2                                                   /*!< MCG_C2: EREFS0 Position                 */
#define MCG_C2_HGO0_MASK                         (0x01UL << MCG_C2_HGO0_SHIFT)                       /*!< MCG_C2: HGO0 Mask                       */
#define MCG_C2_HGO0_SHIFT                        3                                                   /*!< MCG_C2: HGO0 Position                   */
#define MCG_C2_RANGE0_MASK                       (0x03UL << MCG_C2_RANGE0_SHIFT)                     /*!< MCG_C2: RANGE0 Mask                     */
#define MCG_C2_RANGE0_SHIFT                      4                                                   /*!< MCG_C2: RANGE0 Position                 */
#define MCG_C2_RANGE0(x)                         (((x)<<MCG_C2_RANGE0_SHIFT)&MCG_C2_RANGE0_MASK)     /*!< MCG_C2                                  */
#define MCG_C2_FCFTRIM_MASK                      (0x01UL << MCG_C2_FCFTRIM_SHIFT)                    /*!< MCG_C2: FCFTRIM Mask                    */
#define MCG_C2_FCFTRIM_SHIFT                     6                                                   /*!< MCG_C2: FCFTRIM Position                */
#define MCG_C2_LOCRE0_MASK                       (0x01UL << MCG_C2_LOCRE0_SHIFT)                     /*!< MCG_C2: LOCRE0 Mask                     */
#define MCG_C2_LOCRE0_SHIFT                      7                                                   /*!< MCG_C2: LOCRE0 Position                 */

/* ------- MCG_C3                                   ------ */
#define MCG_C3_SCTRIM_MASK                       (0xFFUL << MCG_C3_SCTRIM_SHIFT)                     /*!< MCG_C3: SCTRIM Mask                     */
#define MCG_C3_SCTRIM_SHIFT                      0                                                   /*!< MCG_C3: SCTRIM Position                 */
#define MCG_C3_SCTRIM(x)                         (((x)<<MCG_C3_SCTRIM_SHIFT)&MCG_C3_SCTRIM_MASK)     /*!< MCG_C3                                  */

/* ------- MCG_C4                                   ------ */
#define MCG_C4_SCFTRIM_MASK                      (0x01UL << MCG_C4_SCFTRIM_SHIFT)                    /*!< MCG_C4: SCFTRIM Mask                    */
#define MCG_C4_SCFTRIM_SHIFT                     0                                                   /*!< MCG_C4: SCFTRIM Position                */
#define MCG_C4_FCTRIM_MASK                       (0x0FUL << MCG_C4_FCTRIM_SHIFT)                     /*!< MCG_C4: FCTRIM Mask                     */
#define MCG_C4_FCTRIM_SHIFT                      1                                                   /*!< MCG_C4: FCTRIM Position                 */
#define MCG_C4_FCTRIM(x)                         (((x)<<MCG_C4_FCTRIM_SHIFT)&MCG_C4_FCTRIM_MASK)     /*!< MCG_C4                                  */
#define MCG_C4_DRST_DRS_MASK                     (0x03UL << MCG_C4_DRST_DRS_SHIFT)                   /*!< MCG_C4: DRST_DRS Mask                   */
#define MCG_C4_DRST_DRS_SHIFT                    5                                                   /*!< MCG_C4: DRST_DRS Position               */
#define MCG_C4_DRST_DRS(x)                       (((x)<<MCG_C4_DRST_DRS_SHIFT)&MCG_C4_DRST_DRS_MASK) /*!< MCG_C4                                  */
#define MCG_C4_DMX32_MASK                        (0x01UL << MCG_C4_DMX32_SHIFT)                      /*!< MCG_C4: DMX32 Mask                      */
#define MCG_C4_DMX32_SHIFT                       7                                                   /*!< MCG_C4: DMX32 Position                  */

/* ------- MCG_C5                                   ------ */
#define MCG_C5_PRDIV0_MASK                       (0x1FUL << MCG_C5_PRDIV0_SHIFT)                     /*!< MCG_C5: PRDIV0 Mask                     */
#define MCG_C5_PRDIV0_SHIFT                      0                                                   /*!< MCG_C5: PRDIV0 Position                 */
#define MCG_C5_PRDIV0(x)                         (((x)<<MCG_C5_PRDIV0_SHIFT)&MCG_C5_PRDIV0_MASK)     /*!< MCG_C5                                  */
#define MCG_C5_PLLSTEN0_MASK                     (0x01UL << MCG_C5_PLLSTEN0_SHIFT)                   /*!< MCG_C5: PLLSTEN0 Mask                   */
#define MCG_C5_PLLSTEN0_SHIFT                    5                                                   /*!< MCG_C5: PLLSTEN0 Position               */
#define MCG_C5_PLLCLKEN0_MASK                    (0x01UL << MCG_C5_PLLCLKEN0_SHIFT)                  /*!< MCG_C5: PLLCLKEN0 Mask                  */
#define MCG_C5_PLLCLKEN0_SHIFT                   6                                                   /*!< MCG_C5: PLLCLKEN0 Position              */

/* ------- MCG_C6                                   ------ */
#define MCG_C6_VDIV0_MASK                        (0x1FUL << MCG_C6_VDIV0_SHIFT)                      /*!< MCG_C6: VDIV0 Mask                      */
#define MCG_C6_VDIV0_SHIFT                       0                                                   /*!< MCG_C6: VDIV0 Position                  */
#define MCG_C6_VDIV0(x)                          (((x)<<MCG_C6_VDIV0_SHIFT)&MCG_C6_VDIV0_MASK)       /*!< MCG_C6                                  */
#define MCG_C6_CME0_MASK                         (0x01UL << MCG_C6_CME0_SHIFT)                       /*!< MCG_C6: CME0 Mask                       */
#define MCG_C6_CME0_SHIFT                        5                                                   /*!< MCG_C6: CME0 Position                   */
#define MCG_C6_PLLS_MASK                         (0x01UL << MCG_C6_PLLS_SHIFT)                       /*!< MCG_C6: PLLS Mask                       */
#define MCG_C6_PLLS_SHIFT                        6                                                   /*!< MCG_C6: PLLS Position                   */
#define MCG_C6_LOLIE0_MASK                       (0x01UL << MCG_C6_LOLIE0_SHIFT)                     /*!< MCG_C6: LOLIE0 Mask                     */
#define MCG_C6_LOLIE0_SHIFT                      7                                                   /*!< MCG_C6: LOLIE0 Position                 */

/* ------- MCG_S                                    ------ */
#define MCG_S_IRCST_MASK                         (0x01UL << MCG_S_IRCST_SHIFT)                       /*!< MCG_S: IRCST Mask                       */
#define MCG_S_IRCST_SHIFT                        0                                                   /*!< MCG_S: IRCST Position                   */
#define MCG_S_OSCINIT0_MASK                      (0x01UL << MCG_S_OSCINIT0_SHIFT)                    /*!< MCG_S: OSCINIT0 Mask                    */
#define MCG_S_OSCINIT0_SHIFT                     1                                                   /*!< MCG_S: OSCINIT0 Position                */
#define MCG_S_CLKST_MASK                         (0x03UL << MCG_S_CLKST_SHIFT)                       /*!< MCG_S: CLKST Mask                       */
#define MCG_S_CLKST_SHIFT                        2                                                   /*!< MCG_S: CLKST Position                   */
#define MCG_S_CLKST(x)                           (((x)<<MCG_S_CLKST_SHIFT)&MCG_S_CLKST_MASK)         /*!< MCG_S                                   */
#define MCG_S_IREFST_MASK                        (0x01UL << MCG_S_IREFST_SHIFT)                      /*!< MCG_S: IREFST Mask                      */
#define MCG_S_IREFST_SHIFT                       4                                                   /*!< MCG_S: IREFST Position                  */
#define MCG_S_PLLST_MASK                         (0x01UL << MCG_S_PLLST_SHIFT)                       /*!< MCG_S: PLLST Mask                       */
#define MCG_S_PLLST_SHIFT                        5                                                   /*!< MCG_S: PLLST Position                   */
#define MCG_S_LOCK0_MASK                         (0x01UL << MCG_S_LOCK0_SHIFT)                       /*!< MCG_S: LOCK0 Mask                       */
#define MCG_S_LOCK0_SHIFT                        6                                                   /*!< MCG_S: LOCK0 Position                   */
#define MCG_S_LOLS_MASK                          (0x01UL << MCG_S_LOLS_SHIFT)                        /*!< MCG_S: LOLS Mask                        */
#define MCG_S_LOLS_SHIFT                         7                                                   /*!< MCG_S: LOLS Position                    */

/* ------- MCG_SC                                   ------ */
#define MCG_SC_LOCS0_MASK                        (0x01UL << MCG_SC_LOCS0_SHIFT)                      /*!< MCG_SC: LOCS0 Mask                      */
#define MCG_SC_LOCS0_SHIFT                       0                                                   /*!< MCG_SC: LOCS0 Position                  */
#define MCG_SC_FCRDIV_MASK                       (0x07UL << MCG_SC_FCRDIV_SHIFT)                     /*!< MCG_SC: FCRDIV Mask                     */
#define MCG_SC_FCRDIV_SHIFT                      1                                                   /*!< MCG_SC: FCRDIV Position                 */
#define MCG_SC_FCRDIV(x)                         (((x)<<MCG_SC_FCRDIV_SHIFT)&MCG_SC_FCRDIV_MASK)     /*!< MCG_SC                                  */
#define MCG_SC_FLTPRSRV_MASK                     (0x01UL << MCG_SC_FLTPRSRV_SHIFT)                   /*!< MCG_SC: FLTPRSRV Mask                   */
#define MCG_SC_FLTPRSRV_SHIFT                    4                                                   /*!< MCG_SC: FLTPRSRV Position               */
#define MCG_SC_ATMF_MASK                         (0x01UL << MCG_SC_ATMF_SHIFT)                       /*!< MCG_SC: ATMF Mask                       */
#define MCG_SC_ATMF_SHIFT                        5                                                   /*!< MCG_SC: ATMF Position                   */
#define MCG_SC_ATMS_MASK                         (0x01UL << MCG_SC_ATMS_SHIFT)                       /*!< MCG_SC: ATMS Mask                       */
#define MCG_SC_ATMS_SHIFT                        6                                                   /*!< MCG_SC: ATMS Position                   */
#define MCG_SC_ATME_MASK                         (0x01UL << MCG_SC_ATME_SHIFT)                       /*!< MCG_SC: ATME Mask                       */
#define MCG_SC_ATME_SHIFT                        7                                                   /*!< MCG_SC: ATME Position                   */

/* ------- MCG_ATCVH                                ------ */
#define MCG_ATCVH_ATCVH_MASK                     (0xFFUL << MCG_ATCVH_ATCVH_SHIFT)                   /*!< MCG_ATCVH: ATCVH Mask                   */
#define MCG_ATCVH_ATCVH_SHIFT                    0                                                   /*!< MCG_ATCVH: ATCVH Position               */
#define MCG_ATCVH_ATCVH(x)                       (((x)<<MCG_ATCVH_ATCVH_SHIFT)&MCG_ATCVH_ATCVH_MASK) /*!< MCG_ATCVH                               */

/* ------- MCG_ATCVL                                ------ */
#define MCG_ATCVL_ATCVL_MASK                     (0xFFUL << MCG_ATCVL_ATCVL_SHIFT)                   /*!< MCG_ATCVL: ATCVL Mask                   */
#define MCG_ATCVL_ATCVL_SHIFT                    0                                                   /*!< MCG_ATCVL: ATCVL Position               */
#define MCG_ATCVL_ATCVL(x)                       (((x)<<MCG_ATCVL_ATCVL_SHIFT)&MCG_ATCVL_ATCVL_MASK) /*!< MCG_ATCVL                               */

/* ------- MCG_C7                                   ------ */

/* ------- MCG_C8                                   ------ */
#define MCG_C8_LOLRE_MASK                        (0x01UL << MCG_C8_LOLRE_SHIFT)                      /*!< MCG_C8: LOLRE Mask                      */
#define MCG_C8_LOLRE_SHIFT                       6                                                   /*!< MCG_C8: LOLRE Position                  */

/* ------- MCG_C9                                   ------ */

/* ------- MCG_C10                                  ------ */

/* -------------------------------------------------------------------------------- */
/* -----------     'MCG' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define MCG_C1                         (MCG->C1)
#define MCG_C2                         (MCG->C2)
#define MCG_C3                         (MCG->C3)
#define MCG_C4                         (MCG->C4)
#define MCG_C5                         (MCG->C5)
#define MCG_C6                         (MCG->C6)
#define MCG_S                          (MCG->S)
#define MCG_SC                         (MCG->SC)
#define MCG_ATCVH                      (MCG->ATCVH)
#define MCG_ATCVL                      (MCG->ATCVL)
#define MCG_C7                         (MCG->C7)
#define MCG_C8                         (MCG->C8)
#define MCG_C9                         (MCG->C9)
#define MCG_C10                        (MCG->C10)

/* ================================================================================ */
/* ================           MCM (file:MCM_9)                     ================ */
/* ================================================================================ */

/**
 * @brief Core Platform Miscellaneous Control Module (MCM)
 */
typedef struct {                                /*!<       MCM Structure                                                */
   __I  uint32_t  RESERVED0[2];                 /*!< 0000:                                                              */
   __I  uint16_t  PLASC;                        /*!< 0008: Crossbar Switch (AXBS) Slave Configuration                   */
   __I  uint16_t  PLAMC;                        /*!< 000A: Crossbar Switch (AXBS) Master Configuration                  */
   __IO uint32_t  PLACR;                        /*!< 000C: Platform Control Register                                    */
   __I  uint32_t  RESERVED1[12];                /*!< 0010:                                                              */
   __IO uint32_t  CPO;                          /*!< 0040: Compute Operation Control Register                           */
} MCM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- MCM_PLASC                                ------ */
#define MCM_PLASC_ASC_MASK                       (0xFFUL << MCM_PLASC_ASC_SHIFT)                     /*!< MCM_PLASC: ASC Mask                     */
#define MCM_PLASC_ASC_SHIFT                      0                                                   /*!< MCM_PLASC: ASC Position                 */
#define MCM_PLASC_ASC(x)                         (((x)<<MCM_PLASC_ASC_SHIFT)&MCM_PLASC_ASC_MASK)     /*!< MCM_PLASC                               */

/* ------- MCM_PLAMC                                ------ */
#define MCM_PLAMC_AMC_MASK                       (0xFFUL << MCM_PLAMC_AMC_SHIFT)                     /*!< MCM_PLAMC: AMC Mask                     */
#define MCM_PLAMC_AMC_SHIFT                      0                                                   /*!< MCM_PLAMC: AMC Position                 */
#define MCM_PLAMC_AMC(x)                         (((x)<<MCM_PLAMC_AMC_SHIFT)&MCM_PLAMC_AMC_MASK)     /*!< MCM_PLAMC                               */

/* ------- MCM_PLACR                                ------ */
#define MCM_PLACR_ARB_MASK                       (0x01UL << MCM_PLACR_ARB_SHIFT)                     /*!< MCM_PLACR: ARB Mask                     */
#define MCM_PLACR_ARB_SHIFT                      9                                                   /*!< MCM_PLACR: ARB Position                 */
#define MCM_PLACR_CFCC_MASK                      (0x01UL << MCM_PLACR_CFCC_SHIFT)                    /*!< MCM_PLACR: CFCC Mask                    */
#define MCM_PLACR_CFCC_SHIFT                     10                                                  /*!< MCM_PLACR: CFCC Position                */
#define MCM_PLACR_DFCDA_MASK                     (0x01UL << MCM_PLACR_DFCDA_SHIFT)                   /*!< MCM_PLACR: DFCDA Mask                   */
#define MCM_PLACR_DFCDA_SHIFT                    11                                                  /*!< MCM_PLACR: DFCDA Position               */
#define MCM_PLACR_DFCIC_MASK                     (0x01UL << MCM_PLACR_DFCIC_SHIFT)                   /*!< MCM_PLACR: DFCIC Mask                   */
#define MCM_PLACR_DFCIC_SHIFT                    12                                                  /*!< MCM_PLACR: DFCIC Position               */
#define MCM_PLACR_DFCC_MASK                      (0x01UL << MCM_PLACR_DFCC_SHIFT)                    /*!< MCM_PLACR: DFCC Mask                    */
#define MCM_PLACR_DFCC_SHIFT                     13                                                  /*!< MCM_PLACR: DFCC Position                */
#define MCM_PLACR_EFDS_MASK                      (0x01UL << MCM_PLACR_EFDS_SHIFT)                    /*!< MCM_PLACR: EFDS Mask                    */
#define MCM_PLACR_EFDS_SHIFT                     14                                                  /*!< MCM_PLACR: EFDS Position                */
#define MCM_PLACR_DFCS_MASK                      (0x01UL << MCM_PLACR_DFCS_SHIFT)                    /*!< MCM_PLACR: DFCS Mask                    */
#define MCM_PLACR_DFCS_SHIFT                     15                                                  /*!< MCM_PLACR: DFCS Position                */
#define MCM_PLACR_ESFC_MASK                      (0x01UL << MCM_PLACR_ESFC_SHIFT)                    /*!< MCM_PLACR: ESFC Mask                    */
#define MCM_PLACR_ESFC_SHIFT                     16                                                  /*!< MCM_PLACR: ESFC Position                */

/* ------- MCM_CPO                                  ------ */
#define MCM_CPO_CPOREQ_MASK                      (0x01UL << MCM_CPO_CPOREQ_SHIFT)                    /*!< MCM_CPO: CPOREQ Mask                    */
#define MCM_CPO_CPOREQ_SHIFT                     0                                                   /*!< MCM_CPO: CPOREQ Position                */
#define MCM_CPO_CPOACK_MASK                      (0x01UL << MCM_CPO_CPOACK_SHIFT)                    /*!< MCM_CPO: CPOACK Mask                    */
#define MCM_CPO_CPOACK_SHIFT                     1                                                   /*!< MCM_CPO: CPOACK Position                */
#define MCM_CPO_CPOWOI_MASK                      (0x01UL << MCM_CPO_CPOWOI_SHIFT)                    /*!< MCM_CPO: CPOWOI Mask                    */
#define MCM_CPO_CPOWOI_SHIFT                     2                                                   /*!< MCM_CPO: CPOWOI Position                */

/* -------------------------------------------------------------------------------- */
/* -----------     'MCM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define MCM_PLASC                      (MCM->PLASC)
#define MCM_PLAMC                      (MCM->PLAMC)
#define MCM_PLACR                      (MCM->PLACR)
#define MCM_CPO                        (MCM->CPO)

/* ================================================================================ */
/* ================           MTB (file:MTB_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Micro Trace Buffer (MTB)
 */
typedef struct {                                /*!<       MTB Structure                                                */
   __IO uint32_t  POSITION;                     /*!< 0000: MTB Position Register                                        */
   __IO uint32_t  MASTER;                       /*!< 0004: MTB Master Register                                          */
   __IO uint32_t  FLOW;                         /*!< 0008: MTB Flow Register                                            */
   __I  uint32_t  BASE;                         /*!< 000C: MTB Base Register                                            */
   __I  uint32_t  RESERVED0[956];               /*!< 0010:                                                              */
   __I  uint32_t  MODECTRL;                     /*!< 0F00: Integration Mode Control Register                            */
   __I  uint32_t  RESERVED1[39];                /*!< 0F04:                                                              */
   __I  uint32_t  TAGSET;                       /*!< 0FA0: Claim TAG Set Register                                       */
   __I  uint32_t  TAGCLEAR;                     /*!< 0FA4: Claim TAG Clear Register                                     */
   __I  uint32_t  RESERVED2[2];                 /*!< 0FA8:                                                              */
   __I  uint32_t  LOCKACCESS;                   /*!< 0FB0: Lock Access Register                                         */
   __I  uint32_t  LOCKSTAT;                     /*!< 0FB4: Lock Status Register                                         */
   __I  uint32_t  AUTHSTAT;                     /*!< 0FB8: Authentication Status Register                               */
   __I  uint32_t  DEVICEARCH;                   /*!< 0FBC: Device Architecture Register                                 */
   __I  uint32_t  RESERVED3[2];                 /*!< 0FC0:                                                              */
   __I  uint32_t  DEVICECFG;                    /*!< 0FC8: Device Configuration Register                                */
   __I  uint32_t  DEVICETYPID;                  /*!< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PERIPHID4;                    /*!< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /*!< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /*!< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /*!< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /*!< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /*!< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /*!< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /*!< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /*!< 0FF0: Component ID Register                                        */
} MTB_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MTB' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- MTB_POSITION                             ------ */
#define MTB_POSITION_WRAP_MASK                   (0x01UL << MTB_POSITION_WRAP_SHIFT)                 /*!< MTB_POSITION: WRAP Mask                 */
#define MTB_POSITION_WRAP_SHIFT                  2                                                   /*!< MTB_POSITION: WRAP Position             */
#define MTB_POSITION_POINTER_MASK                (0x1FFFFFFFUL << MTB_POSITION_POINTER_SHIFT)        /*!< MTB_POSITION: POINTER Mask              */
#define MTB_POSITION_POINTER_SHIFT               3                                                   /*!< MTB_POSITION: POINTER Position          */
#define MTB_POSITION_POINTER(x)                  (((x)<<MTB_POSITION_POINTER_SHIFT)&MTB_POSITION_POINTER_MASK) /*!< MTB_POSITION                            */

/* ------- MTB_MASTER                               ------ */
#define MTB_MASTER_MASK_MASK                     (0x1FUL << MTB_MASTER_MASK_SHIFT)                   /*!< MTB_MASTER: MASK Mask                   */
#define MTB_MASTER_MASK_SHIFT                    0                                                   /*!< MTB_MASTER: MASK Position               */
#define MTB_MASTER_MASK(x)                       (((x)<<MTB_MASTER_MASK_SHIFT)&MTB_MASTER_MASK_MASK) /*!< MTB_MASTER                              */
#define MTB_MASTER_TSTARTEN_MASK                 (0x01UL << MTB_MASTER_TSTARTEN_SHIFT)               /*!< MTB_MASTER: TSTARTEN Mask               */
#define MTB_MASTER_TSTARTEN_SHIFT                5                                                   /*!< MTB_MASTER: TSTARTEN Position           */
#define MTB_MASTER_TSTOPEN_MASK                  (0x01UL << MTB_MASTER_TSTOPEN_SHIFT)                /*!< MTB_MASTER: TSTOPEN Mask                */
#define MTB_MASTER_TSTOPEN_SHIFT                 6                                                   /*!< MTB_MASTER: TSTOPEN Position            */
#define MTB_MASTER_SFRWPRIV_MASK                 (0x01UL << MTB_MASTER_SFRWPRIV_SHIFT)               /*!< MTB_MASTER: SFRWPRIV Mask               */
#define MTB_MASTER_SFRWPRIV_SHIFT                7                                                   /*!< MTB_MASTER: SFRWPRIV Position           */
#define MTB_MASTER_RAMPRIV_MASK                  (0x01UL << MTB_MASTER_RAMPRIV_SHIFT)                /*!< MTB_MASTER: RAMPRIV Mask                */
#define MTB_MASTER_RAMPRIV_SHIFT                 8                                                   /*!< MTB_MASTER: RAMPRIV Position            */
#define MTB_MASTER_HALTREQ_MASK                  (0x01UL << MTB_MASTER_HALTREQ_SHIFT)                /*!< MTB_MASTER: HALTREQ Mask                */
#define MTB_MASTER_HALTREQ_SHIFT                 9                                                   /*!< MTB_MASTER: HALTREQ Position            */
#define MTB_MASTER_EN_MASK                       (0x01UL << MTB_MASTER_EN_SHIFT)                     /*!< MTB_MASTER: EN Mask                     */
#define MTB_MASTER_EN_SHIFT                      31                                                  /*!< MTB_MASTER: EN Position                 */

/* ------- MTB_FLOW                                 ------ */
#define MTB_FLOW_AUTOSTOP_MASK                   (0x01UL << MTB_FLOW_AUTOSTOP_SHIFT)                 /*!< MTB_FLOW: AUTOSTOP Mask                 */
#define MTB_FLOW_AUTOSTOP_SHIFT                  0                                                   /*!< MTB_FLOW: AUTOSTOP Position             */
#define MTB_FLOW_AUTOHALT_MASK                   (0x01UL << MTB_FLOW_AUTOHALT_SHIFT)                 /*!< MTB_FLOW: AUTOHALT Mask                 */
#define MTB_FLOW_AUTOHALT_SHIFT                  1                                                   /*!< MTB_FLOW: AUTOHALT Position             */
#define MTB_FLOW_WATERMARK_MASK                  (0x1FFFFFFFUL << MTB_FLOW_WATERMARK_SHIFT)          /*!< MTB_FLOW: WATERMARK Mask                */
#define MTB_FLOW_WATERMARK_SHIFT                 3                                                   /*!< MTB_FLOW: WATERMARK Position            */
#define MTB_FLOW_WATERMARK(x)                    (((x)<<MTB_FLOW_WATERMARK_SHIFT)&MTB_FLOW_WATERMARK_MASK) /*!< MTB_FLOW                                */

/* ------- MTB_BASE                                 ------ */
#define MTB_BASE_BASEADDR_MASK                   (0xFFFFFFFFUL << MTB_BASE_BASEADDR_SHIFT)           /*!< MTB_BASE: BASEADDR Mask                 */
#define MTB_BASE_BASEADDR_SHIFT                  0                                                   /*!< MTB_BASE: BASEADDR Position             */
#define MTB_BASE_BASEADDR(x)                     (((x)<<MTB_BASE_BASEADDR_SHIFT)&MTB_BASE_BASEADDR_MASK) /*!< MTB_BASE                                */

/* ------- MTB_MODECTRL                             ------ */
#define MTB_MODECTRL_MODECTRL_MASK               (0xFFFFFFFFUL << MTB_MODECTRL_MODECTRL_SHIFT)       /*!< MTB_MODECTRL: MODECTRL Mask             */
#define MTB_MODECTRL_MODECTRL_SHIFT              0                                                   /*!< MTB_MODECTRL: MODECTRL Position         */
#define MTB_MODECTRL_MODECTRL(x)                 (((x)<<MTB_MODECTRL_MODECTRL_SHIFT)&MTB_MODECTRL_MODECTRL_MASK) /*!< MTB_MODECTRL                            */

/* ------- MTB_TAGSET                               ------ */
#define MTB_TAGSET_TAGSET_MASK                   (0xFFFFFFFFUL << MTB_TAGSET_TAGSET_SHIFT)           /*!< MTB_TAGSET: TAGSET Mask                 */
#define MTB_TAGSET_TAGSET_SHIFT                  0                                                   /*!< MTB_TAGSET: TAGSET Position             */
#define MTB_TAGSET_TAGSET(x)                     (((x)<<MTB_TAGSET_TAGSET_SHIFT)&MTB_TAGSET_TAGSET_MASK) /*!< MTB_TAGSET                              */

/* ------- MTB_TAGCLEAR                             ------ */
#define MTB_TAGCLEAR_TAGCLEAR_MASK               (0xFFFFFFFFUL << MTB_TAGCLEAR_TAGCLEAR_SHIFT)       /*!< MTB_TAGCLEAR: TAGCLEAR Mask             */
#define MTB_TAGCLEAR_TAGCLEAR_SHIFT              0                                                   /*!< MTB_TAGCLEAR: TAGCLEAR Position         */
#define MTB_TAGCLEAR_TAGCLEAR(x)                 (((x)<<MTB_TAGCLEAR_TAGCLEAR_SHIFT)&MTB_TAGCLEAR_TAGCLEAR_MASK) /*!< MTB_TAGCLEAR                            */

/* ------- MTB_LOCKACCESS                           ------ */
#define MTB_LOCKACCESS_LOCKACCESS_MASK           (0xFFFFFFFFUL << MTB_LOCKACCESS_LOCKACCESS_SHIFT)   /*!< MTB_LOCKACCESS: LOCKACCESS Mask         */
#define MTB_LOCKACCESS_LOCKACCESS_SHIFT          0                                                   /*!< MTB_LOCKACCESS: LOCKACCESS Position     */
#define MTB_LOCKACCESS_LOCKACCESS(x)             (((x)<<MTB_LOCKACCESS_LOCKACCESS_SHIFT)&MTB_LOCKACCESS_LOCKACCESS_MASK) /*!< MTB_LOCKACCESS                          */

/* ------- MTB_LOCKSTAT                             ------ */
#define MTB_LOCKSTAT_LOCKSTAT_MASK               (0xFFFFFFFFUL << MTB_LOCKSTAT_LOCKSTAT_SHIFT)       /*!< MTB_LOCKSTAT: LOCKSTAT Mask             */
#define MTB_LOCKSTAT_LOCKSTAT_SHIFT              0                                                   /*!< MTB_LOCKSTAT: LOCKSTAT Position         */
#define MTB_LOCKSTAT_LOCKSTAT(x)                 (((x)<<MTB_LOCKSTAT_LOCKSTAT_SHIFT)&MTB_LOCKSTAT_LOCKSTAT_MASK) /*!< MTB_LOCKSTAT                            */

/* ------- MTB_AUTHSTAT                             ------ */
#define MTB_AUTHSTAT_BIT0_MASK                   (0x01UL << MTB_AUTHSTAT_BIT0_SHIFT)                 /*!< MTB_AUTHSTAT: BIT0 Mask                 */
#define MTB_AUTHSTAT_BIT0_SHIFT                  0                                                   /*!< MTB_AUTHSTAT: BIT0 Position             */
#define MTB_AUTHSTAT_BIT1_MASK                   (0x01UL << MTB_AUTHSTAT_BIT1_SHIFT)                 /*!< MTB_AUTHSTAT: BIT1 Mask                 */
#define MTB_AUTHSTAT_BIT1_SHIFT                  1                                                   /*!< MTB_AUTHSTAT: BIT1 Position             */
#define MTB_AUTHSTAT_BIT2_MASK                   (0x01UL << MTB_AUTHSTAT_BIT2_SHIFT)                 /*!< MTB_AUTHSTAT: BIT2 Mask                 */
#define MTB_AUTHSTAT_BIT2_SHIFT                  2                                                   /*!< MTB_AUTHSTAT: BIT2 Position             */
#define MTB_AUTHSTAT_BIT3_MASK                   (0x01UL << MTB_AUTHSTAT_BIT3_SHIFT)                 /*!< MTB_AUTHSTAT: BIT3 Mask                 */
#define MTB_AUTHSTAT_BIT3_SHIFT                  3                                                   /*!< MTB_AUTHSTAT: BIT3 Position             */

/* ------- MTB_DEVICEARCH                           ------ */
#define MTB_DEVICEARCH_DEVICEARCH_MASK           (0xFFFFFFFFUL << MTB_DEVICEARCH_DEVICEARCH_SHIFT)   /*!< MTB_DEVICEARCH: DEVICEARCH Mask         */
#define MTB_DEVICEARCH_DEVICEARCH_SHIFT          0                                                   /*!< MTB_DEVICEARCH: DEVICEARCH Position     */
#define MTB_DEVICEARCH_DEVICEARCH(x)             (((x)<<MTB_DEVICEARCH_DEVICEARCH_SHIFT)&MTB_DEVICEARCH_DEVICEARCH_MASK) /*!< MTB_DEVICEARCH                          */

/* ------- MTB_DEVICECFG                            ------ */
#define MTB_DEVICECFG_DEVICECFG_MASK             (0xFFFFFFFFUL << MTB_DEVICECFG_DEVICECFG_SHIFT)     /*!< MTB_DEVICECFG: DEVICECFG Mask           */
#define MTB_DEVICECFG_DEVICECFG_SHIFT            0                                                   /*!< MTB_DEVICECFG: DEVICECFG Position       */
#define MTB_DEVICECFG_DEVICECFG(x)               (((x)<<MTB_DEVICECFG_DEVICECFG_SHIFT)&MTB_DEVICECFG_DEVICECFG_MASK) /*!< MTB_DEVICECFG                           */

/* ------- MTB_DEVICETYPID                          ------ */
#define MTB_DEVICETYPID_DEVICETYPID_MASK         (0xFFFFFFFFUL << MTB_DEVICETYPID_DEVICETYPID_SHIFT) /*!< MTB_DEVICETYPID: DEVICETYPID Mask       */
#define MTB_DEVICETYPID_DEVICETYPID_SHIFT        0                                                   /*!< MTB_DEVICETYPID: DEVICETYPID Position   */
#define MTB_DEVICETYPID_DEVICETYPID(x)           (((x)<<MTB_DEVICETYPID_DEVICETYPID_SHIFT)&MTB_DEVICETYPID_DEVICETYPID_MASK) /*!< MTB_DEVICETYPID                         */

/* ------- MTB_PERIPHID                             ------ */
#define MTB_PERIPHID_PERIPHID_MASK               (0xFFFFFFFFUL << MTB_PERIPHID_PERIPHID_SHIFT)       /*!< MTB_PERIPHID: PERIPHID Mask             */
#define MTB_PERIPHID_PERIPHID_SHIFT              0                                                   /*!< MTB_PERIPHID: PERIPHID Position         */
#define MTB_PERIPHID_PERIPHID(x)                 (((x)<<MTB_PERIPHID_PERIPHID_SHIFT)&MTB_PERIPHID_PERIPHID_MASK) /*!< MTB_PERIPHID                            */

/* ------- MTB_COMPID                               ------ */
#define MTB_COMPID_COMPID_MASK                   (0xFFFFFFFFUL << MTB_COMPID_COMPID_SHIFT)           /*!< MTB_COMPID: COMPID Mask                 */
#define MTB_COMPID_COMPID_SHIFT                  0                                                   /*!< MTB_COMPID: COMPID Position             */
#define MTB_COMPID_COMPID(x)                     (((x)<<MTB_COMPID_COMPID_SHIFT)&MTB_COMPID_COMPID_MASK) /*!< MTB_COMPID                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'MTB' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define MTB_POSITION                   (MTB->POSITION)
#define MTB_MASTER                     (MTB->MASTER)
#define MTB_FLOW                       (MTB->FLOW)
#define MTB_BASE                       (MTB->BASE)
#define MTB_MODECTRL                   (MTB->MODECTRL)
#define MTB_TAGSET                     (MTB->TAGSET)
#define MTB_TAGCLEAR                   (MTB->TAGCLEAR)
#define MTB_LOCKACCESS                 (MTB->LOCKACCESS)
#define MTB_LOCKSTAT                   (MTB->LOCKSTAT)
#define MTB_AUTHSTAT                   (MTB->AUTHSTAT)
#define MTB_DEVICEARCH                 (MTB->DEVICEARCH)
#define MTB_DEVICECFG                  (MTB->DEVICECFG)
#define MTB_DEVICETYPID                (MTB->DEVICETYPID)
#define MTB_PERIPHID4                  (MTB->PERIPHID4)
#define MTB_PERIPHID5                  (MTB->PERIPHID5)
#define MTB_PERIPHID6                  (MTB->PERIPHID6)
#define MTB_PERIPHID7                  (MTB->PERIPHID7)
#define MTB_PERIPHID0                  (MTB->PERIPHID0)
#define MTB_PERIPHID1                  (MTB->PERIPHID1)
#define MTB_PERIPHID2                  (MTB->PERIPHID2)
#define MTB_PERIPHID3                  (MTB->PERIPHID3)
#define MTB_COMPID0                    (MTB->COMPID[0])
#define MTB_COMPID1                    (MTB->COMPID[1])
#define MTB_COMPID2                    (MTB->COMPID[2])
#define MTB_COMPID3                    (MTB->COMPID[3])

/* ================================================================================ */
/* ================           MTBDWT (file:MTBDWT_0)               ================ */
/* ================================================================================ */

/**
 * @brief MTB data watchpoint and trace (MTBDWT)
 */
typedef struct {                                /*!<       MTBDWT Structure                                             */
   __I  uint32_t  CTRL;                         /*!< 0000: MTB DWT Control Register                                     */
   __I  uint32_t  RESERVED0[7];                 /*!< 0004:                                                              */
   struct { /* (cluster) */                     /*!< 0020: (size=0x0020, 32)                                            */
      __IO uint32_t  COMP;                      /*!< 0020: MTB_DWT Comparator Register                                  */
      __IO uint32_t  MASK;                      /*!< 0024: MTB_DWT Comparator Mask Register                             */
      __IO uint32_t  FCT;                       /*!< 0028: MTB_DWT Comparator Function Register 0                       */
      __I  uint32_t  RESERVED0;                 /*!< 002C:                                                              */
   } COMPARATOR[2];
   __I  uint32_t  RESERVED1[112];               /*!< 0040:                                                              */
   __IO uint32_t  TBCTRL;                       /*!< 0200: MTB_DWT Trace Buffer Control Register                        */
   __I  uint32_t  RESERVED2[881];               /*!< 0204:                                                              */
   __I  uint32_t  DEVICECFG;                    /*!< 0FC8: Device Configuration Register                                */
   __I  uint32_t  DEVICETYPID;                  /*!< 0FCC: Device Type Identifier Register                              */
   __I  uint32_t  PERIPHID4;                    /*!< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /*!< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /*!< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /*!< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /*!< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /*!< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /*!< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /*!< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /*!< 0FF0: Component ID Register                                        */
} MTBDWT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'MTBDWT' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- MTBDWT_CTRL                              ------ */
#define MTBDWT_CTRL_DWTCFGCTRL_MASK              (0xFFFFFFFUL << MTBDWT_CTRL_DWTCFGCTRL_SHIFT)       /*!< MTBDWT_CTRL: DWTCFGCTRL Mask            */
#define MTBDWT_CTRL_DWTCFGCTRL_SHIFT             0                                                   /*!< MTBDWT_CTRL: DWTCFGCTRL Position        */
#define MTBDWT_CTRL_DWTCFGCTRL(x)                (((x)<<MTBDWT_CTRL_DWTCFGCTRL_SHIFT)&MTBDWT_CTRL_DWTCFGCTRL_MASK) /*!< MTBDWT_CTRL                             */
#define MTBDWT_CTRL_NUMCMP_MASK                  (0x0FUL << MTBDWT_CTRL_NUMCMP_SHIFT)                /*!< MTBDWT_CTRL: NUMCMP Mask                */
#define MTBDWT_CTRL_NUMCMP_SHIFT                 28                                                  /*!< MTBDWT_CTRL: NUMCMP Position            */
#define MTBDWT_CTRL_NUMCMP(x)                    (((x)<<MTBDWT_CTRL_NUMCMP_SHIFT)&MTBDWT_CTRL_NUMCMP_MASK) /*!< MTBDWT_CTRL                             */

/* ------- MTBDWT_COMP                              ------ */
#define MTBDWT_COMP_COMP_MASK                    (0xFFFFFFFFUL << MTBDWT_COMP_COMP_SHIFT)            /*!< MTBDWT_COMP: COMP Mask                  */
#define MTBDWT_COMP_COMP_SHIFT                   0                                                   /*!< MTBDWT_COMP: COMP Position              */
#define MTBDWT_COMP_COMP(x)                      (((x)<<MTBDWT_COMP_COMP_SHIFT)&MTBDWT_COMP_COMP_MASK) /*!< MTBDWT_COMP                             */

/* ------- MTBDWT_MASK                              ------ */
#define MTBDWT_MASK_MASK_MASK                    (0x1FUL << MTBDWT_MASK_MASK_SHIFT)                  /*!< MTBDWT_MASK: MASK Mask                  */
#define MTBDWT_MASK_MASK_SHIFT                   0                                                   /*!< MTBDWT_MASK: MASK Position              */
#define MTBDWT_MASK_MASK(x)                      (((x)<<MTBDWT_MASK_MASK_SHIFT)&MTBDWT_MASK_MASK_MASK) /*!< MTBDWT_MASK                             */

/* ------- MTBDWT_FCT                               ------ */
#define MTBDWT_FCT_FUNCTION_MASK                 (0x0FUL << MTBDWT_FCT_FUNCTION_SHIFT)               /*!< MTBDWT_FCT: FUNCTION Mask               */
#define MTBDWT_FCT_FUNCTION_SHIFT                0                                                   /*!< MTBDWT_FCT: FUNCTION Position           */
#define MTBDWT_FCT_FUNCTION(x)                   (((x)<<MTBDWT_FCT_FUNCTION_SHIFT)&MTBDWT_FCT_FUNCTION_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_DATAVMATCH_MASK               (0x01UL << MTBDWT_FCT_DATAVMATCH_SHIFT)             /*!< MTBDWT_FCT: DATAVMATCH Mask             */
#define MTBDWT_FCT_DATAVMATCH_SHIFT              8                                                   /*!< MTBDWT_FCT: DATAVMATCH Position         */
#define MTBDWT_FCT_DATAVSIZE_MASK                (0x03UL << MTBDWT_FCT_DATAVSIZE_SHIFT)              /*!< MTBDWT_FCT: DATAVSIZE Mask              */
#define MTBDWT_FCT_DATAVSIZE_SHIFT               10                                                  /*!< MTBDWT_FCT: DATAVSIZE Position          */
#define MTBDWT_FCT_DATAVSIZE(x)                  (((x)<<MTBDWT_FCT_DATAVSIZE_SHIFT)&MTBDWT_FCT_DATAVSIZE_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_DATAVADDR0_MASK               (0x0FUL << MTBDWT_FCT_DATAVADDR0_SHIFT)             /*!< MTBDWT_FCT: DATAVADDR0 Mask             */
#define MTBDWT_FCT_DATAVADDR0_SHIFT              12                                                  /*!< MTBDWT_FCT: DATAVADDR0 Position         */
#define MTBDWT_FCT_DATAVADDR0(x)                 (((x)<<MTBDWT_FCT_DATAVADDR0_SHIFT)&MTBDWT_FCT_DATAVADDR0_MASK) /*!< MTBDWT_FCT                              */
#define MTBDWT_FCT_MATCHED_MASK                  (0x01UL << MTBDWT_FCT_MATCHED_SHIFT)                /*!< MTBDWT_FCT: MATCHED Mask                */
#define MTBDWT_FCT_MATCHED_SHIFT                 24                                                  /*!< MTBDWT_FCT: MATCHED Position            */

/* ------- MTBDWT_TBCTRL                            ------ */
#define MTBDWT_TBCTRL_ACOMP0_MASK                (0x01UL << MTBDWT_TBCTRL_ACOMP0_SHIFT)              /*!< MTBDWT_TBCTRL: ACOMP0 Mask              */
#define MTBDWT_TBCTRL_ACOMP0_SHIFT               0                                                   /*!< MTBDWT_TBCTRL: ACOMP0 Position          */
#define MTBDWT_TBCTRL_ACOMP1_MASK                (0x01UL << MTBDWT_TBCTRL_ACOMP1_SHIFT)              /*!< MTBDWT_TBCTRL: ACOMP1 Mask              */
#define MTBDWT_TBCTRL_ACOMP1_SHIFT               1                                                   /*!< MTBDWT_TBCTRL: ACOMP1 Position          */
#define MTBDWT_TBCTRL_NUMCOMP_MASK               (0x0FUL << MTBDWT_TBCTRL_NUMCOMP_SHIFT)             /*!< MTBDWT_TBCTRL: NUMCOMP Mask             */
#define MTBDWT_TBCTRL_NUMCOMP_SHIFT              28                                                  /*!< MTBDWT_TBCTRL: NUMCOMP Position         */
#define MTBDWT_TBCTRL_NUMCOMP(x)                 (((x)<<MTBDWT_TBCTRL_NUMCOMP_SHIFT)&MTBDWT_TBCTRL_NUMCOMP_MASK) /*!< MTBDWT_TBCTRL                           */

/* ------- MTBDWT_DEVICECFG                         ------ */
#define MTBDWT_DEVICECFG_DEVICECFG_MASK          (0xFFFFFFFFUL << MTBDWT_DEVICECFG_DEVICECFG_SHIFT)  /*!< MTBDWT_DEVICECFG: DEVICECFG Mask        */
#define MTBDWT_DEVICECFG_DEVICECFG_SHIFT         0                                                   /*!< MTBDWT_DEVICECFG: DEVICECFG Position    */
#define MTBDWT_DEVICECFG_DEVICECFG(x)            (((x)<<MTBDWT_DEVICECFG_DEVICECFG_SHIFT)&MTBDWT_DEVICECFG_DEVICECFG_MASK) /*!< MTBDWT_DEVICECFG                        */

/* ------- MTBDWT_DEVICETYPID                       ------ */
#define MTBDWT_DEVICETYPID_DEVICETYPID_MASK      (0xFFFFFFFFUL << MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT) /*!< MTBDWT_DEVICETYPID: DEVICETYPID Mask    */
#define MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT     0                                                   /*!< MTBDWT_DEVICETYPID: DEVICETYPID Position*/
#define MTBDWT_DEVICETYPID_DEVICETYPID(x)        (((x)<<MTBDWT_DEVICETYPID_DEVICETYPID_SHIFT)&MTBDWT_DEVICETYPID_DEVICETYPID_MASK) /*!< MTBDWT_DEVICETYPID                      */

/* ------- MTBDWT_PERIPHID                          ------ */
#define MTBDWT_PERIPHID_PERIPHID_MASK            (0xFFFFFFFFUL << MTBDWT_PERIPHID_PERIPHID_SHIFT)    /*!< MTBDWT_PERIPHID: PERIPHID Mask          */
#define MTBDWT_PERIPHID_PERIPHID_SHIFT           0                                                   /*!< MTBDWT_PERIPHID: PERIPHID Position      */
#define MTBDWT_PERIPHID_PERIPHID(x)              (((x)<<MTBDWT_PERIPHID_PERIPHID_SHIFT)&MTBDWT_PERIPHID_PERIPHID_MASK) /*!< MTBDWT_PERIPHID                         */

/* ------- MTBDWT_COMPID                            ------ */
#define MTBDWT_COMPID_COMPID_MASK                (0xFFFFFFFFUL << MTBDWT_COMPID_COMPID_SHIFT)        /*!< MTBDWT_COMPID: COMPID Mask              */
#define MTBDWT_COMPID_COMPID_SHIFT               0                                                   /*!< MTBDWT_COMPID: COMPID Position          */
#define MTBDWT_COMPID_COMPID(x)                  (((x)<<MTBDWT_COMPID_COMPID_SHIFT)&MTBDWT_COMPID_COMPID_MASK) /*!< MTBDWT_COMPID                           */

/* -------------------------------------------------------------------------------- */
/* -----------     'MTBDWT' Register Access macros                      ----------- */
/* -------------------------------------------------------------------------------- */

#define MTBDWT_CTRL                    (MTBDWT->CTRL)
#define MTBDWT_COMP0                   (MTBDWT->COMPARATOR[0].COMP)
#define MTBDWT_MASK0                   (MTBDWT->COMPARATOR[0].MASK)
#define MTBDWT_FCT0                    (MTBDWT->COMPARATOR[0].FCT)
#define MTBDWT_COMP1                   (MTBDWT->COMPARATOR[1].COMP)
#define MTBDWT_MASK1                   (MTBDWT->COMPARATOR[1].MASK)
#define MTBDWT_FCT1                    (MTBDWT->COMPARATOR[1].FCT)
#define MTBDWT_TBCTRL                  (MTBDWT->TBCTRL)
#define MTBDWT_DEVICECFG               (MTBDWT->DEVICECFG)
#define MTBDWT_DEVICETYPID             (MTBDWT->DEVICETYPID)
#define MTBDWT_PERIPHID4               (MTBDWT->PERIPHID4)
#define MTBDWT_PERIPHID5               (MTBDWT->PERIPHID5)
#define MTBDWT_PERIPHID6               (MTBDWT->PERIPHID6)
#define MTBDWT_PERIPHID7               (MTBDWT->PERIPHID7)
#define MTBDWT_PERIPHID0               (MTBDWT->PERIPHID0)
#define MTBDWT_PERIPHID1               (MTBDWT->PERIPHID1)
#define MTBDWT_PERIPHID2               (MTBDWT->PERIPHID2)
#define MTBDWT_PERIPHID3               (MTBDWT->PERIPHID3)
#define MTBDWT_COMPID0                 (MTBDWT->COMPID[0])
#define MTBDWT_COMPID1                 (MTBDWT->COMPID[1])
#define MTBDWT_COMPID2                 (MTBDWT->COMPID[2])
#define MTBDWT_COMPID3                 (MTBDWT->COMPID[3])

/* ================================================================================ */
/* ================           NV (file:NV_MKL)                     ================ */
/* ================================================================================ */

/**
 * @brief Flash configuration field
 */
typedef struct {                                /*!<       NV Structure                                                 */
   __I  uint8_t   BACKKEY3;                     /*!< 0000: Backdoor Comparison Key                                      */
   __I  uint8_t   BACKKEY2;                     /*!< 0001: Backdoor Comparison Key                                      */
   __I  uint8_t   BACKKEY1;                     /*!< 0002: Backdoor Comparison Key                                      */
   __I  uint8_t   BACKKEY0;                     /*!< 0003: Backdoor Comparison Key                                      */
   __I  uint8_t   BACKKEY7;                     /*!< 0004: Backdoor Comparison Key                                      */
   __I  uint8_t   BACKKEY6;                     /*!< 0005: Backdoor Comparison Key                                      */
   __I  uint8_t   BACKKEY5;                     /*!< 0006: Backdoor Comparison Key                                      */
   __I  uint8_t   BACKKEY4;                     /*!< 0007: Backdoor Comparison Key                                      */
   __I  uint8_t   FPROT3;                       /*!< 0008: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT2;                       /*!< 0009: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT1;                       /*!< 000A: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FPROT0;                       /*!< 000B: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FSEC;                         /*!< 000C: Non-volatile Flash Security Register                         */
   __I  uint8_t   FOPT;                         /*!< 000D: Non-volatile Flash Option Register                           */
} NV_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'NV' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- NV_BACKKEY                               ------ */
#define NV_BACKKEY_KEY_MASK                      (0xFFUL << NV_BACKKEY_KEY_SHIFT)                    /*!< NV_BACKKEY: KEY Mask                    */
#define NV_BACKKEY_KEY_SHIFT                     0                                                   /*!< NV_BACKKEY: KEY Position                */
#define NV_BACKKEY_KEY(x)                        (((x)<<NV_BACKKEY_KEY_SHIFT)&NV_BACKKEY_KEY_MASK)   /*!< NV_BACKKEY                              */

/* ------- NV_FPROT                                 ------ */
#define NV_FPROT_PROT_MASK                       (0xFFUL << NV_FPROT_PROT_SHIFT)                     /*!< NV_FPROT: PROT Mask                     */
#define NV_FPROT_PROT_SHIFT                      0                                                   /*!< NV_FPROT: PROT Position                 */
#define NV_FPROT_PROT(x)                         (((x)<<NV_FPROT_PROT_SHIFT)&NV_FPROT_PROT_MASK)     /*!< NV_FPROT                                */

/* ------- NV_FSEC                                  ------ */
#define NV_FSEC_SEC_MASK                         (0x03UL << NV_FSEC_SEC_SHIFT)                       /*!< NV_FSEC: SEC Mask                       */
#define NV_FSEC_SEC_SHIFT                        0                                                   /*!< NV_FSEC: SEC Position                   */
#define NV_FSEC_SEC(x)                           (((x)<<NV_FSEC_SEC_SHIFT)&NV_FSEC_SEC_MASK)         /*!< NV_FSEC                                 */
#define NV_FSEC_FSLACC_MASK                      (0x03UL << NV_FSEC_FSLACC_SHIFT)                    /*!< NV_FSEC: FSLACC Mask                    */
#define NV_FSEC_FSLACC_SHIFT                     2                                                   /*!< NV_FSEC: FSLACC Position                */
#define NV_FSEC_FSLACC(x)                        (((x)<<NV_FSEC_FSLACC_SHIFT)&NV_FSEC_FSLACC_MASK)   /*!< NV_FSEC                                 */
#define NV_FSEC_MEEN_MASK                        (0x03UL << NV_FSEC_MEEN_SHIFT)                      /*!< NV_FSEC: MEEN Mask                      */
#define NV_FSEC_MEEN_SHIFT                       4                                                   /*!< NV_FSEC: MEEN Position                  */
#define NV_FSEC_MEEN(x)                          (((x)<<NV_FSEC_MEEN_SHIFT)&NV_FSEC_MEEN_MASK)       /*!< NV_FSEC                                 */
#define NV_FSEC_KEYEN_MASK                       (0x03UL << NV_FSEC_KEYEN_SHIFT)                     /*!< NV_FSEC: KEYEN Mask                     */
#define NV_FSEC_KEYEN_SHIFT                      6                                                   /*!< NV_FSEC: KEYEN Position                 */
#define NV_FSEC_KEYEN(x)                         (((x)<<NV_FSEC_KEYEN_SHIFT)&NV_FSEC_KEYEN_MASK)     /*!< NV_FSEC                                 */

/* ------- NV_FOPT                                  ------ */
#define NV_FOPT_LPBOOT_MASK                      (0x01UL << NV_FOPT_LPBOOT_SHIFT)                    /*!< NV_FOPT: LPBOOT Mask                    */
#define NV_FOPT_LPBOOT_SHIFT                     0                                                   /*!< NV_FOPT: LPBOOT Position                */
#define NV_FOPT_NMI_DIS_MASK                     (0x01UL << NV_FOPT_NMI_DIS_SHIFT)                   /*!< NV_FOPT: NMI_DIS Mask                   */
#define NV_FOPT_NMI_DIS_SHIFT                    2                                                   /*!< NV_FOPT: NMI_DIS Position               */
#define NV_FOPT_RESET_PIN_CFG_MASK               (0x01UL << NV_FOPT_RESET_PIN_CFG_SHIFT)             /*!< NV_FOPT: RESET_PIN_CFG Mask             */
#define NV_FOPT_RESET_PIN_CFG_SHIFT              3                                                   /*!< NV_FOPT: RESET_PIN_CFG Position         */
#define NV_FOPT_LPBOOT1_MASK                     (0x01UL << NV_FOPT_LPBOOT1_SHIFT)                   /*!< NV_FOPT: LPBOOT1 Mask                   */
#define NV_FOPT_LPBOOT1_SHIFT                    4                                                   /*!< NV_FOPT: LPBOOT1 Position               */
#define NV_FOPT_FAST_INIT_MASK                   (0x01UL << NV_FOPT_FAST_INIT_SHIFT)                 /*!< NV_FOPT: FAST_INIT Mask                 */
#define NV_FOPT_FAST_INIT_SHIFT                  5                                                   /*!< NV_FOPT: FAST_INIT Position             */

/* -------------------------------------------------------------------------------- */
/* -----------     'NV' Register Access macros                          ----------- */
/* -------------------------------------------------------------------------------- */

#define NV_BACKKEY3                    (NV->BACKKEY3)
#define NV_BACKKEY2                    (NV->BACKKEY2)
#define NV_BACKKEY1                    (NV->BACKKEY1)
#define NV_BACKKEY0                    (NV->BACKKEY0)
#define NV_BACKKEY7                    (NV->BACKKEY7)
#define NV_BACKKEY6                    (NV->BACKKEY6)
#define NV_BACKKEY5                    (NV->BACKKEY5)
#define NV_BACKKEY4                    (NV->BACKKEY4)
#define NV_FPROT3                      (NV->FPROT3)
#define NV_FPROT2                      (NV->FPROT2)
#define NV_FPROT1                      (NV->FPROT1)
#define NV_FPROT0                      (NV->FPROT0)
#define NV_FSEC                        (NV->FSEC)
#define NV_FOPT                        (NV->FOPT)

/* ================================================================================ */
/* ================           OSC0 (file:OSC0_0)                   ================ */
/* ================================================================================ */

/**
 * @brief Oscillator (OSC0)
 */
typedef struct {                                /*!<       OSC0 Structure                                               */
   __IO uint8_t   CR;                           /*!< 0000: OSC Control Register                                         */
} OSC0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'OSC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- OSC0_CR                                  ------ */
#define OSC_CR_SC16P_MASK                        (0x01UL << OSC_CR_SC16P_SHIFT)                      /*!< OSC0_CR: SC16P Mask                     */
#define OSC_CR_SC16P_SHIFT                       0                                                   /*!< OSC0_CR: SC16P Position                 */
#define OSC_CR_SC8P_MASK                         (0x01UL << OSC_CR_SC8P_SHIFT)                       /*!< OSC0_CR: SC8P Mask                      */
#define OSC_CR_SC8P_SHIFT                        1                                                   /*!< OSC0_CR: SC8P Position                  */
#define OSC_CR_SC4P_MASK                         (0x01UL << OSC_CR_SC4P_SHIFT)                       /*!< OSC0_CR: SC4P Mask                      */
#define OSC_CR_SC4P_SHIFT                        2                                                   /*!< OSC0_CR: SC4P Position                  */
#define OSC_CR_SC2P_MASK                         (0x01UL << OSC_CR_SC2P_SHIFT)                       /*!< OSC0_CR: SC2P Mask                      */
#define OSC_CR_SC2P_SHIFT                        3                                                   /*!< OSC0_CR: SC2P Position                  */
#define OSC_CR_EREFSTEN_MASK                     (0x01UL << OSC_CR_EREFSTEN_SHIFT)                   /*!< OSC0_CR: EREFSTEN Mask                  */
#define OSC_CR_EREFSTEN_SHIFT                    5                                                   /*!< OSC0_CR: EREFSTEN Position              */
#define OSC_CR_ERCLKEN_MASK                      (0x01UL << OSC_CR_ERCLKEN_SHIFT)                    /*!< OSC0_CR: ERCLKEN Mask                   */
#define OSC_CR_ERCLKEN_SHIFT                     7                                                   /*!< OSC0_CR: ERCLKEN Position               */

/* -------------------------------------------------------------------------------- */
/* -----------     'OSC0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define OSC0_CR                        (OSC0->CR)

/* ================================================================================ */
/* ================           PIT (file:PIT_2CH_LTMR64)            ================ */
/* ================================================================================ */

/**
 * @brief Periodic Interrupt Timer (2 channels)
 */
typedef struct {                                /*!<       PIT Structure                                                */
   __IO uint32_t  MCR;                          /*!< 0000: PIT Module Control Register                                  */
   __I  uint32_t  RESERVED0[55];                /*!< 0004:                                                              */
   __I  uint32_t  LTMR64H;                      /*!< 00E0: PIT Upper Lifetime Timer Register                            */
   __I  uint32_t  LTMR64L;                      /*!< 00E4: PIT Lower Lifetime Timer Register                            */
   __I  uint32_t  RESERVED1[6];                 /*!< 00E8:                                                              */
   struct { /* (cluster) */                     /*!< 0100: (size=0x0020, 32)                                            */
      __IO uint32_t  LDVAL;                     /*!< 0100: Timer Load Value Register                                    */
      __I  uint32_t  CVAL;                      /*!< 0104: Current Timer Value Register                                 */
      __IO uint32_t  TCTRL;                     /*!< 0108: Timer Control Register                                       */
      __IO uint32_t  TFLG;                      /*!< 010C: Timer Flag Register                                          */
   } CS[2];
} PIT_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PIT' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- PIT_MCR                                  ------ */
#define PIT_MCR_FRZ_MASK                         (0x01UL << PIT_MCR_FRZ_SHIFT)                       /*!< PIT_MCR: FRZ Mask                       */
#define PIT_MCR_FRZ_SHIFT                        0                                                   /*!< PIT_MCR: FRZ Position                   */
#define PIT_MCR_MDIS_MASK                        (0x01UL << PIT_MCR_MDIS_SHIFT)                      /*!< PIT_MCR: MDIS Mask                      */
#define PIT_MCR_MDIS_SHIFT                       1                                                   /*!< PIT_MCR: MDIS Position                  */

/* ------- PIT_LTMR64H                              ------ */
#define PIT_LTMR64H_LTH_MASK                     (0xFFFFFFFFUL << PIT_LTMR64H_LTH_SHIFT)             /*!< PIT_LTMR64H: LTH Mask                   */
#define PIT_LTMR64H_LTH_SHIFT                    0                                                   /*!< PIT_LTMR64H: LTH Position               */
#define PIT_LTMR64H_LTH(x)                       (((x)<<PIT_LTMR64H_LTH_SHIFT)&PIT_LTMR64H_LTH_MASK) /*!< PIT_LTMR64H                             */

/* ------- PIT_LTMR64L                              ------ */
#define PIT_LTMR64L_LTL_MASK                     (0xFFFFFFFFUL << PIT_LTMR64L_LTL_SHIFT)             /*!< PIT_LTMR64L: LTL Mask                   */
#define PIT_LTMR64L_LTL_SHIFT                    0                                                   /*!< PIT_LTMR64L: LTL Position               */
#define PIT_LTMR64L_LTL(x)                       (((x)<<PIT_LTMR64L_LTL_SHIFT)&PIT_LTMR64L_LTL_MASK) /*!< PIT_LTMR64L                             */

/* ------- PIT_LDVAL                                ------ */
#define PIT_LDVAL_TSV_MASK                       (0xFFFFFFFFUL << PIT_LDVAL_TSV_SHIFT)               /*!< PIT_LDVAL: TSV Mask                     */
#define PIT_LDVAL_TSV_SHIFT                      0                                                   /*!< PIT_LDVAL: TSV Position                 */
#define PIT_LDVAL_TSV(x)                         (((x)<<PIT_LDVAL_TSV_SHIFT)&PIT_LDVAL_TSV_MASK)     /*!< PIT_LDVAL                               */

/* ------- PIT_CVAL                                 ------ */
#define PIT_CVAL_TVL_MASK                        (0xFFFFFFFFUL << PIT_CVAL_TVL_SHIFT)                /*!< PIT_CVAL: TVL Mask                      */
#define PIT_CVAL_TVL_SHIFT                       0                                                   /*!< PIT_CVAL: TVL Position                  */
#define PIT_CVAL_TVL(x)                          (((x)<<PIT_CVAL_TVL_SHIFT)&PIT_CVAL_TVL_MASK)       /*!< PIT_CVAL                                */

/* ------- PIT_TCTRL                                ------ */
#define PIT_TCTRL_TEN_MASK                       (0x01UL << PIT_TCTRL_TEN_SHIFT)                     /*!< PIT_TCTRL: TEN Mask                     */
#define PIT_TCTRL_TEN_SHIFT                      0                                                   /*!< PIT_TCTRL: TEN Position                 */
#define PIT_TCTRL_TIE_MASK                       (0x01UL << PIT_TCTRL_TIE_SHIFT)                     /*!< PIT_TCTRL: TIE Mask                     */
#define PIT_TCTRL_TIE_SHIFT                      1                                                   /*!< PIT_TCTRL: TIE Position                 */
#define PIT_TCTRL_CHN_MASK                       (0x01UL << PIT_TCTRL_CHN_SHIFT)                     /*!< PIT_TCTRL: CHN Mask                     */
#define PIT_TCTRL_CHN_SHIFT                      2                                                   /*!< PIT_TCTRL: CHN Position                 */

/* ------- PIT_TFLG                                 ------ */
#define PIT_TFLG_TIF_MASK                        (0x01UL << PIT_TFLG_TIF_SHIFT)                      /*!< PIT_TFLG: TIF Mask                      */
#define PIT_TFLG_TIF_SHIFT                       0                                                   /*!< PIT_TFLG: TIF Position                  */

/* -------------------------------------------------------------------------------- */
/* -----------     'PIT' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define PIT_MCR                        (PIT->MCR)
#define PIT_LTMR64H                    (PIT->LTMR64H)
#define PIT_LTMR64L                    (PIT->LTMR64L)
#define PIT_LDVAL0                     (PIT->CS[0].LDVAL)
#define PIT_CVAL0                      (PIT->CS[0].CVAL)
#define PIT_TCTRL0                     (PIT->CS[0].TCTRL)
#define PIT_TFLG0                      (PIT->CS[0].TFLG)
#define PIT_LDVAL1                     (PIT->CS[1].LDVAL)
#define PIT_CVAL1                      (PIT->CS[1].CVAL)
#define PIT_TCTRL1                     (PIT->CS[1].TCTRL)
#define PIT_TFLG1                      (PIT->CS[1].TFLG)

/* ================================================================================ */
/* ================           PMC (file:PMC_0)                     ================ */
/* ================================================================================ */

/**
 * @brief Power Management Controller (PMC)
 */
typedef struct {                                /*!<       PMC Structure                                                */
   __IO uint8_t   LVDSC1;                       /*!< 0000: Low Voltage Detect Status and Control 1 Register             */
   __IO uint8_t   LVDSC2;                       /*!< 0001: Low Voltage Detect Status and Control 2 Register             */
   __IO uint8_t   REGSC;                        /*!< 0002: Regulator Status and Control Register                        */
} PMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- PMC_LVDSC1                               ------ */
#define PMC_LVDSC1_LVDV_MASK                     (0x03UL << PMC_LVDSC1_LVDV_SHIFT)                   /*!< PMC_LVDSC1: LVDV Mask                   */
#define PMC_LVDSC1_LVDV_SHIFT                    0                                                   /*!< PMC_LVDSC1: LVDV Position               */
#define PMC_LVDSC1_LVDV(x)                       (((x)<<PMC_LVDSC1_LVDV_SHIFT)&PMC_LVDSC1_LVDV_MASK) /*!< PMC_LVDSC1                              */
#define PMC_LVDSC1_LVDRE_MASK                    (0x01UL << PMC_LVDSC1_LVDRE_SHIFT)                  /*!< PMC_LVDSC1: LVDRE Mask                  */
#define PMC_LVDSC1_LVDRE_SHIFT                   4                                                   /*!< PMC_LVDSC1: LVDRE Position              */
#define PMC_LVDSC1_LVDIE_MASK                    (0x01UL << PMC_LVDSC1_LVDIE_SHIFT)                  /*!< PMC_LVDSC1: LVDIE Mask                  */
#define PMC_LVDSC1_LVDIE_SHIFT                   5                                                   /*!< PMC_LVDSC1: LVDIE Position              */
#define PMC_LVDSC1_LVDACK_MASK                   (0x01UL << PMC_LVDSC1_LVDACK_SHIFT)                 /*!< PMC_LVDSC1: LVDACK Mask                 */
#define PMC_LVDSC1_LVDACK_SHIFT                  6                                                   /*!< PMC_LVDSC1: LVDACK Position             */
#define PMC_LVDSC1_LVDF_MASK                     (0x01UL << PMC_LVDSC1_LVDF_SHIFT)                   /*!< PMC_LVDSC1: LVDF Mask                   */
#define PMC_LVDSC1_LVDF_SHIFT                    7                                                   /*!< PMC_LVDSC1: LVDF Position               */

/* ------- PMC_LVDSC2                               ------ */
#define PMC_LVDSC2_LVWV_MASK                     (0x03UL << PMC_LVDSC2_LVWV_SHIFT)                   /*!< PMC_LVDSC2: LVWV Mask                   */
#define PMC_LVDSC2_LVWV_SHIFT                    0                                                   /*!< PMC_LVDSC2: LVWV Position               */
#define PMC_LVDSC2_LVWV(x)                       (((x)<<PMC_LVDSC2_LVWV_SHIFT)&PMC_LVDSC2_LVWV_MASK) /*!< PMC_LVDSC2                              */
#define PMC_LVDSC2_LVWIE_MASK                    (0x01UL << PMC_LVDSC2_LVWIE_SHIFT)                  /*!< PMC_LVDSC2: LVWIE Mask                  */
#define PMC_LVDSC2_LVWIE_SHIFT                   5                                                   /*!< PMC_LVDSC2: LVWIE Position              */
#define PMC_LVDSC2_LVWACK_MASK                   (0x01UL << PMC_LVDSC2_LVWACK_SHIFT)                 /*!< PMC_LVDSC2: LVWACK Mask                 */
#define PMC_LVDSC2_LVWACK_SHIFT                  6                                                   /*!< PMC_LVDSC2: LVWACK Position             */
#define PMC_LVDSC2_LVWF_MASK                     (0x01UL << PMC_LVDSC2_LVWF_SHIFT)                   /*!< PMC_LVDSC2: LVWF Mask                   */
#define PMC_LVDSC2_LVWF_SHIFT                    7                                                   /*!< PMC_LVDSC2: LVWF Position               */

/* ------- PMC_REGSC                                ------ */
#define PMC_REGSC_BGBE_MASK                      (0x01UL << PMC_REGSC_BGBE_SHIFT)                    /*!< PMC_REGSC: BGBE Mask                    */
#define PMC_REGSC_BGBE_SHIFT                     0                                                   /*!< PMC_REGSC: BGBE Position                */
#define PMC_REGSC_REGONS_MASK                    (0x01UL << PMC_REGSC_REGONS_SHIFT)                  /*!< PMC_REGSC: REGONS Mask                  */
#define PMC_REGSC_REGONS_SHIFT                   2                                                   /*!< PMC_REGSC: REGONS Position              */
#define PMC_REGSC_ACKISO_MASK                    (0x01UL << PMC_REGSC_ACKISO_SHIFT)                  /*!< PMC_REGSC: ACKISO Mask                  */
#define PMC_REGSC_ACKISO_SHIFT                   3                                                   /*!< PMC_REGSC: ACKISO Position              */
#define PMC_REGSC_BGEN_MASK                      (0x01UL << PMC_REGSC_BGEN_SHIFT)                    /*!< PMC_REGSC: BGEN Mask                    */
#define PMC_REGSC_BGEN_SHIFT                     4                                                   /*!< PMC_REGSC: BGEN Position                */

/* -------------------------------------------------------------------------------- */
/* -----------     'PMC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define PMC_LVDSC1                     (PMC->LVDSC1)
#define PMC_LVDSC2                     (PMC->LVDSC2)
#define PMC_REGSC                      (PMC->REGSC)

/* ================================================================================ */
/* ================           PORTA (file:PORTA_2)                 ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts (PORTA)
 */
typedef struct {                                /*!<       PORTA Structure                                              */
   __IO uint32_t  PCR[32];                      /*!< 0000: Pin Control Register n                                       */
   __O  uint32_t  GPCLR;                        /*!< 0080: Global Pin Control Low Register                              */
   __O  uint32_t  GPCHR;                        /*!< 0084: Global Pin Control High Register                             */
   __I  uint32_t  RESERVED0[6];                 /*!< 0088:                                                              */
   __IO uint32_t  ISFR;                         /*!< 00A0: Interrupt Status Flag Register                               */
} PORTA_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTA' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- PORTA_PCR                                ------ */
#define PORT_PCR_PS_MASK                         (0x01UL << PORT_PCR_PS_SHIFT)                       /*!< PORTA_PCR: PS Mask                      */
#define PORT_PCR_PS_SHIFT                        0                                                   /*!< PORTA_PCR: PS Position                  */
#define PORT_PCR_PE_MASK                         (0x01UL << PORT_PCR_PE_SHIFT)                       /*!< PORTA_PCR: PE Mask                      */
#define PORT_PCR_PE_SHIFT                        1                                                   /*!< PORTA_PCR: PE Position                  */
#define PORT_PCR_SRE_MASK                        (0x01UL << PORT_PCR_SRE_SHIFT)                      /*!< PORTA_PCR: SRE Mask                     */
#define PORT_PCR_SRE_SHIFT                       2                                                   /*!< PORTA_PCR: SRE Position                 */
#define PORT_PCR_PFE_MASK                        (0x01UL << PORT_PCR_PFE_SHIFT)                      /*!< PORTA_PCR: PFE Mask                     */
#define PORT_PCR_PFE_SHIFT                       4                                                   /*!< PORTA_PCR: PFE Position                 */
#define PORT_PCR_DSE_MASK                        (0x01UL << PORT_PCR_DSE_SHIFT)                      /*!< PORTA_PCR: DSE Mask                     */
#define PORT_PCR_DSE_SHIFT                       6                                                   /*!< PORTA_PCR: DSE Position                 */
#define PORT_PCR_MUX_MASK                        (0x07UL << PORT_PCR_MUX_SHIFT)                      /*!< PORTA_PCR: MUX Mask                     */
#define PORT_PCR_MUX_SHIFT                       8                                                   /*!< PORTA_PCR: MUX Position                 */
#define PORT_PCR_MUX(x)                          (((x)<<PORT_PCR_MUX_SHIFT)&PORT_PCR_MUX_MASK)       /*!< PORTA_PCR                               */
#define PORT_PCR_IRQC_MASK                       (0x0FUL << PORT_PCR_IRQC_SHIFT)                     /*!< PORTA_PCR: IRQC Mask                    */
#define PORT_PCR_IRQC_SHIFT                      16                                                  /*!< PORTA_PCR: IRQC Position                */
#define PORT_PCR_IRQC(x)                         (((x)<<PORT_PCR_IRQC_SHIFT)&PORT_PCR_IRQC_MASK)     /*!< PORTA_PCR                               */
#define PORT_PCR_ISF_MASK                        (0x01UL << PORT_PCR_ISF_SHIFT)                      /*!< PORTA_PCR: ISF Mask                     */
#define PORT_PCR_ISF_SHIFT                       24                                                  /*!< PORTA_PCR: ISF Position                 */

/* ------- PORTA_GPCLR                              ------ */
#define PORT_GPCLR_GPWD_MASK                     (0xFFFFUL << PORT_GPCLR_GPWD_SHIFT)                 /*!< PORTA_GPCLR: GPWD Mask                  */
#define PORT_GPCLR_GPWD_SHIFT                    0                                                   /*!< PORTA_GPCLR: GPWD Position              */
#define PORT_GPCLR_GPWD(x)                       (((x)<<PORT_GPCLR_GPWD_SHIFT)&PORT_GPCLR_GPWD_MASK) /*!< PORTA_GPCLR                             */
#define PORT_GPCLR_GPWE_MASK                     (0xFFFFUL << PORT_GPCLR_GPWE_SHIFT)                 /*!< PORTA_GPCLR: GPWE Mask                  */
#define PORT_GPCLR_GPWE_SHIFT                    16                                                  /*!< PORTA_GPCLR: GPWE Position              */
#define PORT_GPCLR_GPWE(x)                       (((x)<<PORT_GPCLR_GPWE_SHIFT)&PORT_GPCLR_GPWE_MASK) /*!< PORTA_GPCLR                             */

/* ------- PORTA_GPCHR                              ------ */
#define PORT_GPCHR_GPWD_MASK                     (0xFFFFUL << PORT_GPCHR_GPWD_SHIFT)                 /*!< PORTA_GPCHR: GPWD Mask                  */
#define PORT_GPCHR_GPWD_SHIFT                    0                                                   /*!< PORTA_GPCHR: GPWD Position              */
#define PORT_GPCHR_GPWD(x)                       (((x)<<PORT_GPCHR_GPWD_SHIFT)&PORT_GPCHR_GPWD_MASK) /*!< PORTA_GPCHR                             */
#define PORT_GPCHR_GPWE_MASK                     (0xFFFFUL << PORT_GPCHR_GPWE_SHIFT)                 /*!< PORTA_GPCHR: GPWE Mask                  */
#define PORT_GPCHR_GPWE_SHIFT                    16                                                  /*!< PORTA_GPCHR: GPWE Position              */
#define PORT_GPCHR_GPWE(x)                       (((x)<<PORT_GPCHR_GPWE_SHIFT)&PORT_GPCHR_GPWE_MASK) /*!< PORTA_GPCHR                             */

/* ------- PORTA_ISFR                               ------ */
#define PORT_ISFR_ISF_MASK                       (0xFFFFFFFFUL << PORT_ISFR_ISF_SHIFT)               /*!< PORTA_ISFR: ISF Mask                    */
#define PORT_ISFR_ISF_SHIFT                      0                                                   /*!< PORTA_ISFR: ISF Position                */
#define PORT_ISFR_ISF(x)                         (((x)<<PORT_ISFR_ISF_SHIFT)&PORT_ISFR_ISF_MASK)     /*!< PORTA_ISFR                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'PORTA' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTA_PCR0                     (PORTA->PCR[0])
#define PORTA_PCR1                     (PORTA->PCR[1])
#define PORTA_PCR2                     (PORTA->PCR[2])
#define PORTA_PCR3                     (PORTA->PCR[3])
#define PORTA_PCR4                     (PORTA->PCR[4])
#define PORTA_PCR5                     (PORTA->PCR[5])
#define PORTA_PCR6                     (PORTA->PCR[6])
#define PORTA_PCR7                     (PORTA->PCR[7])
#define PORTA_PCR8                     (PORTA->PCR[8])
#define PORTA_PCR9                     (PORTA->PCR[9])
#define PORTA_PCR10                    (PORTA->PCR[10])
#define PORTA_PCR11                    (PORTA->PCR[11])
#define PORTA_PCR12                    (PORTA->PCR[12])
#define PORTA_PCR13                    (PORTA->PCR[13])
#define PORTA_PCR14                    (PORTA->PCR[14])
#define PORTA_PCR15                    (PORTA->PCR[15])
#define PORTA_PCR16                    (PORTA->PCR[16])
#define PORTA_PCR17                    (PORTA->PCR[17])
#define PORTA_PCR18                    (PORTA->PCR[18])
#define PORTA_PCR19                    (PORTA->PCR[19])
#define PORTA_PCR20                    (PORTA->PCR[20])
#define PORTA_PCR21                    (PORTA->PCR[21])
#define PORTA_PCR22                    (PORTA->PCR[22])
#define PORTA_PCR23                    (PORTA->PCR[23])
#define PORTA_PCR24                    (PORTA->PCR[24])
#define PORTA_PCR25                    (PORTA->PCR[25])
#define PORTA_PCR26                    (PORTA->PCR[26])
#define PORTA_PCR27                    (PORTA->PCR[27])
#define PORTA_PCR28                    (PORTA->PCR[28])
#define PORTA_PCR29                    (PORTA->PCR[29])
#define PORTA_PCR30                    (PORTA->PCR[30])
#define PORTA_PCR31                    (PORTA->PCR[31])
#define PORTA_GPCLR                    (PORTA->GPCLR)
#define PORTA_GPCHR                    (PORTA->GPCHR)
#define PORTA_ISFR                     (PORTA->ISFR)

/* ================================================================================ */
/* ================           PORTB (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts (PORTB)
 */
typedef PORTA_Type PORTB_Type;  /*!< PORTB Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTB' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTB_PCR0                     (PORTB->PCR[0])
#define PORTB_PCR1                     (PORTB->PCR[1])
#define PORTB_PCR2                     (PORTB->PCR[2])
#define PORTB_PCR3                     (PORTB->PCR[3])
#define PORTB_PCR4                     (PORTB->PCR[4])
#define PORTB_PCR5                     (PORTB->PCR[5])
#define PORTB_PCR6                     (PORTB->PCR[6])
#define PORTB_PCR7                     (PORTB->PCR[7])
#define PORTB_PCR8                     (PORTB->PCR[8])
#define PORTB_PCR9                     (PORTB->PCR[9])
#define PORTB_PCR10                    (PORTB->PCR[10])
#define PORTB_PCR11                    (PORTB->PCR[11])
#define PORTB_PCR12                    (PORTB->PCR[12])
#define PORTB_PCR13                    (PORTB->PCR[13])
#define PORTB_PCR14                    (PORTB->PCR[14])
#define PORTB_PCR15                    (PORTB->PCR[15])
#define PORTB_PCR16                    (PORTB->PCR[16])
#define PORTB_PCR17                    (PORTB->PCR[17])
#define PORTB_PCR18                    (PORTB->PCR[18])
#define PORTB_PCR19                    (PORTB->PCR[19])
#define PORTB_PCR20                    (PORTB->PCR[20])
#define PORTB_PCR21                    (PORTB->PCR[21])
#define PORTB_PCR22                    (PORTB->PCR[22])
#define PORTB_PCR23                    (PORTB->PCR[23])
#define PORTB_PCR24                    (PORTB->PCR[24])
#define PORTB_PCR25                    (PORTB->PCR[25])
#define PORTB_PCR26                    (PORTB->PCR[26])
#define PORTB_PCR27                    (PORTB->PCR[27])
#define PORTB_PCR28                    (PORTB->PCR[28])
#define PORTB_PCR29                    (PORTB->PCR[29])
#define PORTB_PCR30                    (PORTB->PCR[30])
#define PORTB_PCR31                    (PORTB->PCR[31])
#define PORTB_GPCLR                    (PORTB->GPCLR)
#define PORTB_GPCHR                    (PORTB->GPCHR)
#define PORTB_ISFR                     (PORTB->ISFR)

/* ================================================================================ */
/* ================           PORTC (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts (PORTC)
 */
typedef PORTA_Type PORTC_Type;  /*!< PORTC Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTC' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTC_PCR0                     (PORTC->PCR[0])
#define PORTC_PCR1                     (PORTC->PCR[1])
#define PORTC_PCR2                     (PORTC->PCR[2])
#define PORTC_PCR3                     (PORTC->PCR[3])
#define PORTC_PCR4                     (PORTC->PCR[4])
#define PORTC_PCR5                     (PORTC->PCR[5])
#define PORTC_PCR6                     (PORTC->PCR[6])
#define PORTC_PCR7                     (PORTC->PCR[7])
#define PORTC_PCR8                     (PORTC->PCR[8])
#define PORTC_PCR9                     (PORTC->PCR[9])
#define PORTC_PCR10                    (PORTC->PCR[10])
#define PORTC_PCR11                    (PORTC->PCR[11])
#define PORTC_PCR12                    (PORTC->PCR[12])
#define PORTC_PCR13                    (PORTC->PCR[13])
#define PORTC_PCR14                    (PORTC->PCR[14])
#define PORTC_PCR15                    (PORTC->PCR[15])
#define PORTC_PCR16                    (PORTC->PCR[16])
#define PORTC_PCR17                    (PORTC->PCR[17])
#define PORTC_PCR18                    (PORTC->PCR[18])
#define PORTC_PCR19                    (PORTC->PCR[19])
#define PORTC_PCR20                    (PORTC->PCR[20])
#define PORTC_PCR21                    (PORTC->PCR[21])
#define PORTC_PCR22                    (PORTC->PCR[22])
#define PORTC_PCR23                    (PORTC->PCR[23])
#define PORTC_PCR24                    (PORTC->PCR[24])
#define PORTC_PCR25                    (PORTC->PCR[25])
#define PORTC_PCR26                    (PORTC->PCR[26])
#define PORTC_PCR27                    (PORTC->PCR[27])
#define PORTC_PCR28                    (PORTC->PCR[28])
#define PORTC_PCR29                    (PORTC->PCR[29])
#define PORTC_PCR30                    (PORTC->PCR[30])
#define PORTC_PCR31                    (PORTC->PCR[31])
#define PORTC_GPCLR                    (PORTC->GPCLR)
#define PORTC_GPCHR                    (PORTC->GPCHR)
#define PORTC_ISFR                     (PORTC->ISFR)

/* ================================================================================ */
/* ================           PORTD (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts (PORTD)
 */
typedef PORTA_Type PORTD_Type;  /*!< PORTD Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTD' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTD_PCR0                     (PORTD->PCR[0])
#define PORTD_PCR1                     (PORTD->PCR[1])
#define PORTD_PCR2                     (PORTD->PCR[2])
#define PORTD_PCR3                     (PORTD->PCR[3])
#define PORTD_PCR4                     (PORTD->PCR[4])
#define PORTD_PCR5                     (PORTD->PCR[5])
#define PORTD_PCR6                     (PORTD->PCR[6])
#define PORTD_PCR7                     (PORTD->PCR[7])
#define PORTD_PCR8                     (PORTD->PCR[8])
#define PORTD_PCR9                     (PORTD->PCR[9])
#define PORTD_PCR10                    (PORTD->PCR[10])
#define PORTD_PCR11                    (PORTD->PCR[11])
#define PORTD_PCR12                    (PORTD->PCR[12])
#define PORTD_PCR13                    (PORTD->PCR[13])
#define PORTD_PCR14                    (PORTD->PCR[14])
#define PORTD_PCR15                    (PORTD->PCR[15])
#define PORTD_PCR16                    (PORTD->PCR[16])
#define PORTD_PCR17                    (PORTD->PCR[17])
#define PORTD_PCR18                    (PORTD->PCR[18])
#define PORTD_PCR19                    (PORTD->PCR[19])
#define PORTD_PCR20                    (PORTD->PCR[20])
#define PORTD_PCR21                    (PORTD->PCR[21])
#define PORTD_PCR22                    (PORTD->PCR[22])
#define PORTD_PCR23                    (PORTD->PCR[23])
#define PORTD_PCR24                    (PORTD->PCR[24])
#define PORTD_PCR25                    (PORTD->PCR[25])
#define PORTD_PCR26                    (PORTD->PCR[26])
#define PORTD_PCR27                    (PORTD->PCR[27])
#define PORTD_PCR28                    (PORTD->PCR[28])
#define PORTD_PCR29                    (PORTD->PCR[29])
#define PORTD_PCR30                    (PORTD->PCR[30])
#define PORTD_PCR31                    (PORTD->PCR[31])
#define PORTD_GPCLR                    (PORTD->GPCLR)
#define PORTD_GPCHR                    (PORTD->GPCHR)
#define PORTD_ISFR                     (PORTD->ISFR)

/* ================================================================================ */
/* ================           PORTE (derived from PORTA)           ================ */
/* ================================================================================ */

/**
 * @brief Pin Control and Interrupts (PORTE)
 */
typedef PORTA_Type PORTE_Type;  /*!< PORTE Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'PORTE' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define PORTE_PCR0                     (PORTE->PCR[0])
#define PORTE_PCR1                     (PORTE->PCR[1])
#define PORTE_PCR2                     (PORTE->PCR[2])
#define PORTE_PCR3                     (PORTE->PCR[3])
#define PORTE_PCR4                     (PORTE->PCR[4])
#define PORTE_PCR5                     (PORTE->PCR[5])
#define PORTE_PCR6                     (PORTE->PCR[6])
#define PORTE_PCR7                     (PORTE->PCR[7])
#define PORTE_PCR8                     (PORTE->PCR[8])
#define PORTE_PCR9                     (PORTE->PCR[9])
#define PORTE_PCR10                    (PORTE->PCR[10])
#define PORTE_PCR11                    (PORTE->PCR[11])
#define PORTE_PCR12                    (PORTE->PCR[12])
#define PORTE_PCR13                    (PORTE->PCR[13])
#define PORTE_PCR14                    (PORTE->PCR[14])
#define PORTE_PCR15                    (PORTE->PCR[15])
#define PORTE_PCR16                    (PORTE->PCR[16])
#define PORTE_PCR17                    (PORTE->PCR[17])
#define PORTE_PCR18                    (PORTE->PCR[18])
#define PORTE_PCR19                    (PORTE->PCR[19])
#define PORTE_PCR20                    (PORTE->PCR[20])
#define PORTE_PCR21                    (PORTE->PCR[21])
#define PORTE_PCR22                    (PORTE->PCR[22])
#define PORTE_PCR23                    (PORTE->PCR[23])
#define PORTE_PCR24                    (PORTE->PCR[24])
#define PORTE_PCR25                    (PORTE->PCR[25])
#define PORTE_PCR26                    (PORTE->PCR[26])
#define PORTE_PCR27                    (PORTE->PCR[27])
#define PORTE_PCR28                    (PORTE->PCR[28])
#define PORTE_PCR29                    (PORTE->PCR[29])
#define PORTE_PCR30                    (PORTE->PCR[30])
#define PORTE_PCR31                    (PORTE->PCR[31])
#define PORTE_GPCLR                    (PORTE->GPCLR)
#define PORTE_GPCHR                    (PORTE->GPCHR)
#define PORTE_ISFR                     (PORTE->ISFR)

/* ================================================================================ */
/* ================           RCM (file:RCM_5)                     ================ */
/* ================================================================================ */

/**
 * @brief Reset Control Module (RCM)
 */
typedef struct {                                /*!<       RCM Structure                                                */
   __I  uint8_t   SRS0;                         /*!< 0000: System Reset Status Register 0                               */
   __I  uint8_t   SRS1;                         /*!< 0001: System Reset Status Register 1                               */
   __I  uint16_t  RESERVED0;                    /*!< 0002:                                                              */
   __IO uint8_t   RPFC;                         /*!< 0004: Reset Pin Filter Control Register                            */
   __IO uint8_t   RPFW;                         /*!< 0005: Reset Pin Filter Width register                              */
} RCM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- RCM_SRS0                                 ------ */
#define RCM_SRS0_WAKEUP_MASK                     (0x01UL << RCM_SRS0_WAKEUP_SHIFT)                   /*!< RCM_SRS0: WAKEUP Mask                   */
#define RCM_SRS0_WAKEUP_SHIFT                    0                                                   /*!< RCM_SRS0: WAKEUP Position               */
#define RCM_SRS0_LVD_MASK                        (0x01UL << RCM_SRS0_LVD_SHIFT)                      /*!< RCM_SRS0: LVD Mask                      */
#define RCM_SRS0_LVD_SHIFT                       1                                                   /*!< RCM_SRS0: LVD Position                  */
#define RCM_SRS0_LOC_MASK                        (0x01UL << RCM_SRS0_LOC_SHIFT)                      /*!< RCM_SRS0: LOC Mask                      */
#define RCM_SRS0_LOC_SHIFT                       2                                                   /*!< RCM_SRS0: LOC Position                  */
#define RCM_SRS0_LOL_MASK                        (0x01UL << RCM_SRS0_LOL_SHIFT)                      /*!< RCM_SRS0: LOL Mask                      */
#define RCM_SRS0_LOL_SHIFT                       3                                                   /*!< RCM_SRS0: LOL Position                  */
#define RCM_SRS0_WDOG_MASK                       (0x01UL << RCM_SRS0_WDOG_SHIFT)                     /*!< RCM_SRS0: WDOG Mask                     */
#define RCM_SRS0_WDOG_SHIFT                      5                                                   /*!< RCM_SRS0: WDOG Position                 */
#define RCM_SRS0_PIN_MASK                        (0x01UL << RCM_SRS0_PIN_SHIFT)                      /*!< RCM_SRS0: PIN Mask                      */
#define RCM_SRS0_PIN_SHIFT                       6                                                   /*!< RCM_SRS0: PIN Position                  */
#define RCM_SRS0_POR_MASK                        (0x01UL << RCM_SRS0_POR_SHIFT)                      /*!< RCM_SRS0: POR Mask                      */
#define RCM_SRS0_POR_SHIFT                       7                                                   /*!< RCM_SRS0: POR Position                  */

/* ------- RCM_SRS1                                 ------ */
#define RCM_SRS1_LOCKUP_MASK                     (0x01UL << RCM_SRS1_LOCKUP_SHIFT)                   /*!< RCM_SRS1: LOCKUP Mask                   */
#define RCM_SRS1_LOCKUP_SHIFT                    1                                                   /*!< RCM_SRS1: LOCKUP Position               */
#define RCM_SRS1_SW_MASK                         (0x01UL << RCM_SRS1_SW_SHIFT)                       /*!< RCM_SRS1: SW Mask                       */
#define RCM_SRS1_SW_SHIFT                        2                                                   /*!< RCM_SRS1: SW Position                   */
#define RCM_SRS1_MDM_AP_MASK                     (0x01UL << RCM_SRS1_MDM_AP_SHIFT)                   /*!< RCM_SRS1: MDM_AP Mask                   */
#define RCM_SRS1_MDM_AP_SHIFT                    3                                                   /*!< RCM_SRS1: MDM_AP Position               */
#define RCM_SRS1_SACKERR_MASK                    (0x01UL << RCM_SRS1_SACKERR_SHIFT)                  /*!< RCM_SRS1: SACKERR Mask                  */
#define RCM_SRS1_SACKERR_SHIFT                   5                                                   /*!< RCM_SRS1: SACKERR Position              */

/* ------- RCM_RPFC                                 ------ */
#define RCM_RPFC_RSTFLTSRW_MASK                  (0x03UL << RCM_RPFC_RSTFLTSRW_SHIFT)                /*!< RCM_RPFC: RSTFLTSRW Mask                */
#define RCM_RPFC_RSTFLTSRW_SHIFT                 0                                                   /*!< RCM_RPFC: RSTFLTSRW Position            */
#define RCM_RPFC_RSTFLTSRW(x)                    (((x)<<RCM_RPFC_RSTFLTSRW_SHIFT)&RCM_RPFC_RSTFLTSRW_MASK) /*!< RCM_RPFC                                */
#define RCM_RPFC_RSTFLTSS_MASK                   (0x01UL << RCM_RPFC_RSTFLTSS_SHIFT)                 /*!< RCM_RPFC: RSTFLTSS Mask                 */
#define RCM_RPFC_RSTFLTSS_SHIFT                  2                                                   /*!< RCM_RPFC: RSTFLTSS Position             */

/* ------- RCM_RPFW                                 ------ */
#define RCM_RPFW_RSTFLTSEL_MASK                  (0x1FUL << RCM_RPFW_RSTFLTSEL_SHIFT)                /*!< RCM_RPFW: RSTFLTSEL Mask                */
#define RCM_RPFW_RSTFLTSEL_SHIFT                 0                                                   /*!< RCM_RPFW: RSTFLTSEL Position            */
#define RCM_RPFW_RSTFLTSEL(x)                    (((x)<<RCM_RPFW_RSTFLTSEL_SHIFT)&RCM_RPFW_RSTFLTSEL_MASK) /*!< RCM_RPFW                                */

/* -------------------------------------------------------------------------------- */
/* -----------     'RCM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define RCM_SRS0                       (RCM->SRS0)
#define RCM_SRS1                       (RCM->SRS1)
#define RCM_RPFC                       (RCM->RPFC)
#define RCM_RPFW                       (RCM->RPFW)

/* ================================================================================ */
/* ================           ROM (file:ROM_0)                     ================ */
/* ================================================================================ */

/**
 * @brief System ROM (ROM)
 */
typedef struct {                                /*!<       ROM Structure                                                */
   __I  uint32_t  ENTRY[3];                     /*!< 0000: Entry                                                        */
   __I  uint32_t  TABLEMARK;                    /*!< 000C: End of Table Marker Register                                 */
   __I  uint32_t  RESERVED0[1007];              /*!< 0010:                                                              */
   __I  uint32_t  SYSACCESS;                    /*!< 0FCC: System Access Register                                       */
   __I  uint32_t  PERIPHID4;                    /*!< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /*!< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /*!< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /*!< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /*!< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /*!< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /*!< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /*!< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /*!< 0FF0: Component ID Register                                        */
} ROM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'ROM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- ROM_ENTRY                                ------ */
#define ROM_ENTRY_ENTRY_MASK                     (0xFFFFFFFFUL << ROM_ENTRY_ENTRY_SHIFT)             /*!< ROM_ENTRY: ENTRY Mask                   */
#define ROM_ENTRY_ENTRY_SHIFT                    0                                                   /*!< ROM_ENTRY: ENTRY Position               */
#define ROM_ENTRY_ENTRY(x)                       (((x)<<ROM_ENTRY_ENTRY_SHIFT)&ROM_ENTRY_ENTRY_MASK) /*!< ROM_ENTRY                               */

/* ------- ROM_TABLEMARK                            ------ */
#define ROM_TABLEMARK_MARK_MASK                  (0xFFFFFFFFUL << ROM_TABLEMARK_MARK_SHIFT)          /*!< ROM_TABLEMARK: MARK Mask                */
#define ROM_TABLEMARK_MARK_SHIFT                 0                                                   /*!< ROM_TABLEMARK: MARK Position            */
#define ROM_TABLEMARK_MARK(x)                    (((x)<<ROM_TABLEMARK_MARK_SHIFT)&ROM_TABLEMARK_MARK_MASK) /*!< ROM_TABLEMARK                           */

/* ------- ROM_SYSACCESS                            ------ */
#define ROM_SYSACCESS_SYSACCESS_MASK             (0xFFFFFFFFUL << ROM_SYSACCESS_SYSACCESS_SHIFT)     /*!< ROM_SYSACCESS: SYSACCESS Mask           */
#define ROM_SYSACCESS_SYSACCESS_SHIFT            0                                                   /*!< ROM_SYSACCESS: SYSACCESS Position       */
#define ROM_SYSACCESS_SYSACCESS(x)               (((x)<<ROM_SYSACCESS_SYSACCESS_SHIFT)&ROM_SYSACCESS_SYSACCESS_MASK) /*!< ROM_SYSACCESS                           */

/* ------- ROM_PERIPHID                             ------ */
#define ROM_PERIPHID_PERIPHID_MASK               (0xFFFFFFFFUL << ROM_PERIPHID_PERIPHID_SHIFT)       /*!< ROM_PERIPHID: PERIPHID Mask             */
#define ROM_PERIPHID_PERIPHID_SHIFT              0                                                   /*!< ROM_PERIPHID: PERIPHID Position         */
#define ROM_PERIPHID_PERIPHID(x)                 (((x)<<ROM_PERIPHID_PERIPHID_SHIFT)&ROM_PERIPHID_PERIPHID_MASK) /*!< ROM_PERIPHID                            */

/* ------- ROM_COMPID                               ------ */
#define ROM_COMPID_COMPID_MASK                   (0xFFFFFFFFUL << ROM_COMPID_COMPID_SHIFT)           /*!< ROM_COMPID: COMPID Mask                 */
#define ROM_COMPID_COMPID_SHIFT                  0                                                   /*!< ROM_COMPID: COMPID Position             */
#define ROM_COMPID_COMPID(x)                     (((x)<<ROM_COMPID_COMPID_SHIFT)&ROM_COMPID_COMPID_MASK) /*!< ROM_COMPID                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'ROM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define ROM_ENTRY0                     (ROM->ENTRY[0])
#define ROM_ENTRY1                     (ROM->ENTRY[1])
#define ROM_ENTRY2                     (ROM->ENTRY[2])
#define ROM_TABLEMARK                  (ROM->TABLEMARK)
#define ROM_SYSACCESS                  (ROM->SYSACCESS)
#define ROM_PERIPHID4                  (ROM->PERIPHID4)
#define ROM_PERIPHID5                  (ROM->PERIPHID5)
#define ROM_PERIPHID6                  (ROM->PERIPHID6)
#define ROM_PERIPHID7                  (ROM->PERIPHID7)
#define ROM_PERIPHID0                  (ROM->PERIPHID0)
#define ROM_PERIPHID1                  (ROM->PERIPHID1)
#define ROM_PERIPHID2                  (ROM->PERIPHID2)
#define ROM_PERIPHID3                  (ROM->PERIPHID3)
#define ROM_COMPID0                    (ROM->COMPID[0])
#define ROM_COMPID1                    (ROM->COMPID[1])
#define ROM_COMPID2                    (ROM->COMPID[2])
#define ROM_COMPID3                    (ROM->COMPID[3])

/* ================================================================================ */
/* ================           RTC (file:RTC)                       ================ */
/* ================================================================================ */

/**
 * @brief Secure Real Time Clock (RTC)
 */
typedef struct {                                /*!<       RTC Structure                                                */
   __IO uint32_t  TSR;                          /*!< 0000: RTC Time Seconds Register                                    */
   __IO uint32_t  TPR;                          /*!< 0004: RTC Time Prescaler Register                                  */
   __IO uint32_t  TAR;                          /*!< 0008: RTC Time Alarm Register                                      */
   __IO uint32_t  TCR;                          /*!< 000C: RTC Time Compensation Register                               */
   __IO uint32_t  CR;                           /*!< 0010: RTC Control Register                                         */
   __IO uint32_t  SR;                           /*!< 0014: RTC Status Register                                          */
   __IO uint32_t  LR;                           /*!< 0018: RTC Lock Register                                            */
   __IO uint32_t  IER;                          /*!< 001C: RTC Interrupt Enable Register                                */
} RTC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'RTC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- RTC_TSR                                  ------ */
#define RTC_TSR_TSR_MASK                         (0xFFFFFFFFUL << RTC_TSR_TSR_SHIFT)                 /*!< RTC_TSR: TSR Mask                       */
#define RTC_TSR_TSR_SHIFT                        0                                                   /*!< RTC_TSR: TSR Position                   */
#define RTC_TSR_TSR(x)                           (((x)<<RTC_TSR_TSR_SHIFT)&RTC_TSR_TSR_MASK)         /*!< RTC_TSR                                 */

/* ------- RTC_TPR                                  ------ */
#define RTC_TPR_TPR_MASK                         (0xFFFFUL << RTC_TPR_TPR_SHIFT)                     /*!< RTC_TPR: TPR Mask                       */
#define RTC_TPR_TPR_SHIFT                        0                                                   /*!< RTC_TPR: TPR Position                   */
#define RTC_TPR_TPR(x)                           (((x)<<RTC_TPR_TPR_SHIFT)&RTC_TPR_TPR_MASK)         /*!< RTC_TPR                                 */

/* ------- RTC_TAR                                  ------ */
#define RTC_TAR_TAR_MASK                         (0xFFFFFFFFUL << RTC_TAR_TAR_SHIFT)                 /*!< RTC_TAR: TAR Mask                       */
#define RTC_TAR_TAR_SHIFT                        0                                                   /*!< RTC_TAR: TAR Position                   */
#define RTC_TAR_TAR(x)                           (((x)<<RTC_TAR_TAR_SHIFT)&RTC_TAR_TAR_MASK)         /*!< RTC_TAR                                 */

/* ------- RTC_TCR                                  ------ */
#define RTC_TCR_TCR_MASK                         (0xFFUL << RTC_TCR_TCR_SHIFT)                       /*!< RTC_TCR: TCR Mask                       */
#define RTC_TCR_TCR_SHIFT                        0                                                   /*!< RTC_TCR: TCR Position                   */
#define RTC_TCR_TCR(x)                           (((x)<<RTC_TCR_TCR_SHIFT)&RTC_TCR_TCR_MASK)         /*!< RTC_TCR                                 */
#define RTC_TCR_CIR_MASK                         (0xFFUL << RTC_TCR_CIR_SHIFT)                       /*!< RTC_TCR: CIR Mask                       */
#define RTC_TCR_CIR_SHIFT                        8                                                   /*!< RTC_TCR: CIR Position                   */
#define RTC_TCR_CIR(x)                           (((x)<<RTC_TCR_CIR_SHIFT)&RTC_TCR_CIR_MASK)         /*!< RTC_TCR                                 */
#define RTC_TCR_TCV_MASK                         (0xFFUL << RTC_TCR_TCV_SHIFT)                       /*!< RTC_TCR: TCV Mask                       */
#define RTC_TCR_TCV_SHIFT                        16                                                  /*!< RTC_TCR: TCV Position                   */
#define RTC_TCR_TCV(x)                           (((x)<<RTC_TCR_TCV_SHIFT)&RTC_TCR_TCV_MASK)         /*!< RTC_TCR                                 */
#define RTC_TCR_CIC_MASK                         (0xFFUL << RTC_TCR_CIC_SHIFT)                       /*!< RTC_TCR: CIC Mask                       */
#define RTC_TCR_CIC_SHIFT                        24                                                  /*!< RTC_TCR: CIC Position                   */
#define RTC_TCR_CIC(x)                           (((x)<<RTC_TCR_CIC_SHIFT)&RTC_TCR_CIC_MASK)         /*!< RTC_TCR                                 */

/* ------- RTC_CR                                   ------ */
#define RTC_CR_SWR_MASK                          (0x01UL << RTC_CR_SWR_SHIFT)                        /*!< RTC_CR: SWR Mask                        */
#define RTC_CR_SWR_SHIFT                         0                                                   /*!< RTC_CR: SWR Position                    */
#define RTC_CR_WPE_MASK                          (0x01UL << RTC_CR_WPE_SHIFT)                        /*!< RTC_CR: WPE Mask                        */
#define RTC_CR_WPE_SHIFT                         1                                                   /*!< RTC_CR: WPE Position                    */
#define RTC_CR_SUP_MASK                          (0x01UL << RTC_CR_SUP_SHIFT)                        /*!< RTC_CR: SUP Mask                        */
#define RTC_CR_SUP_SHIFT                         2                                                   /*!< RTC_CR: SUP Position                    */
#define RTC_CR_UM_MASK                           (0x01UL << RTC_CR_UM_SHIFT)                         /*!< RTC_CR: UM Mask                         */
#define RTC_CR_UM_SHIFT                          3                                                   /*!< RTC_CR: UM Position                     */
#define RTC_CR_OSCE_MASK                         (0x01UL << RTC_CR_OSCE_SHIFT)                       /*!< RTC_CR: OSCE Mask                       */
#define RTC_CR_OSCE_SHIFT                        8                                                   /*!< RTC_CR: OSCE Position                   */
#define RTC_CR_CLKO_MASK                         (0x01UL << RTC_CR_CLKO_SHIFT)                       /*!< RTC_CR: CLKO Mask                       */
#define RTC_CR_CLKO_SHIFT                        9                                                   /*!< RTC_CR: CLKO Position                   */
#define RTC_CR_SC16P_MASK                        (0x01UL << RTC_CR_SC16P_SHIFT)                      /*!< RTC_CR: SC16P Mask                      */
#define RTC_CR_SC16P_SHIFT                       10                                                  /*!< RTC_CR: SC16P Position                  */
#define RTC_CR_SC8P_MASK                         (0x01UL << RTC_CR_SC8P_SHIFT)                       /*!< RTC_CR: SC8P Mask                       */
#define RTC_CR_SC8P_SHIFT                        11                                                  /*!< RTC_CR: SC8P Position                   */
#define RTC_CR_SC4P_MASK                         (0x01UL << RTC_CR_SC4P_SHIFT)                       /*!< RTC_CR: SC4P Mask                       */
#define RTC_CR_SC4P_SHIFT                        12                                                  /*!< RTC_CR: SC4P Position                   */
#define RTC_CR_SC2P_MASK                         (0x01UL << RTC_CR_SC2P_SHIFT)                       /*!< RTC_CR: SC2P Mask                       */
#define RTC_CR_SC2P_SHIFT                        13                                                  /*!< RTC_CR: SC2P Position                   */

/* ------- RTC_SR                                   ------ */
#define RTC_SR_TIF_MASK                          (0x01UL << RTC_SR_TIF_SHIFT)                        /*!< RTC_SR: TIF Mask                        */
#define RTC_SR_TIF_SHIFT                         0                                                   /*!< RTC_SR: TIF Position                    */
#define RTC_SR_TOF_MASK                          (0x01UL << RTC_SR_TOF_SHIFT)                        /*!< RTC_SR: TOF Mask                        */
#define RTC_SR_TOF_SHIFT                         1                                                   /*!< RTC_SR: TOF Position                    */
#define RTC_SR_TAF_MASK                          (0x01UL << RTC_SR_TAF_SHIFT)                        /*!< RTC_SR: TAF Mask                        */
#define RTC_SR_TAF_SHIFT                         2                                                   /*!< RTC_SR: TAF Position                    */
#define RTC_SR_TCE_MASK                          (0x01UL << RTC_SR_TCE_SHIFT)                        /*!< RTC_SR: TCE Mask                        */
#define RTC_SR_TCE_SHIFT                         4                                                   /*!< RTC_SR: TCE Position                    */

/* ------- RTC_LR                                   ------ */
#define RTC_LR_TCL_MASK                          (0x01UL << RTC_LR_TCL_SHIFT)                        /*!< RTC_LR: TCL Mask                        */
#define RTC_LR_TCL_SHIFT                         3                                                   /*!< RTC_LR: TCL Position                    */
#define RTC_LR_CRL_MASK                          (0x01UL << RTC_LR_CRL_SHIFT)                        /*!< RTC_LR: CRL Mask                        */
#define RTC_LR_CRL_SHIFT                         4                                                   /*!< RTC_LR: CRL Position                    */
#define RTC_LR_SRL_MASK                          (0x01UL << RTC_LR_SRL_SHIFT)                        /*!< RTC_LR: SRL Mask                        */
#define RTC_LR_SRL_SHIFT                         5                                                   /*!< RTC_LR: SRL Position                    */
#define RTC_LR_LRL_MASK                          (0x01UL << RTC_LR_LRL_SHIFT)                        /*!< RTC_LR: LRL Mask                        */
#define RTC_LR_LRL_SHIFT                         6                                                   /*!< RTC_LR: LRL Position                    */

/* ------- RTC_IER                                  ------ */
#define RTC_IER_TIIE_MASK                        (0x01UL << RTC_IER_TIIE_SHIFT)                      /*!< RTC_IER: TIIE Mask                      */
#define RTC_IER_TIIE_SHIFT                       0                                                   /*!< RTC_IER: TIIE Position                  */
#define RTC_IER_TOIE_MASK                        (0x01UL << RTC_IER_TOIE_SHIFT)                      /*!< RTC_IER: TOIE Mask                      */
#define RTC_IER_TOIE_SHIFT                       1                                                   /*!< RTC_IER: TOIE Position                  */
#define RTC_IER_TAIE_MASK                        (0x01UL << RTC_IER_TAIE_SHIFT)                      /*!< RTC_IER: TAIE Mask                      */
#define RTC_IER_TAIE_SHIFT                       2                                                   /*!< RTC_IER: TAIE Position                  */
#define RTC_IER_TSIE_MASK                        (0x01UL << RTC_IER_TSIE_SHIFT)                      /*!< RTC_IER: TSIE Mask                      */
#define RTC_IER_TSIE_SHIFT                       4                                                   /*!< RTC_IER: TSIE Position                  */
#define RTC_IER_WPON_MASK                        (0x01UL << RTC_IER_WPON_SHIFT)                      /*!< RTC_IER: WPON Mask                      */
#define RTC_IER_WPON_SHIFT                       7                                                   /*!< RTC_IER: WPON Position                  */

/* -------------------------------------------------------------------------------- */
/* -----------     'RTC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define RTC_TSR                        (RTC->TSR)
#define RTC_TPR                        (RTC->TPR)
#define RTC_TAR                        (RTC->TAR)
#define RTC_TCR                        (RTC->TCR)
#define RTC_CR                         (RTC->CR)
#define RTC_SR                         (RTC->SR)
#define RTC_LR                         (RTC->LR)
#define RTC_IER                        (RTC->IER)

/* ================================================================================ */
/* ================           SIM (file:SIM_MKL26Z4)               ================ */
/* ================================================================================ */

/**
 * @brief System Integration Module (SIM)
 */
typedef struct {                                /*!<       SIM Structure                                                */
   __IO uint32_t  SOPT1;                        /*!< 0000: System Options Register 1                                    */
   __IO uint32_t  SOPT1CFG;                     /*!< 0004: SOPT1 Configuration Register                                 */
   __I  uint32_t  RESERVED0[1023];              /*!< 0008:                                                              */
   __IO uint32_t  SOPT2;                        /*!< 1004: System Options Register 2                                    */
   __I  uint32_t  RESERVED1;                    /*!< 1008:                                                              */
   __IO uint32_t  SOPT4;                        /*!< 100C: System Options Register 4                                    */
   __IO uint32_t  SOPT5;                        /*!< 1010: System Options Register 5                                    */
   __I  uint32_t  RESERVED2;                    /*!< 1014:                                                              */
   __IO uint32_t  SOPT7;                        /*!< 1018: System Options Register 7                                    */
   __I  uint32_t  RESERVED3[2];                 /*!< 101C:                                                              */
   __I  uint32_t  SDID;                         /*!< 1024: System Device Identification Register                        */
   __I  uint32_t  RESERVED4[3];                 /*!< 1028:                                                              */
   __IO uint32_t  SCGC4;                        /*!< 1034: System Clock Gating Control Register 4                       */
   __IO uint32_t  SCGC5;                        /*!< 1038: System Clock Gating Control Register 5                       */
   __IO uint32_t  SCGC6;                        /*!< 103C: System Clock Gating Control Register 6                       */
   __IO uint32_t  SCGC7;                        /*!< 1040: System Clock Gating Control Register 7                       */
   __IO uint32_t  CLKDIV1;                      /*!< 1044: System Clock Divider Register 1                              */
   __I  uint32_t  RESERVED5;                    /*!< 1048:                                                              */
   __IO uint32_t  FCFG1;                        /*!< 104C: Flash Configuration Register 1                               */
   __I  uint32_t  FCFG2;                        /*!< 1050: Flash Configuration Register 2                               */
   __I  uint32_t  RESERVED6;                    /*!< 1054:                                                              */
   __I  uint32_t  UIDMH;                        /*!< 1058: Unique Identification Register Mid-High                      */
   __I  uint32_t  UIDML;                        /*!< 105C: Unique Identification Register Mid Low                       */
   __I  uint32_t  UIDL;                         /*!< 1060: Unique Identification Register Low                           */
   __I  uint32_t  RESERVED7[39];                /*!< 1064:                                                              */
   __IO uint32_t  COPC;                         /*!< 1100: COP Control Register                                         */
   __O  uint32_t  SRVCOP;                       /*!< 1104: Service COP Register                                         */
} SIM_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- SIM_SOPT1                                ------ */
#define SIM_SOPT1_OSC32KSEL_MASK                 (0x03UL << SIM_SOPT1_OSC32KSEL_SHIFT)               /*!< SIM_SOPT1: OSC32KSEL Mask               */
#define SIM_SOPT1_OSC32KSEL_SHIFT                18                                                  /*!< SIM_SOPT1: OSC32KSEL Position           */
#define SIM_SOPT1_OSC32KSEL(x)                   (((x)<<SIM_SOPT1_OSC32KSEL_SHIFT)&SIM_SOPT1_OSC32KSEL_MASK) /*!< SIM_SOPT1                               */
#define SIM_SOPT1_USBVSTBY_MASK                  (0x01UL << SIM_SOPT1_USBVSTBY_SHIFT)                /*!< SIM_SOPT1: USBVSTBY Mask                */
#define SIM_SOPT1_USBVSTBY_SHIFT                 29                                                  /*!< SIM_SOPT1: USBVSTBY Position            */
#define SIM_SOPT1_USBSSTBY_MASK                  (0x01UL << SIM_SOPT1_USBSSTBY_SHIFT)                /*!< SIM_SOPT1: USBSSTBY Mask                */
#define SIM_SOPT1_USBSSTBY_SHIFT                 30                                                  /*!< SIM_SOPT1: USBSSTBY Position            */
#define SIM_SOPT1_USBREGEN_MASK                  (0x01UL << SIM_SOPT1_USBREGEN_SHIFT)                /*!< SIM_SOPT1: USBREGEN Mask                */
#define SIM_SOPT1_USBREGEN_SHIFT                 31                                                  /*!< SIM_SOPT1: USBREGEN Position            */

/* ------- SIM_SOPT1CFG                             ------ */
#define SIM_SOPT1CFG_URWE_MASK                   (0x01UL << SIM_SOPT1CFG_URWE_SHIFT)                 /*!< SIM_SOPT1CFG: URWE Mask                 */
#define SIM_SOPT1CFG_URWE_SHIFT                  24                                                  /*!< SIM_SOPT1CFG: URWE Position             */
#define SIM_SOPT1CFG_UVSWE_MASK                  (0x01UL << SIM_SOPT1CFG_UVSWE_SHIFT)                /*!< SIM_SOPT1CFG: UVSWE Mask                */
#define SIM_SOPT1CFG_UVSWE_SHIFT                 25                                                  /*!< SIM_SOPT1CFG: UVSWE Position            */
#define SIM_SOPT1CFG_USSWE_MASK                  (0x01UL << SIM_SOPT1CFG_USSWE_SHIFT)                /*!< SIM_SOPT1CFG: USSWE Mask                */
#define SIM_SOPT1CFG_USSWE_SHIFT                 26                                                  /*!< SIM_SOPT1CFG: USSWE Position            */

/* ------- SIM_SOPT2                                ------ */
#define SIM_SOPT2_RTCCLKOUTSEL_MASK              (0x01UL << SIM_SOPT2_RTCCLKOUTSEL_SHIFT)            /*!< SIM_SOPT2: RTCCLKOUTSEL Mask            */
#define SIM_SOPT2_RTCCLKOUTSEL_SHIFT             4                                                   /*!< SIM_SOPT2: RTCCLKOUTSEL Position        */
#define SIM_SOPT2_CLKOUTSEL_MASK                 (0x07UL << SIM_SOPT2_CLKOUTSEL_SHIFT)               /*!< SIM_SOPT2: CLKOUTSEL Mask               */
#define SIM_SOPT2_CLKOUTSEL_SHIFT                5                                                   /*!< SIM_SOPT2: CLKOUTSEL Position           */
#define SIM_SOPT2_CLKOUTSEL(x)                   (((x)<<SIM_SOPT2_CLKOUTSEL_SHIFT)&SIM_SOPT2_CLKOUTSEL_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_PLLFLLSEL_MASK                 (0x01UL << SIM_SOPT2_PLLFLLSEL_SHIFT)               /*!< SIM_SOPT2: PLLFLLSEL Mask               */
#define SIM_SOPT2_PLLFLLSEL_SHIFT                16                                                  /*!< SIM_SOPT2: PLLFLLSEL Position           */
#define SIM_SOPT2_USBSRC_MASK                    (0x01UL << SIM_SOPT2_USBSRC_SHIFT)                  /*!< SIM_SOPT2: USBSRC Mask                  */
#define SIM_SOPT2_USBSRC_SHIFT                   18                                                  /*!< SIM_SOPT2: USBSRC Position              */
#define SIM_SOPT2_TPMSRC_MASK                    (0x03UL << SIM_SOPT2_TPMSRC_SHIFT)                  /*!< SIM_SOPT2: TPMSRC Mask                  */
#define SIM_SOPT2_TPMSRC_SHIFT                   24                                                  /*!< SIM_SOPT2: TPMSRC Position              */
#define SIM_SOPT2_TPMSRC(x)                      (((x)<<SIM_SOPT2_TPMSRC_SHIFT)&SIM_SOPT2_TPMSRC_MASK) /*!< SIM_SOPT2                               */
#define SIM_SOPT2_UART0SRC_MASK                  (0x03UL << SIM_SOPT2_UART0SRC_SHIFT)                /*!< SIM_SOPT2: UART0SRC Mask                */
#define SIM_SOPT2_UART0SRC_SHIFT                 26                                                  /*!< SIM_SOPT2: UART0SRC Position            */
#define SIM_SOPT2_UART0SRC(x)                    (((x)<<SIM_SOPT2_UART0SRC_SHIFT)&SIM_SOPT2_UART0SRC_MASK) /*!< SIM_SOPT2                               */

/* ------- SIM_SOPT4                                ------ */
#define SIM_SOPT4_TPM1CH0SRC_MASK                (0x03UL << SIM_SOPT4_TPM1CH0SRC_SHIFT)              /*!< SIM_SOPT4: TPM1CH0SRC Mask              */
#define SIM_SOPT4_TPM1CH0SRC_SHIFT               18                                                  /*!< SIM_SOPT4: TPM1CH0SRC Position          */
#define SIM_SOPT4_TPM1CH0SRC(x)                  (((x)<<SIM_SOPT4_TPM1CH0SRC_SHIFT)&SIM_SOPT4_TPM1CH0SRC_MASK) /*!< SIM_SOPT4                               */
#define SIM_SOPT4_TPM2CH0SRC_MASK                (0x01UL << SIM_SOPT4_TPM2CH0SRC_SHIFT)              /*!< SIM_SOPT4: TPM2CH0SRC Mask              */
#define SIM_SOPT4_TPM2CH0SRC_SHIFT               20                                                  /*!< SIM_SOPT4: TPM2CH0SRC Position          */
#define SIM_SOPT4_TPM0CLKSEL_MASK                (0x01UL << SIM_SOPT4_TPM0CLKSEL_SHIFT)              /*!< SIM_SOPT4: TPM0CLKSEL Mask              */
#define SIM_SOPT4_TPM0CLKSEL_SHIFT               24                                                  /*!< SIM_SOPT4: TPM0CLKSEL Position          */
#define SIM_SOPT4_TPM1CLKSEL_MASK                (0x01UL << SIM_SOPT4_TPM1CLKSEL_SHIFT)              /*!< SIM_SOPT4: TPM1CLKSEL Mask              */
#define SIM_SOPT4_TPM1CLKSEL_SHIFT               25                                                  /*!< SIM_SOPT4: TPM1CLKSEL Position          */
#define SIM_SOPT4_TPM2CLKSEL_MASK                (0x01UL << SIM_SOPT4_TPM2CLKSEL_SHIFT)              /*!< SIM_SOPT4: TPM2CLKSEL Mask              */
#define SIM_SOPT4_TPM2CLKSEL_SHIFT               26                                                  /*!< SIM_SOPT4: TPM2CLKSEL Position          */

/* ------- SIM_SOPT5                                ------ */
#define SIM_SOPT5_UART0TXSRC_MASK                (0x03UL << SIM_SOPT5_UART0TXSRC_SHIFT)              /*!< SIM_SOPT5: UART0TXSRC Mask              */
#define SIM_SOPT5_UART0TXSRC_SHIFT               0                                                   /*!< SIM_SOPT5: UART0TXSRC Position          */
#define SIM_SOPT5_UART0TXSRC(x)                  (((x)<<SIM_SOPT5_UART0TXSRC_SHIFT)&SIM_SOPT5_UART0TXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART0RXSRC_MASK                (0x01UL << SIM_SOPT5_UART0RXSRC_SHIFT)              /*!< SIM_SOPT5: UART0RXSRC Mask              */
#define SIM_SOPT5_UART0RXSRC_SHIFT               2                                                   /*!< SIM_SOPT5: UART0RXSRC Position          */
#define SIM_SOPT5_UART1TXSRC_MASK                (0x03UL << SIM_SOPT5_UART1TXSRC_SHIFT)              /*!< SIM_SOPT5: UART1TXSRC Mask              */
#define SIM_SOPT5_UART1TXSRC_SHIFT               4                                                   /*!< SIM_SOPT5: UART1TXSRC Position          */
#define SIM_SOPT5_UART1TXSRC(x)                  (((x)<<SIM_SOPT5_UART1TXSRC_SHIFT)&SIM_SOPT5_UART1TXSRC_MASK) /*!< SIM_SOPT5                               */
#define SIM_SOPT5_UART1RXSRC_MASK                (0x01UL << SIM_SOPT5_UART1RXSRC_SHIFT)              /*!< SIM_SOPT5: UART1RXSRC Mask              */
#define SIM_SOPT5_UART1RXSRC_SHIFT               6                                                   /*!< SIM_SOPT5: UART1RXSRC Position          */
#define SIM_SOPT5_UART0ODE_MASK                  (0x01UL << SIM_SOPT5_UART0ODE_SHIFT)                /*!< SIM_SOPT5: UART0ODE Mask                */
#define SIM_SOPT5_UART0ODE_SHIFT                 16                                                  /*!< SIM_SOPT5: UART0ODE Position            */
#define SIM_SOPT5_UART1ODE_MASK                  (0x01UL << SIM_SOPT5_UART1ODE_SHIFT)                /*!< SIM_SOPT5: UART1ODE Mask                */
#define SIM_SOPT5_UART1ODE_SHIFT                 17                                                  /*!< SIM_SOPT5: UART1ODE Position            */
#define SIM_SOPT5_UART2ODE_MASK                  (0x01UL << SIM_SOPT5_UART2ODE_SHIFT)                /*!< SIM_SOPT5: UART2ODE Mask                */
#define SIM_SOPT5_UART2ODE_SHIFT                 18                                                  /*!< SIM_SOPT5: UART2ODE Position            */

/* ------- SIM_SOPT7                                ------ */
#define SIM_SOPT7_ADC0TRGSEL_MASK                (0x0FUL << SIM_SOPT7_ADC0TRGSEL_SHIFT)              /*!< SIM_SOPT7: ADC0TRGSEL Mask              */
#define SIM_SOPT7_ADC0TRGSEL_SHIFT               0                                                   /*!< SIM_SOPT7: ADC0TRGSEL Position          */
#define SIM_SOPT7_ADC0TRGSEL(x)                  (((x)<<SIM_SOPT7_ADC0TRGSEL_SHIFT)&SIM_SOPT7_ADC0TRGSEL_MASK) /*!< SIM_SOPT7                               */
#define SIM_SOPT7_ADC0PRETRGSEL_MASK             (0x01UL << SIM_SOPT7_ADC0PRETRGSEL_SHIFT)           /*!< SIM_SOPT7: ADC0PRETRGSEL Mask           */
#define SIM_SOPT7_ADC0PRETRGSEL_SHIFT            4                                                   /*!< SIM_SOPT7: ADC0PRETRGSEL Position       */
#define SIM_SOPT7_ADC0ALTTRGEN_MASK              (0x01UL << SIM_SOPT7_ADC0ALTTRGEN_SHIFT)            /*!< SIM_SOPT7: ADC0ALTTRGEN Mask            */
#define SIM_SOPT7_ADC0ALTTRGEN_SHIFT             7                                                   /*!< SIM_SOPT7: ADC0ALTTRGEN Position        */

/* ------- SIM_SDID                                 ------ */
#define SIM_SDID_PINID_MASK                      (0x0FUL << SIM_SDID_PINID_SHIFT)                    /*!< SIM_SDID: PINID Mask                    */
#define SIM_SDID_PINID_SHIFT                     0                                                   /*!< SIM_SDID: PINID Position                */
#define SIM_SDID_PINID(x)                        (((x)<<SIM_SDID_PINID_SHIFT)&SIM_SDID_PINID_MASK)   /*!< SIM_SDID                                */
#define SIM_SDID_DIEID_MASK                      (0x1FUL << SIM_SDID_DIEID_SHIFT)                    /*!< SIM_SDID: DIEID Mask                    */
#define SIM_SDID_DIEID_SHIFT                     7                                                   /*!< SIM_SDID: DIEID Position                */
#define SIM_SDID_DIEID(x)                        (((x)<<SIM_SDID_DIEID_SHIFT)&SIM_SDID_DIEID_MASK)   /*!< SIM_SDID                                */
#define SIM_SDID_REVID_MASK                      (0x0FUL << SIM_SDID_REVID_SHIFT)                    /*!< SIM_SDID: REVID Mask                    */
#define SIM_SDID_REVID_SHIFT                     12                                                  /*!< SIM_SDID: REVID Position                */
#define SIM_SDID_REVID(x)                        (((x)<<SIM_SDID_REVID_SHIFT)&SIM_SDID_REVID_MASK)   /*!< SIM_SDID                                */
#define SIM_SDID_SRAMSIZE_MASK                   (0x0FUL << SIM_SDID_SRAMSIZE_SHIFT)                 /*!< SIM_SDID: SRAMSIZE Mask                 */
#define SIM_SDID_SRAMSIZE_SHIFT                  16                                                  /*!< SIM_SDID: SRAMSIZE Position             */
#define SIM_SDID_SRAMSIZE(x)                     (((x)<<SIM_SDID_SRAMSIZE_SHIFT)&SIM_SDID_SRAMSIZE_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SERIESID_MASK                   (0x0FUL << SIM_SDID_SERIESID_SHIFT)                 /*!< SIM_SDID: SERIESID Mask                 */
#define SIM_SDID_SERIESID_SHIFT                  20                                                  /*!< SIM_SDID: SERIESID Position             */
#define SIM_SDID_SERIESID(x)                     (((x)<<SIM_SDID_SERIESID_SHIFT)&SIM_SDID_SERIESID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_SUBFAMID_MASK                   (0x0FUL << SIM_SDID_SUBFAMID_SHIFT)                 /*!< SIM_SDID: SUBFAMID Mask                 */
#define SIM_SDID_SUBFAMID_SHIFT                  24                                                  /*!< SIM_SDID: SUBFAMID Position             */
#define SIM_SDID_SUBFAMID(x)                     (((x)<<SIM_SDID_SUBFAMID_SHIFT)&SIM_SDID_SUBFAMID_MASK) /*!< SIM_SDID                                */
#define SIM_SDID_FAMID_MASK                      (0x0FUL << SIM_SDID_FAMID_SHIFT)                    /*!< SIM_SDID: FAMID Mask                    */
#define SIM_SDID_FAMID_SHIFT                     28                                                  /*!< SIM_SDID: FAMID Position                */
#define SIM_SDID_FAMID(x)                        (((x)<<SIM_SDID_FAMID_SHIFT)&SIM_SDID_FAMID_MASK)   /*!< SIM_SDID                                */

/* ------- SIM_SCGC4                                ------ */
#define SIM_SCGC4_I2C0_MASK                      (0x01UL << SIM_SCGC4_I2C0_SHIFT)                    /*!< SIM_SCGC4: I2C0 Mask                    */
#define SIM_SCGC4_I2C0_SHIFT                     6                                                   /*!< SIM_SCGC4: I2C0 Position                */
#define SIM_SCGC4_I2C1_MASK                      (0x01UL << SIM_SCGC4_I2C1_SHIFT)                    /*!< SIM_SCGC4: I2C1 Mask                    */
#define SIM_SCGC4_I2C1_SHIFT                     7                                                   /*!< SIM_SCGC4: I2C1 Position                */
#define SIM_SCGC4_UART0_MASK                     (0x01UL << SIM_SCGC4_UART0_SHIFT)                   /*!< SIM_SCGC4: UART0 Mask                   */
#define SIM_SCGC4_UART0_SHIFT                    10                                                  /*!< SIM_SCGC4: UART0 Position               */
#define SIM_SCGC4_UART1_MASK                     (0x01UL << SIM_SCGC4_UART1_SHIFT)                   /*!< SIM_SCGC4: UART1 Mask                   */
#define SIM_SCGC4_UART1_SHIFT                    11                                                  /*!< SIM_SCGC4: UART1 Position               */
#define SIM_SCGC4_UART2_MASK                     (0x01UL << SIM_SCGC4_UART2_SHIFT)                   /*!< SIM_SCGC4: UART2 Mask                   */
#define SIM_SCGC4_UART2_SHIFT                    12                                                  /*!< SIM_SCGC4: UART2 Position               */
#define SIM_SCGC4_USBOTG_MASK                    (0x01UL << SIM_SCGC4_USBOTG_SHIFT)                  /*!< SIM_SCGC4: USBOTG Mask                  */
#define SIM_SCGC4_USBOTG_SHIFT                   18                                                  /*!< SIM_SCGC4: USBOTG Position              */
#define SIM_SCGC4_CMP_MASK                       (0x01UL << SIM_SCGC4_CMP_SHIFT)                     /*!< SIM_SCGC4: CMP Mask                     */
#define SIM_SCGC4_CMP_SHIFT                      19                                                  /*!< SIM_SCGC4: CMP Position                 */
#define SIM_SCGC4_SPI0_MASK                      (0x01UL << SIM_SCGC4_SPI0_SHIFT)                    /*!< SIM_SCGC4: SPI0 Mask                    */
#define SIM_SCGC4_SPI0_SHIFT                     22                                                  /*!< SIM_SCGC4: SPI0 Position                */
#define SIM_SCGC4_SPI1_MASK                      (0x01UL << SIM_SCGC4_SPI1_SHIFT)                    /*!< SIM_SCGC4: SPI1 Mask                    */
#define SIM_SCGC4_SPI1_SHIFT                     23                                                  /*!< SIM_SCGC4: SPI1 Position                */

/* ------- SIM_SCGC5                                ------ */
#define SIM_SCGC5_LPTMR_MASK                     (0x01UL << SIM_SCGC5_LPTMR_SHIFT)                   /*!< SIM_SCGC5: LPTMR Mask                   */
#define SIM_SCGC5_LPTMR_SHIFT                    0                                                   /*!< SIM_SCGC5: LPTMR Position               */
#define SIM_SCGC5_TSI_MASK                       (0x01UL << SIM_SCGC5_TSI_SHIFT)                     /*!< SIM_SCGC5: TSI Mask                     */
#define SIM_SCGC5_TSI_SHIFT                      5                                                   /*!< SIM_SCGC5: TSI Position                 */
#define SIM_SCGC5_PORTA_MASK                     (0x01UL << SIM_SCGC5_PORTA_SHIFT)                   /*!< SIM_SCGC5: PORTA Mask                   */
#define SIM_SCGC5_PORTA_SHIFT                    9                                                   /*!< SIM_SCGC5: PORTA Position               */
#define SIM_SCGC5_PORTB_MASK                     (0x01UL << SIM_SCGC5_PORTB_SHIFT)                   /*!< SIM_SCGC5: PORTB Mask                   */
#define SIM_SCGC5_PORTB_SHIFT                    10                                                  /*!< SIM_SCGC5: PORTB Position               */
#define SIM_SCGC5_PORTC_MASK                     (0x01UL << SIM_SCGC5_PORTC_SHIFT)                   /*!< SIM_SCGC5: PORTC Mask                   */
#define SIM_SCGC5_PORTC_SHIFT                    11                                                  /*!< SIM_SCGC5: PORTC Position               */
#define SIM_SCGC5_PORTD_MASK                     (0x01UL << SIM_SCGC5_PORTD_SHIFT)                   /*!< SIM_SCGC5: PORTD Mask                   */
#define SIM_SCGC5_PORTD_SHIFT                    12                                                  /*!< SIM_SCGC5: PORTD Position               */
#define SIM_SCGC5_PORTE_MASK                     (0x01UL << SIM_SCGC5_PORTE_SHIFT)                   /*!< SIM_SCGC5: PORTE Mask                   */
#define SIM_SCGC5_PORTE_SHIFT                    13                                                  /*!< SIM_SCGC5: PORTE Position               */

/* ------- SIM_SCGC6                                ------ */
#define SIM_SCGC6_FTF_MASK                       (0x01UL << SIM_SCGC6_FTF_SHIFT)                     /*!< SIM_SCGC6: FTF Mask                     */
#define SIM_SCGC6_FTF_SHIFT                      0                                                   /*!< SIM_SCGC6: FTF Position                 */
#define SIM_SCGC6_DMAMUX_MASK                    (0x01UL << SIM_SCGC6_DMAMUX_SHIFT)                  /*!< SIM_SCGC6: DMAMUX Mask                  */
#define SIM_SCGC6_DMAMUX_SHIFT                   1                                                   /*!< SIM_SCGC6: DMAMUX Position              */
#define SIM_SCGC6_I2S_MASK                       (0x01UL << SIM_SCGC6_I2S_SHIFT)                     /*!< SIM_SCGC6: I2S Mask                     */
#define SIM_SCGC6_I2S_SHIFT                      15                                                  /*!< SIM_SCGC6: I2S Position                 */
#define SIM_SCGC6_PIT_MASK                       (0x01UL << SIM_SCGC6_PIT_SHIFT)                     /*!< SIM_SCGC6: PIT Mask                     */
#define SIM_SCGC6_PIT_SHIFT                      23                                                  /*!< SIM_SCGC6: PIT Position                 */
#define SIM_SCGC6_TPM0_MASK                      (0x01UL << SIM_SCGC6_TPM0_SHIFT)                    /*!< SIM_SCGC6: TPM0 Mask                    */
#define SIM_SCGC6_TPM0_SHIFT                     24                                                  /*!< SIM_SCGC6: TPM0 Position                */
#define SIM_SCGC6_TPM1_MASK                      (0x01UL << SIM_SCGC6_TPM1_SHIFT)                    /*!< SIM_SCGC6: TPM1 Mask                    */
#define SIM_SCGC6_TPM1_SHIFT                     25                                                  /*!< SIM_SCGC6: TPM1 Position                */
#define SIM_SCGC6_TPM2_MASK                      (0x01UL << SIM_SCGC6_TPM2_SHIFT)                    /*!< SIM_SCGC6: TPM2 Mask                    */
#define SIM_SCGC6_TPM2_SHIFT                     26                                                  /*!< SIM_SCGC6: TPM2 Position                */
#define SIM_SCGC6_ADC0_MASK                      (0x01UL << SIM_SCGC6_ADC0_SHIFT)                    /*!< SIM_SCGC6: ADC0 Mask                    */
#define SIM_SCGC6_ADC0_SHIFT                     27                                                  /*!< SIM_SCGC6: ADC0 Position                */
#define SIM_SCGC6_RTC_MASK                       (0x01UL << SIM_SCGC6_RTC_SHIFT)                     /*!< SIM_SCGC6: RTC Mask                     */
#define SIM_SCGC6_RTC_SHIFT                      29                                                  /*!< SIM_SCGC6: RTC Position                 */
#define SIM_SCGC6_DAC0_MASK                      (0x01UL << SIM_SCGC6_DAC0_SHIFT)                    /*!< SIM_SCGC6: DAC0 Mask                    */
#define SIM_SCGC6_DAC0_SHIFT                     31                                                  /*!< SIM_SCGC6: DAC0 Position                */

/* ------- SIM_SCGC7                                ------ */
#define SIM_SCGC7_DMA_MASK                       (0x01UL << SIM_SCGC7_DMA_SHIFT)                     /*!< SIM_SCGC7: DMA Mask                     */
#define SIM_SCGC7_DMA_SHIFT                      8                                                   /*!< SIM_SCGC7: DMA Position                 */

/* ------- SIM_CLKDIV1                              ------ */
#define SIM_CLKDIV1_OUTDIV4_MASK                 (0x07UL << SIM_CLKDIV1_OUTDIV4_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV4 Mask               */
#define SIM_CLKDIV1_OUTDIV4_SHIFT                16                                                  /*!< SIM_CLKDIV1: OUTDIV4 Position           */
#define SIM_CLKDIV1_OUTDIV4(x)                   (((x)<<SIM_CLKDIV1_OUTDIV4_SHIFT)&SIM_CLKDIV1_OUTDIV4_MASK) /*!< SIM_CLKDIV1                             */
#define SIM_CLKDIV1_OUTDIV1_MASK                 (0x0FUL << SIM_CLKDIV1_OUTDIV1_SHIFT)               /*!< SIM_CLKDIV1: OUTDIV1 Mask               */
#define SIM_CLKDIV1_OUTDIV1_SHIFT                28                                                  /*!< SIM_CLKDIV1: OUTDIV1 Position           */
#define SIM_CLKDIV1_OUTDIV1(x)                   (((x)<<SIM_CLKDIV1_OUTDIV1_SHIFT)&SIM_CLKDIV1_OUTDIV1_MASK) /*!< SIM_CLKDIV1                             */

/* ------- SIM_FCFG1                                ------ */
#define SIM_FCFG1_FLASHDIS_MASK                  (0x01UL << SIM_FCFG1_FLASHDIS_SHIFT)                /*!< SIM_FCFG1: FLASHDIS Mask                */
#define SIM_FCFG1_FLASHDIS_SHIFT                 0                                                   /*!< SIM_FCFG1: FLASHDIS Position            */
#define SIM_FCFG1_FLASHDOZE_MASK                 (0x01UL << SIM_FCFG1_FLASHDOZE_SHIFT)               /*!< SIM_FCFG1: FLASHDOZE Mask               */
#define SIM_FCFG1_FLASHDOZE_SHIFT                1                                                   /*!< SIM_FCFG1: FLASHDOZE Position           */
#define SIM_FCFG1_PFSIZE_MASK                    (0x0FUL << SIM_FCFG1_PFSIZE_SHIFT)                  /*!< SIM_FCFG1: PFSIZE Mask                  */
#define SIM_FCFG1_PFSIZE_SHIFT                   24                                                  /*!< SIM_FCFG1: PFSIZE Position              */
#define SIM_FCFG1_PFSIZE(x)                      (((x)<<SIM_FCFG1_PFSIZE_SHIFT)&SIM_FCFG1_PFSIZE_MASK) /*!< SIM_FCFG1                               */

/* ------- SIM_FCFG2                                ------ */
#define SIM_FCFG2_MAXADDR1_MASK                  (0x7FUL << SIM_FCFG2_MAXADDR1_SHIFT)                /*!< SIM_FCFG2: MAXADDR1 Mask                */
#define SIM_FCFG2_MAXADDR1_SHIFT                 16                                                  /*!< SIM_FCFG2: MAXADDR1 Position            */
#define SIM_FCFG2_MAXADDR1(x)                    (((x)<<SIM_FCFG2_MAXADDR1_SHIFT)&SIM_FCFG2_MAXADDR1_MASK) /*!< SIM_FCFG2                               */
#define SIM_FCFG2_MAXADDR0_MASK                  (0x7FUL << SIM_FCFG2_MAXADDR0_SHIFT)                /*!< SIM_FCFG2: MAXADDR0 Mask                */
#define SIM_FCFG2_MAXADDR0_SHIFT                 24                                                  /*!< SIM_FCFG2: MAXADDR0 Position            */
#define SIM_FCFG2_MAXADDR0(x)                    (((x)<<SIM_FCFG2_MAXADDR0_SHIFT)&SIM_FCFG2_MAXADDR0_MASK) /*!< SIM_FCFG2                               */

/* ------- SIM_UIDMH                                ------ */
#define SIM_UIDMH_UID_MASK                       (0xFFFFUL << SIM_UIDMH_UID_SHIFT)                   /*!< SIM_UIDMH: UID Mask                     */
#define SIM_UIDMH_UID_SHIFT                      0                                                   /*!< SIM_UIDMH: UID Position                 */
#define SIM_UIDMH_UID(x)                         (((x)<<SIM_UIDMH_UID_SHIFT)&SIM_UIDMH_UID_MASK)     /*!< SIM_UIDMH                               */

/* ------- SIM_UIDML                                ------ */
#define SIM_UIDML_UID_MASK                       (0xFFFFFFFFUL << SIM_UIDML_UID_SHIFT)               /*!< SIM_UIDML: UID Mask                     */
#define SIM_UIDML_UID_SHIFT                      0                                                   /*!< SIM_UIDML: UID Position                 */
#define SIM_UIDML_UID(x)                         (((x)<<SIM_UIDML_UID_SHIFT)&SIM_UIDML_UID_MASK)     /*!< SIM_UIDML                               */

/* ------- SIM_UIDL                                 ------ */
#define SIM_UIDL_UID_MASK                        (0xFFFFFFFFUL << SIM_UIDL_UID_SHIFT)                /*!< SIM_UIDL: UID Mask                      */
#define SIM_UIDL_UID_SHIFT                       0                                                   /*!< SIM_UIDL: UID Position                  */
#define SIM_UIDL_UID(x)                          (((x)<<SIM_UIDL_UID_SHIFT)&SIM_UIDL_UID_MASK)       /*!< SIM_UIDL                                */

/* ------- SIM_COPC                                 ------ */
#define SIM_COPC_COPW_MASK                       (0x01UL << SIM_COPC_COPW_SHIFT)                     /*!< SIM_COPC: COPW Mask                     */
#define SIM_COPC_COPW_SHIFT                      0                                                   /*!< SIM_COPC: COPW Position                 */
#define SIM_COPC_COPCLKS_MASK                    (0x01UL << SIM_COPC_COPCLKS_SHIFT)                  /*!< SIM_COPC: COPCLKS Mask                  */
#define SIM_COPC_COPCLKS_SHIFT                   1                                                   /*!< SIM_COPC: COPCLKS Position              */
#define SIM_COPC_COPT_MASK                       (0x03UL << SIM_COPC_COPT_SHIFT)                     /*!< SIM_COPC: COPT Mask                     */
#define SIM_COPC_COPT_SHIFT                      2                                                   /*!< SIM_COPC: COPT Position                 */
#define SIM_COPC_COPT(x)                         (((x)<<SIM_COPC_COPT_SHIFT)&SIM_COPC_COPT_MASK)     /*!< SIM_COPC                                */

/* ------- SIM_SRVCOP                               ------ */
#define SIM_SRVCOP_SRVCOP_MASK                   (0xFFUL << SIM_SRVCOP_SRVCOP_SHIFT)                 /*!< SIM_SRVCOP: SRVCOP Mask                 */
#define SIM_SRVCOP_SRVCOP_SHIFT                  0                                                   /*!< SIM_SRVCOP: SRVCOP Position             */
#define SIM_SRVCOP_SRVCOP(x)                     (((x)<<SIM_SRVCOP_SRVCOP_SHIFT)&SIM_SRVCOP_SRVCOP_MASK) /*!< SIM_SRVCOP                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define SIM_SOPT1                      (SIM->SOPT1)
#define SIM_SOPT1CFG                   (SIM->SOPT1CFG)
#define SIM_SOPT2                      (SIM->SOPT2)
#define SIM_SOPT4                      (SIM->SOPT4)
#define SIM_SOPT5                      (SIM->SOPT5)
#define SIM_SOPT7                      (SIM->SOPT7)
#define SIM_SDID                       (SIM->SDID)
#define SIM_SCGC4                      (SIM->SCGC4)
#define SIM_SCGC5                      (SIM->SCGC5)
#define SIM_SCGC6                      (SIM->SCGC6)
#define SIM_SCGC7                      (SIM->SCGC7)
#define SIM_CLKDIV1                    (SIM->CLKDIV1)
#define SIM_FCFG1                      (SIM->FCFG1)
#define SIM_FCFG2                      (SIM->FCFG2)
#define SIM_UIDMH                      (SIM->UIDMH)
#define SIM_UIDML                      (SIM->UIDML)
#define SIM_UIDL                       (SIM->UIDL)
#define SIM_COPC                       (SIM->COPC)
#define SIM_SRVCOP                     (SIM->SRVCOP)

/* ================================================================================ */
/* ================           SMC (file:SMC_6)                     ================ */
/* ================================================================================ */

/**
 * @brief System Mode Controller (SMC)
 */
typedef struct {                                /*!<       SMC Structure                                                */
   __IO uint8_t   PMPROT;                       /*!< 0000: Power Mode Protection register                               */
   __IO uint8_t   PMCTRL;                       /*!< 0001: Power Mode Control register                                  */
   __IO uint8_t   STOPCTRL;                     /*!< 0002: Stop Control Register                                        */
   __I  uint8_t   PMSTAT;                       /*!< 0003: Power Mode Status register                                   */
} SMC_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- SMC_PMPROT                               ------ */
#define SMC_PMPROT_AVLLS_MASK                    (0x01UL << SMC_PMPROT_AVLLS_SHIFT)                  /*!< SMC_PMPROT: AVLLS Mask                  */
#define SMC_PMPROT_AVLLS_SHIFT                   1                                                   /*!< SMC_PMPROT: AVLLS Position              */
#define SMC_PMPROT_ALLS_MASK                     (0x01UL << SMC_PMPROT_ALLS_SHIFT)                   /*!< SMC_PMPROT: ALLS Mask                   */
#define SMC_PMPROT_ALLS_SHIFT                    3                                                   /*!< SMC_PMPROT: ALLS Position               */
#define SMC_PMPROT_AVLP_MASK                     (0x01UL << SMC_PMPROT_AVLP_SHIFT)                   /*!< SMC_PMPROT: AVLP Mask                   */
#define SMC_PMPROT_AVLP_SHIFT                    5                                                   /*!< SMC_PMPROT: AVLP Position               */

/* ------- SMC_PMCTRL                               ------ */
#define SMC_PMCTRL_STOPM_MASK                    (0x07UL << SMC_PMCTRL_STOPM_SHIFT)                  /*!< SMC_PMCTRL: STOPM Mask                  */
#define SMC_PMCTRL_STOPM_SHIFT                   0                                                   /*!< SMC_PMCTRL: STOPM Position              */
#define SMC_PMCTRL_STOPM(x)                      (((x)<<SMC_PMCTRL_STOPM_SHIFT)&SMC_PMCTRL_STOPM_MASK) /*!< SMC_PMCTRL                              */
#define SMC_PMCTRL_STOPA_MASK                    (0x01UL << SMC_PMCTRL_STOPA_SHIFT)                  /*!< SMC_PMCTRL: STOPA Mask                  */
#define SMC_PMCTRL_STOPA_SHIFT                   3                                                   /*!< SMC_PMCTRL: STOPA Position              */
#define SMC_PMCTRL_RUNM_MASK                     (0x03UL << SMC_PMCTRL_RUNM_SHIFT)                   /*!< SMC_PMCTRL: RUNM Mask                   */
#define SMC_PMCTRL_RUNM_SHIFT                    5                                                   /*!< SMC_PMCTRL: RUNM Position               */
#define SMC_PMCTRL_RUNM(x)                       (((x)<<SMC_PMCTRL_RUNM_SHIFT)&SMC_PMCTRL_RUNM_MASK) /*!< SMC_PMCTRL                              */

/* ------- SMC_STOPCTRL                             ------ */
#define SMC_STOPCTRL_VLLSM_MASK                  (0x07UL << SMC_STOPCTRL_VLLSM_SHIFT)                /*!< SMC_STOPCTRL: VLLSM Mask                */
#define SMC_STOPCTRL_VLLSM_SHIFT                 0                                                   /*!< SMC_STOPCTRL: VLLSM Position            */
#define SMC_STOPCTRL_VLLSM(x)                    (((x)<<SMC_STOPCTRL_VLLSM_SHIFT)&SMC_STOPCTRL_VLLSM_MASK) /*!< SMC_STOPCTRL                            */
#define SMC_STOPCTRL_PORPO_MASK                  (0x01UL << SMC_STOPCTRL_PORPO_SHIFT)                /*!< SMC_STOPCTRL: PORPO Mask                */
#define SMC_STOPCTRL_PORPO_SHIFT                 5                                                   /*!< SMC_STOPCTRL: PORPO Position            */
#define SMC_STOPCTRL_PSTOPO_MASK                 (0x03UL << SMC_STOPCTRL_PSTOPO_SHIFT)               /*!< SMC_STOPCTRL: PSTOPO Mask               */
#define SMC_STOPCTRL_PSTOPO_SHIFT                6                                                   /*!< SMC_STOPCTRL: PSTOPO Position           */
#define SMC_STOPCTRL_PSTOPO(x)                   (((x)<<SMC_STOPCTRL_PSTOPO_SHIFT)&SMC_STOPCTRL_PSTOPO_MASK) /*!< SMC_STOPCTRL                            */

/* ------- SMC_PMSTAT                               ------ */
#define SMC_PMSTAT_PMSTAT_MASK                   (0x7FUL << SMC_PMSTAT_PMSTAT_SHIFT)                 /*!< SMC_PMSTAT: PMSTAT Mask                 */
#define SMC_PMSTAT_PMSTAT_SHIFT                  0                                                   /*!< SMC_PMSTAT: PMSTAT Position             */
#define SMC_PMSTAT_PMSTAT(x)                     (((x)<<SMC_PMSTAT_PMSTAT_SHIFT)&SMC_PMSTAT_PMSTAT_MASK) /*!< SMC_PMSTAT                              */

/* -------------------------------------------------------------------------------- */
/* -----------     'SMC' Register Access macros                         ----------- */
/* -------------------------------------------------------------------------------- */

#define SMC_PMPROT                     (SMC->PMPROT)
#define SMC_PMCTRL                     (SMC->PMCTRL)
#define SMC_STOPCTRL                   (SMC->STOPCTRL)
#define SMC_PMSTAT                     (SMC->PMSTAT)

/* ================================================================================ */
/* ================           SPI0 (file:SPI0_6)                   ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface (SPI0)
 */
typedef struct {                                /*!<       SPI0 Structure                                               */
   __I  uint8_t   S;                            /*!< 0000: SPI status register                                          */
   __IO uint8_t   BR;                           /*!< 0001: SPI baud rate register                                       */
   __IO uint8_t   C2;                           /*!< 0002: SPI control register 2                                       */
   __IO uint8_t   C1;                           /*!< 0003: SPI control register 1                                       */
   __IO uint8_t   ML;                           /*!< 0004: SPI match register low                                       */
   __IO uint8_t   MH;                           /*!< 0005: SPI match register high                                      */
   __IO uint8_t   DL;                           /*!< 0006: SPI data register low                                        */
   __IO uint8_t   DH;                           /*!< 0007: SPI data register high                                       */
   __I  uint16_t  RESERVED0;                    /*!< 0008:                                                              */
   __IO uint8_t   CI;                           /*!< 000A: SPI clear interrupt register                                 */
   __IO uint8_t   C3;                           /*!< 000B: SPI control register 3                                       */
} SPI0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'SPI0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- SPI0_S                                   ------ */
#define SPI_S_RFIFOEF_MASK                       (0x01UL << SPI_S_RFIFOEF_SHIFT)                     /*!< SPI0_S: RFIFOEF Mask                    */
#define SPI_S_RFIFOEF_SHIFT                      0                                                   /*!< SPI0_S: RFIFOEF Position                */
#define SPI_S_TXFULLF_MASK                       (0x01UL << SPI_S_TXFULLF_SHIFT)                     /*!< SPI0_S: TXFULLF Mask                    */
#define SPI_S_TXFULLF_SHIFT                      1                                                   /*!< SPI0_S: TXFULLF Position                */
#define SPI_S_TNEAREF_MASK                       (0x01UL << SPI_S_TNEAREF_SHIFT)                     /*!< SPI0_S: TNEAREF Mask                    */
#define SPI_S_TNEAREF_SHIFT                      2                                                   /*!< SPI0_S: TNEAREF Position                */
#define SPI_S_RNFULLF_MASK                       (0x01UL << SPI_S_RNFULLF_SHIFT)                     /*!< SPI0_S: RNFULLF Mask                    */
#define SPI_S_RNFULLF_SHIFT                      3                                                   /*!< SPI0_S: RNFULLF Position                */
#define SPI_S_MODF_MASK                          (0x01UL << SPI_S_MODF_SHIFT)                        /*!< SPI0_S: MODF Mask                       */
#define SPI_S_MODF_SHIFT                         4                                                   /*!< SPI0_S: MODF Position                   */
#define SPI_S_SPTEF_MASK                         (0x01UL << SPI_S_SPTEF_SHIFT)                       /*!< SPI0_S: SPTEF Mask                      */
#define SPI_S_SPTEF_SHIFT                        5                                                   /*!< SPI0_S: SPTEF Position                  */
#define SPI_S_SPMF_MASK                          (0x01UL << SPI_S_SPMF_SHIFT)                        /*!< SPI0_S: SPMF Mask                       */
#define SPI_S_SPMF_SHIFT                         6                                                   /*!< SPI0_S: SPMF Position                   */
#define SPI_S_SPRF_MASK                          (0x01UL << SPI_S_SPRF_SHIFT)                        /*!< SPI0_S: SPRF Mask                       */
#define SPI_S_SPRF_SHIFT                         7                                                   /*!< SPI0_S: SPRF Position                   */

/* ------- SPI0_BR                                  ------ */
#define SPI_BR_SPR_MASK                          (0x0FUL << SPI_BR_SPR_SHIFT)                        /*!< SPI0_BR: SPR Mask                       */
#define SPI_BR_SPR_SHIFT                         0                                                   /*!< SPI0_BR: SPR Position                   */
#define SPI_BR_SPR(x)                            (((x)<<SPI_BR_SPR_SHIFT)&SPI_BR_SPR_MASK)           /*!< SPI0_BR                                 */
#define SPI_BR_SPPR_MASK                         (0x07UL << SPI_BR_SPPR_SHIFT)                       /*!< SPI0_BR: SPPR Mask                      */
#define SPI_BR_SPPR_SHIFT                        4                                                   /*!< SPI0_BR: SPPR Position                  */
#define SPI_BR_SPPR(x)                           (((x)<<SPI_BR_SPPR_SHIFT)&SPI_BR_SPPR_MASK)         /*!< SPI0_BR                                 */

/* ------- SPI0_C2                                  ------ */
#define SPI_C2_SPC0_MASK                         (0x01UL << SPI_C2_SPC0_SHIFT)                       /*!< SPI0_C2: SPC0 Mask                      */
#define SPI_C2_SPC0_SHIFT                        0                                                   /*!< SPI0_C2: SPC0 Position                  */
#define SPI_C2_SPISWAI_MASK                      (0x01UL << SPI_C2_SPISWAI_SHIFT)                    /*!< SPI0_C2: SPISWAI Mask                   */
#define SPI_C2_SPISWAI_SHIFT                     1                                                   /*!< SPI0_C2: SPISWAI Position               */
#define SPI_C2_RXDMAE_MASK                       (0x01UL << SPI_C2_RXDMAE_SHIFT)                     /*!< SPI0_C2: RXDMAE Mask                    */
#define SPI_C2_RXDMAE_SHIFT                      2                                                   /*!< SPI0_C2: RXDMAE Position                */
#define SPI_C2_BIDIROE_MASK                      (0x01UL << SPI_C2_BIDIROE_SHIFT)                    /*!< SPI0_C2: BIDIROE Mask                   */
#define SPI_C2_BIDIROE_SHIFT                     3                                                   /*!< SPI0_C2: BIDIROE Position               */
#define SPI_C2_MODFEN_MASK                       (0x01UL << SPI_C2_MODFEN_SHIFT)                     /*!< SPI0_C2: MODFEN Mask                    */
#define SPI_C2_MODFEN_SHIFT                      4                                                   /*!< SPI0_C2: MODFEN Position                */
#define SPI_C2_TXDMAE_MASK                       (0x01UL << SPI_C2_TXDMAE_SHIFT)                     /*!< SPI0_C2: TXDMAE Mask                    */
#define SPI_C2_TXDMAE_SHIFT                      5                                                   /*!< SPI0_C2: TXDMAE Position                */
#define SPI_C2_SPIMODE_MASK                      (0x01UL << SPI_C2_SPIMODE_SHIFT)                    /*!< SPI0_C2: SPIMODE Mask                   */
#define SPI_C2_SPIMODE_SHIFT                     6                                                   /*!< SPI0_C2: SPIMODE Position               */
#define SPI_C2_SPMIE_MASK                        (0x01UL << SPI_C2_SPMIE_SHIFT)                      /*!< SPI0_C2: SPMIE Mask                     */
#define SPI_C2_SPMIE_SHIFT                       7                                                   /*!< SPI0_C2: SPMIE Position                 */

/* ------- SPI0_C1                                  ------ */
#define SPI_C1_LSBFE_MASK                        (0x01UL << SPI_C1_LSBFE_SHIFT)                      /*!< SPI0_C1: LSBFE Mask                     */
#define SPI_C1_LSBFE_SHIFT                       0                                                   /*!< SPI0_C1: LSBFE Position                 */
#define SPI_C1_SSOE_MASK                         (0x01UL << SPI_C1_SSOE_SHIFT)                       /*!< SPI0_C1: SSOE Mask                      */
#define SPI_C1_SSOE_SHIFT                        1                                                   /*!< SPI0_C1: SSOE Position                  */
#define SPI_C1_CPHA_MASK                         (0x01UL << SPI_C1_CPHA_SHIFT)                       /*!< SPI0_C1: CPHA Mask                      */
#define SPI_C1_CPHA_SHIFT                        2                                                   /*!< SPI0_C1: CPHA Position                  */
#define SPI_C1_CPOL_MASK                         (0x01UL << SPI_C1_CPOL_SHIFT)                       /*!< SPI0_C1: CPOL Mask                      */
#define SPI_C1_CPOL_SHIFT                        3                                                   /*!< SPI0_C1: CPOL Position                  */
#define SPI_C1_MSTR_MASK                         (0x01UL << SPI_C1_MSTR_SHIFT)                       /*!< SPI0_C1: MSTR Mask                      */
#define SPI_C1_MSTR_SHIFT                        4                                                   /*!< SPI0_C1: MSTR Position                  */
#define SPI_C1_SPTIE_MASK                        (0x01UL << SPI_C1_SPTIE_SHIFT)                      /*!< SPI0_C1: SPTIE Mask                     */
#define SPI_C1_SPTIE_SHIFT                       5                                                   /*!< SPI0_C1: SPTIE Position                 */
#define SPI_C1_SPE_MASK                          (0x01UL << SPI_C1_SPE_SHIFT)                        /*!< SPI0_C1: SPE Mask                       */
#define SPI_C1_SPE_SHIFT                         6                                                   /*!< SPI0_C1: SPE Position                   */
#define SPI_C1_SPIE_MASK                         (0x01UL << SPI_C1_SPIE_SHIFT)                       /*!< SPI0_C1: SPIE Mask                      */
#define SPI_C1_SPIE_SHIFT                        7                                                   /*!< SPI0_C1: SPIE Position                  */

/* ------- SPI0_ML                                  ------ */
#define SPI_ML_Bits_MASK                         (0xFFUL << SPI_ML_Bits_SHIFT)                       /*!< SPI0_ML: Bits Mask                      */
#define SPI_ML_Bits_SHIFT                        0                                                   /*!< SPI0_ML: Bits Position                  */
#define SPI_ML_Bits(x)                           (((x)<<SPI_ML_Bits_SHIFT)&SPI_ML_Bits_MASK)         /*!< SPI0_ML                                 */

/* ------- SPI0_MH                                  ------ */
#define SPI_MH_Bits_MASK                         (0xFFUL << SPI_MH_Bits_SHIFT)                       /*!< SPI0_MH: Bits Mask                      */
#define SPI_MH_Bits_SHIFT                        0                                                   /*!< SPI0_MH: Bits Position                  */
#define SPI_MH_Bits(x)                           (((x)<<SPI_MH_Bits_SHIFT)&SPI_MH_Bits_MASK)         /*!< SPI0_MH                                 */

/* ------- SPI0_DL                                  ------ */
#define SPI_DL_Bits_MASK                         (0xFFUL << SPI_DL_Bits_SHIFT)                       /*!< SPI0_DL: Bits Mask                      */
#define SPI_DL_Bits_SHIFT                        0                                                   /*!< SPI0_DL: Bits Position                  */
#define SPI_DL_Bits(x)                           (((x)<<SPI_DL_Bits_SHIFT)&SPI_DL_Bits_MASK)         /*!< SPI0_DL                                 */

/* ------- SPI0_DH                                  ------ */
#define SPI_DH_Bits_MASK                         (0xFFUL << SPI_DH_Bits_SHIFT)                       /*!< SPI0_DH: Bits Mask                      */
#define SPI_DH_Bits_SHIFT                        0                                                   /*!< SPI0_DH: Bits Position                  */
#define SPI_DH_Bits(x)                           (((x)<<SPI_DH_Bits_SHIFT)&SPI_DH_Bits_MASK)         /*!< SPI0_DH                                 */

/* ------- SPI0_CI                                  ------ */
#define SPI_CI_SPRFCI_MASK                       (0x01UL << SPI_CI_SPRFCI_SHIFT)                     /*!< SPI0_CI: SPRFCI Mask                    */
#define SPI_CI_SPRFCI_SHIFT                      0                                                   /*!< SPI0_CI: SPRFCI Position                */
#define SPI_CI_SPTEFCI_MASK                      (0x01UL << SPI_CI_SPTEFCI_SHIFT)                    /*!< SPI0_CI: SPTEFCI Mask                   */
#define SPI_CI_SPTEFCI_SHIFT                     1                                                   /*!< SPI0_CI: SPTEFCI Position               */
#define SPI_CI_RNFULLFCI_MASK                    (0x01UL << SPI_CI_RNFULLFCI_SHIFT)                  /*!< SPI0_CI: RNFULLFCI Mask                 */
#define SPI_CI_RNFULLFCI_SHIFT                   2                                                   /*!< SPI0_CI: RNFULLFCI Position             */
#define SPI_CI_TNEAREFCI_MASK                    (0x01UL << SPI_CI_TNEAREFCI_SHIFT)                  /*!< SPI0_CI: TNEAREFCI Mask                 */
#define SPI_CI_TNEAREFCI_SHIFT                   3                                                   /*!< SPI0_CI: TNEAREFCI Position             */
#define SPI_CI_RXFOF_MASK                        (0x01UL << SPI_CI_RXFOF_SHIFT)                      /*!< SPI0_CI: RXFOF Mask                     */
#define SPI_CI_RXFOF_SHIFT                       4                                                   /*!< SPI0_CI: RXFOF Position                 */
#define SPI_CI_TXFOF_MASK                        (0x01UL << SPI_CI_TXFOF_SHIFT)                      /*!< SPI0_CI: TXFOF Mask                     */
#define SPI_CI_TXFOF_SHIFT                       5                                                   /*!< SPI0_CI: TXFOF Position                 */
#define SPI_CI_RXFERR_MASK                       (0x01UL << SPI_CI_RXFERR_SHIFT)                     /*!< SPI0_CI: RXFERR Mask                    */
#define SPI_CI_RXFERR_SHIFT                      6                                                   /*!< SPI0_CI: RXFERR Position                */
#define SPI_CI_TXFERR_MASK                       (0x01UL << SPI_CI_TXFERR_SHIFT)                     /*!< SPI0_CI: TXFERR Mask                    */
#define SPI_CI_TXFERR_SHIFT                      7                                                   /*!< SPI0_CI: TXFERR Position                */

/* ------- SPI0_C3                                  ------ */
#define SPI_C3_FIFOMODE_MASK                     (0x01UL << SPI_C3_FIFOMODE_SHIFT)                   /*!< SPI0_C3: FIFOMODE Mask                  */
#define SPI_C3_FIFOMODE_SHIFT                    0                                                   /*!< SPI0_C3: FIFOMODE Position              */
#define SPI_C3_RNFULLIEN_MASK                    (0x01UL << SPI_C3_RNFULLIEN_SHIFT)                  /*!< SPI0_C3: RNFULLIEN Mask                 */
#define SPI_C3_RNFULLIEN_SHIFT                   1                                                   /*!< SPI0_C3: RNFULLIEN Position             */
#define SPI_C3_TNEARIEN_MASK                     (0x01UL << SPI_C3_TNEARIEN_SHIFT)                   /*!< SPI0_C3: TNEARIEN Mask                  */
#define SPI_C3_TNEARIEN_SHIFT                    2                                                   /*!< SPI0_C3: TNEARIEN Position              */
#define SPI_C3_INTCLR_MASK                       (0x01UL << SPI_C3_INTCLR_SHIFT)                     /*!< SPI0_C3: INTCLR Mask                    */
#define SPI_C3_INTCLR_SHIFT                      3                                                   /*!< SPI0_C3: INTCLR Position                */
#define SPI_C3_RNFULLF_MARK_MASK                 (0x01UL << SPI_C3_RNFULLF_MARK_SHIFT)               /*!< SPI0_C3: RNFULLF_MARK Mask              */
#define SPI_C3_RNFULLF_MARK_SHIFT                4                                                   /*!< SPI0_C3: RNFULLF_MARK Position          */
#define SPI_C3_TNEAREF_MARK_MASK                 (0x01UL << SPI_C3_TNEAREF_MARK_SHIFT)               /*!< SPI0_C3: TNEAREF_MARK Mask              */
#define SPI_C3_TNEAREF_MARK_SHIFT                5                                                   /*!< SPI0_C3: TNEAREF_MARK Position          */

/* -------------------------------------------------------------------------------- */
/* -----------     'SPI0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define SPI0_S                         (SPI0->S)
#define SPI0_BR                        (SPI0->BR)
#define SPI0_C2                        (SPI0->C2)
#define SPI0_C1                        (SPI0->C1)
#define SPI0_ML                        (SPI0->ML)
#define SPI0_MH                        (SPI0->MH)
#define SPI0_DL                        (SPI0->DL)
#define SPI0_DH                        (SPI0->DH)
#define SPI0_CI                        (SPI0->CI)
#define SPI0_C3                        (SPI0->C3)

/* ================================================================================ */
/* ================           SPI1 (derived from SPI0)             ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface (SPI1)
 */
typedef SPI0_Type SPI1_Type;  /*!< SPI1 Structure                                              */


/* -------------------------------------------------------------------------------- */
/* -----------     'SPI1' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define SPI1_S                         (SPI1->S)
#define SPI1_BR                        (SPI1->BR)
#define SPI1_C2                        (SPI1->C2)
#define SPI1_C1                        (SPI1->C1)
#define SPI1_ML                        (SPI1->ML)
#define SPI1_MH                        (SPI1->MH)
#define SPI1_DL                        (SPI1->DL)
#define SPI1_DH                        (SPI1->DH)
#define SPI1_CI                        (SPI1->CI)
#define SPI1_C3                        (SPI1->C3)

/* ================================================================================ */
/* ================           TPM0 (file:TPM0_6CH)                 ================ */
/* ================================================================================ */

/**
 * @brief Timer/PWM Module (6 channels)
 */
typedef struct {                                /*!<       TPM0 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /*!< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /*!< 0008: Modulo                                                       */
   struct { /* (cluster) */                     /*!< 000C: (size=0x0030, 48)                                            */
      __IO uint32_t  CnSC;                      /*!< 000C: Channel (n) Status and Control                               */
      __IO uint32_t  CnV;                       /*!< 0010: Channel (n) Value                                            */
   } CONTROLS[6];
   __I  uint32_t  RESERVED0[5];                 /*!< 003C:                                                              */
   __IO uint32_t  STATUS;                       /*!< 0050: Capture and Compare Status                                   */
   __I  uint32_t  RESERVED1[12];                /*!< 0054:                                                              */
   __IO uint32_t  CONF;                         /*!< 0084: Configuration                                                */
} TPM0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'TPM0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- TPM0_SC                                  ------ */
#define TPM_SC_PS_MASK                           (0x07UL << TPM_SC_PS_SHIFT)                         /*!< TPM0_SC: PS Mask                        */
#define TPM_SC_PS_SHIFT                          0                                                   /*!< TPM0_SC: PS Position                    */
#define TPM_SC_PS(x)                             (((x)<<TPM_SC_PS_SHIFT)&TPM_SC_PS_MASK)             /*!< TPM0_SC                                 */
#define TPM_SC_CMOD_MASK                         (0x03UL << TPM_SC_CMOD_SHIFT)                       /*!< TPM0_SC: CMOD Mask                      */
#define TPM_SC_CMOD_SHIFT                        3                                                   /*!< TPM0_SC: CMOD Position                  */
#define TPM_SC_CMOD(x)                           (((x)<<TPM_SC_CMOD_SHIFT)&TPM_SC_CMOD_MASK)         /*!< TPM0_SC                                 */
#define TPM_SC_CPWMS_MASK                        (0x01UL << TPM_SC_CPWMS_SHIFT)                      /*!< TPM0_SC: CPWMS Mask                     */
#define TPM_SC_CPWMS_SHIFT                       5                                                   /*!< TPM0_SC: CPWMS Position                 */
#define TPM_SC_TOIE_MASK                         (0x01UL << TPM_SC_TOIE_SHIFT)                       /*!< TPM0_SC: TOIE Mask                      */
#define TPM_SC_TOIE_SHIFT                        6                                                   /*!< TPM0_SC: TOIE Position                  */
#define TPM_SC_TOF_MASK                          (0x01UL << TPM_SC_TOF_SHIFT)                        /*!< TPM0_SC: TOF Mask                       */
#define TPM_SC_TOF_SHIFT                         7                                                   /*!< TPM0_SC: TOF Position                   */
#define TPM_SC_DMA_MASK                          (0x01UL << TPM_SC_DMA_SHIFT)                        /*!< TPM0_SC: DMA Mask                       */
#define TPM_SC_DMA_SHIFT                         8                                                   /*!< TPM0_SC: DMA Position                   */

/* ------- TPM0_CNT                                 ------ */
#define TPM_CNT_COUNT_MASK                       (0xFFFFUL << TPM_CNT_COUNT_SHIFT)                   /*!< TPM0_CNT: COUNT Mask                    */
#define TPM_CNT_COUNT_SHIFT                      0                                                   /*!< TPM0_CNT: COUNT Position                */
#define TPM_CNT_COUNT(x)                         (((x)<<TPM_CNT_COUNT_SHIFT)&TPM_CNT_COUNT_MASK)     /*!< TPM0_CNT                                */

/* ------- TPM0_MOD                                 ------ */
#define TPM_MOD_MOD_MASK                         (0xFFFFUL << TPM_MOD_MOD_SHIFT)                     /*!< TPM0_MOD: MOD Mask                      */
#define TPM_MOD_MOD_SHIFT                        0                                                   /*!< TPM0_MOD: MOD Position                  */
#define TPM_MOD_MOD(x)                           (((x)<<TPM_MOD_MOD_SHIFT)&TPM_MOD_MOD_MASK)         /*!< TPM0_MOD                                */

/* ------- TPM0_CnSC                                ------ */
#define TPM_CnSC_DMA_MASK                        (0x01UL << TPM_CnSC_DMA_SHIFT)                      /*!< TPM0_CnSC: DMA Mask                     */
#define TPM_CnSC_DMA_SHIFT                       0                                                   /*!< TPM0_CnSC: DMA Position                 */
#define TPM_CnSC_ELSA_MASK                       (0x01UL << TPM_CnSC_ELSA_SHIFT)                     /*!< TPM0_CnSC: ELSA Mask                    */
#define TPM_CnSC_ELSA_SHIFT                      2                                                   /*!< TPM0_CnSC: ELSA Position                */
#define TPM_CnSC_ELSB_MASK                       (0x01UL << TPM_CnSC_ELSB_SHIFT)                     /*!< TPM0_CnSC: ELSB Mask                    */
#define TPM_CnSC_ELSB_SHIFT                      3                                                   /*!< TPM0_CnSC: ELSB Position                */
#define TPM_CnSC_MSA_MASK                        (0x01UL << TPM_CnSC_MSA_SHIFT)                      /*!< TPM0_CnSC: MSA Mask                     */
#define TPM_CnSC_MSA_SHIFT                       4                                                   /*!< TPM0_CnSC: MSA Position                 */
#define TPM_CnSC_MSB_MASK                        (0x01UL << TPM_CnSC_MSB_SHIFT)                      /*!< TPM0_CnSC: MSB Mask                     */
#define TPM_CnSC_MSB_SHIFT                       5                                                   /*!< TPM0_CnSC: MSB Position                 */
#define TPM_CnSC_CHIE_MASK                       (0x01UL << TPM_CnSC_CHIE_SHIFT)                     /*!< TPM0_CnSC: CHIE Mask                    */
#define TPM_CnSC_CHIE_SHIFT                      6                                                   /*!< TPM0_CnSC: CHIE Position                */
#define TPM_CnSC_CHF_MASK                        (0x01UL << TPM_CnSC_CHF_SHIFT)                      /*!< TPM0_CnSC: CHF Mask                     */
#define TPM_CnSC_CHF_SHIFT                       7                                                   /*!< TPM0_CnSC: CHF Position                 */

/* ------- TPM0_CnV                                 ------ */
#define TPM_CnV_VAL_MASK                         (0xFFFFUL << TPM_CnV_VAL_SHIFT)                     /*!< TPM0_CnV: VAL Mask                      */
#define TPM_CnV_VAL_SHIFT                        0                                                   /*!< TPM0_CnV: VAL Position                  */
#define TPM_CnV_VAL(x)                           (((x)<<TPM_CnV_VAL_SHIFT)&TPM_CnV_VAL_MASK)         /*!< TPM0_CnV                                */

/* ------- TPM0_STATUS                              ------ */
#define TPM_STATUS_CH0F_MASK                     (0x01UL << TPM_STATUS_CH0F_SHIFT)                   /*!< TPM0_STATUS: CH0F Mask                  */
#define TPM_STATUS_CH0F_SHIFT                    0                                                   /*!< TPM0_STATUS: CH0F Position              */
#define TPM_STATUS_CH1F_MASK                     (0x01UL << TPM_STATUS_CH1F_SHIFT)                   /*!< TPM0_STATUS: CH1F Mask                  */
#define TPM_STATUS_CH1F_SHIFT                    1                                                   /*!< TPM0_STATUS: CH1F Position              */
#define TPM_STATUS_CH2F_MASK                     (0x01UL << TPM_STATUS_CH2F_SHIFT)                   /*!< TPM0_STATUS: CH2F Mask                  */
#define TPM_STATUS_CH2F_SHIFT                    2                                                   /*!< TPM0_STATUS: CH2F Position              */
#define TPM_STATUS_CH3F_MASK                     (0x01UL << TPM_STATUS_CH3F_SHIFT)                   /*!< TPM0_STATUS: CH3F Mask                  */
#define TPM_STATUS_CH3F_SHIFT                    3                                                   /*!< TPM0_STATUS: CH3F Position              */
#define TPM_STATUS_CH4F_MASK                     (0x01UL << TPM_STATUS_CH4F_SHIFT)                   /*!< TPM0_STATUS: CH4F Mask                  */
#define TPM_STATUS_CH4F_SHIFT                    4                                                   /*!< TPM0_STATUS: CH4F Position              */
#define TPM_STATUS_CH5F_MASK                     (0x01UL << TPM_STATUS_CH5F_SHIFT)                   /*!< TPM0_STATUS: CH5F Mask                  */
#define TPM_STATUS_CH5F_SHIFT                    5                                                   /*!< TPM0_STATUS: CH5F Position              */
#define TPM_STATUS_TOF_MASK                      (0x01UL << TPM_STATUS_TOF_SHIFT)                    /*!< TPM0_STATUS: TOF Mask                   */
#define TPM_STATUS_TOF_SHIFT                     8                                                   /*!< TPM0_STATUS: TOF Position               */

/* ------- TPM0_CONF                                ------ */
#define TPM_CONF_DOZEEN_MASK                     (0x01UL << TPM_CONF_DOZEEN_SHIFT)                   /*!< TPM0_CONF: DOZEEN Mask                  */
#define TPM_CONF_DOZEEN_SHIFT                    5                                                   /*!< TPM0_CONF: DOZEEN Position              */
#define TPM_CONF_DBGMODE_MASK                    (0x03UL << TPM_CONF_DBGMODE_SHIFT)                  /*!< TPM0_CONF: DBGMODE Mask                 */
#define TPM_CONF_DBGMODE_SHIFT                   6                                                   /*!< TPM0_CONF: DBGMODE Position             */
#define TPM_CONF_DBGMODE(x)                      (((x)<<TPM_CONF_DBGMODE_SHIFT)&TPM_CONF_DBGMODE_MASK) /*!< TPM0_CONF                               */
#define TPM_CONF_GTBEEN_MASK                     (0x01UL << TPM_CONF_GTBEEN_SHIFT)                   /*!< TPM0_CONF: GTBEEN Mask                  */
#define TPM_CONF_GTBEEN_SHIFT                    9                                                   /*!< TPM0_CONF: GTBEEN Position              */
#define TPM_CONF_CSOT_MASK                       (0x01UL << TPM_CONF_CSOT_SHIFT)                     /*!< TPM0_CONF: CSOT Mask                    */
#define TPM_CONF_CSOT_SHIFT                      16                                                  /*!< TPM0_CONF: CSOT Position                */
#define TPM_CONF_CSOO_MASK                       (0x01UL << TPM_CONF_CSOO_SHIFT)                     /*!< TPM0_CONF: CSOO Mask                    */
#define TPM_CONF_CSOO_SHIFT                      17                                                  /*!< TPM0_CONF: CSOO Position                */
#define TPM_CONF_CROT_MASK                       (0x01UL << TPM_CONF_CROT_SHIFT)                     /*!< TPM0_CONF: CROT Mask                    */
#define TPM_CONF_CROT_SHIFT                      18                                                  /*!< TPM0_CONF: CROT Position                */
#define TPM_CONF_TRGSEL_MASK                     (0x0FUL << TPM_CONF_TRGSEL_SHIFT)                   /*!< TPM0_CONF: TRGSEL Mask                  */
#define TPM_CONF_TRGSEL_SHIFT                    24                                                  /*!< TPM0_CONF: TRGSEL Position              */
#define TPM_CONF_TRGSEL(x)                       (((x)<<TPM_CONF_TRGSEL_SHIFT)&TPM_CONF_TRGSEL_MASK) /*!< TPM0_CONF                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'TPM0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define TPM0_SC                        (TPM0->SC)
#define TPM0_CNT                       (TPM0->CNT)
#define TPM0_MOD                       (TPM0->MOD)
#define TPM0_C0SC                      (TPM0->CONTROLS[0].CnSC)
#define TPM0_C0V                       (TPM0->CONTROLS[0].CnV)
#define TPM0_C1SC                      (TPM0->CONTROLS[1].CnSC)
#define TPM0_C1V                       (TPM0->CONTROLS[1].CnV)
#define TPM0_C2SC                      (TPM0->CONTROLS[2].CnSC)
#define TPM0_C2V                       (TPM0->CONTROLS[2].CnV)
#define TPM0_C3SC                      (TPM0->CONTROLS[3].CnSC)
#define TPM0_C3V                       (TPM0->CONTROLS[3].CnV)
#define TPM0_C4SC                      (TPM0->CONTROLS[4].CnSC)
#define TPM0_C4V                       (TPM0->CONTROLS[4].CnV)
#define TPM0_C5SC                      (TPM0->CONTROLS[5].CnSC)
#define TPM0_C5V                       (TPM0->CONTROLS[5].CnV)
#define TPM0_STATUS                    (TPM0->STATUS)
#define TPM0_CONF                      (TPM0->CONF)

/* ================================================================================ */
/* ================           TPM1 (file:TPM1_2CH)                 ================ */
/* ================================================================================ */

/**
 * @brief Timer/PWM Module (2 channels)
 */
typedef struct {                                /*!<       TPM1 Structure                                               */
   __IO uint32_t  SC;                           /*!< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /*!< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /*!< 0008: Modulo                                                       */
   struct { /* (cluster) */                     /*!< 000C: (size=0x0010, 16)                                            */
      __IO uint32_t  CnSC;                      /*!< 000C: Channel (n) Status and Control                               */
      __IO uint32_t  CnV;                       /*!< 0010: Channel (n) Value                                            */
   } CONTROLS[2];
   __I  uint32_t  RESERVED0[13];                /*!< 001C:                                                              */
   __IO uint32_t  STATUS;                       /*!< 0050: Capture and Compare Status                                   */
   __I  uint32_t  RESERVED1[12];                /*!< 0054:                                                              */
   __IO uint32_t  CONF;                         /*!< 0084: Configuration                                                */
} TPM1_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'TPM1' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- TPM1_SC                                  ------ */

/* ------- TPM1_CNT                                 ------ */

/* ------- TPM1_MOD                                 ------ */

/* ------- TPM1_CnSC                                ------ */

/* ------- TPM1_CnV                                 ------ */

/* ------- TPM1_STATUS                              ------ */

/* ------- TPM1_CONF                                ------ */

/* -------------------------------------------------------------------------------- */
/* -----------     'TPM1' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define TPM1_SC                        (TPM1->SC)
#define TPM1_CNT                       (TPM1->CNT)
#define TPM1_MOD                       (TPM1->MOD)
#define TPM1_C0SC                      (TPM1->CONTROLS[0].CnSC)
#define TPM1_C0V                       (TPM1->CONTROLS[0].CnV)
#define TPM1_C1SC                      (TPM1->CONTROLS[1].CnSC)
#define TPM1_C1V                       (TPM1->CONTROLS[1].CnV)
#define TPM1_STATUS                    (TPM1->STATUS)
#define TPM1_CONF                      (TPM1->CONF)

/* ================================================================================ */
/* ================           TPM2 (derived from TPM1)             ================ */
/* ================================================================================ */

/**
 * @brief Timer/PWM Module (2 channels)
 */
typedef TPM1_Type TPM2_Type;  /*!< TPM2 Structure                                              */


/* -------------------------------------------------------------------------------- */
/* -----------     'TPM2' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define TPM2_SC                        (TPM2->SC)
#define TPM2_CNT                       (TPM2->CNT)
#define TPM2_MOD                       (TPM2->MOD)
#define TPM2_C0SC                      (TPM2->CONTROLS[0].CnSC)
#define TPM2_C0V                       (TPM2->CONTROLS[0].CnV)
#define TPM2_C1SC                      (TPM2->CONTROLS[1].CnSC)
#define TPM2_C1V                       (TPM2->CONTROLS[1].CnV)
#define TPM2_STATUS                    (TPM2->STATUS)
#define TPM2_CONF                      (TPM2->CONF)

/* ================================================================================ */
/* ================           TSI0 (file:TSI0_MKL)                 ================ */
/* ================================================================================ */

/**
 * @brief Touch sense input (TSI0)
 */
typedef struct {                                /*!<       TSI0 Structure                                               */
   __IO uint32_t  GENCS;                        /*!< 0000: TSI General Control and Status Register                      */
   __IO uint32_t  DATA;                         /*!< 0004: TSI DATA Register                                            */
   __IO uint32_t  TSHD;                         /*!< 0008: TSI Threshold Register                                       */
} TSI0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'TSI0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- TSI0_GENCS                               ------ */
#define TSI0_GENCS_CURSW_MASK                    (0x01UL << TSI0_GENCS_CURSW_SHIFT)                  /*!< TSI0_GENCS: CURSW Mask                  */
#define TSI0_GENCS_CURSW_SHIFT                   1                                                   /*!< TSI0_GENCS: CURSW Position              */
#define TSI0_GENCS_EOSF_MASK                     (0x01UL << TSI0_GENCS_EOSF_SHIFT)                   /*!< TSI0_GENCS: EOSF Mask                   */
#define TSI0_GENCS_EOSF_SHIFT                    2                                                   /*!< TSI0_GENCS: EOSF Position               */
#define TSI0_GENCS_SCNIP_MASK                    (0x01UL << TSI0_GENCS_SCNIP_SHIFT)                  /*!< TSI0_GENCS: SCNIP Mask                  */
#define TSI0_GENCS_SCNIP_SHIFT                   3                                                   /*!< TSI0_GENCS: SCNIP Position              */
#define TSI0_GENCS_STM_MASK                      (0x01UL << TSI0_GENCS_STM_SHIFT)                    /*!< TSI0_GENCS: STM Mask                    */
#define TSI0_GENCS_STM_SHIFT                     4                                                   /*!< TSI0_GENCS: STM Position                */
#define TSI0_GENCS_STPE_MASK                     (0x01UL << TSI0_GENCS_STPE_SHIFT)                   /*!< TSI0_GENCS: STPE Mask                   */
#define TSI0_GENCS_STPE_SHIFT                    5                                                   /*!< TSI0_GENCS: STPE Position               */
#define TSI0_GENCS_TSIIEN_MASK                   (0x01UL << TSI0_GENCS_TSIIEN_SHIFT)                 /*!< TSI0_GENCS: TSIIEN Mask                 */
#define TSI0_GENCS_TSIIEN_SHIFT                  6                                                   /*!< TSI0_GENCS: TSIIEN Position             */
#define TSI0_GENCS_TSIEN_MASK                    (0x01UL << TSI0_GENCS_TSIEN_SHIFT)                  /*!< TSI0_GENCS: TSIEN Mask                  */
#define TSI0_GENCS_TSIEN_SHIFT                   7                                                   /*!< TSI0_GENCS: TSIEN Position              */
#define TSI0_GENCS_NSCN_MASK                     (0x1FUL << TSI0_GENCS_NSCN_SHIFT)                   /*!< TSI0_GENCS: NSCN Mask                   */
#define TSI0_GENCS_NSCN_SHIFT                    8                                                   /*!< TSI0_GENCS: NSCN Position               */
#define TSI0_GENCS_NSCN(x)                       (((x)<<TSI0_GENCS_NSCN_SHIFT)&TSI0_GENCS_NSCN_MASK) /*!< TSI0_GENCS                              */
#define TSI0_GENCS_PS_MASK                       (0x07UL << TSI0_GENCS_PS_SHIFT)                     /*!< TSI0_GENCS: PS Mask                     */
#define TSI0_GENCS_PS_SHIFT                      13                                                  /*!< TSI0_GENCS: PS Position                 */
#define TSI0_GENCS_PS(x)                         (((x)<<TSI0_GENCS_PS_SHIFT)&TSI0_GENCS_PS_MASK)     /*!< TSI0_GENCS                              */
#define TSI0_GENCS_EXTCHRG_MASK                  (0x07UL << TSI0_GENCS_EXTCHRG_SHIFT)                /*!< TSI0_GENCS: EXTCHRG Mask                */
#define TSI0_GENCS_EXTCHRG_SHIFT                 16                                                  /*!< TSI0_GENCS: EXTCHRG Position            */
#define TSI0_GENCS_EXTCHRG(x)                    (((x)<<TSI0_GENCS_EXTCHRG_SHIFT)&TSI0_GENCS_EXTCHRG_MASK) /*!< TSI0_GENCS                              */
#define TSI0_GENCS_DVOLT_MASK                    (0x03UL << TSI0_GENCS_DVOLT_SHIFT)                  /*!< TSI0_GENCS: DVOLT Mask                  */
#define TSI0_GENCS_DVOLT_SHIFT                   19                                                  /*!< TSI0_GENCS: DVOLT Position              */
#define TSI0_GENCS_DVOLT(x)                      (((x)<<TSI0_GENCS_DVOLT_SHIFT)&TSI0_GENCS_DVOLT_MASK) /*!< TSI0_GENCS                              */
#define TSI0_GENCS_REFCHRG_MASK                  (0x07UL << TSI0_GENCS_REFCHRG_SHIFT)                /*!< TSI0_GENCS: REFCHRG Mask                */
#define TSI0_GENCS_REFCHRG_SHIFT                 21                                                  /*!< TSI0_GENCS: REFCHRG Position            */
#define TSI0_GENCS_REFCHRG(x)                    (((x)<<TSI0_GENCS_REFCHRG_SHIFT)&TSI0_GENCS_REFCHRG_MASK) /*!< TSI0_GENCS                              */
#define TSI0_GENCS_MODE_MASK                     (0x0FUL << TSI0_GENCS_MODE_SHIFT)                   /*!< TSI0_GENCS: MODE Mask                   */
#define TSI0_GENCS_MODE_SHIFT                    24                                                  /*!< TSI0_GENCS: MODE Position               */
#define TSI0_GENCS_MODE(x)                       (((x)<<TSI0_GENCS_MODE_SHIFT)&TSI0_GENCS_MODE_MASK) /*!< TSI0_GENCS                              */
#define TSI0_GENCS_ESOR_MASK                     (0x01UL << TSI0_GENCS_ESOR_SHIFT)                   /*!< TSI0_GENCS: ESOR Mask                   */
#define TSI0_GENCS_ESOR_SHIFT                    28                                                  /*!< TSI0_GENCS: ESOR Position               */
#define TSI0_GENCS_OUTRGF_MASK                   (0x01UL << TSI0_GENCS_OUTRGF_SHIFT)                 /*!< TSI0_GENCS: OUTRGF Mask                 */
#define TSI0_GENCS_OUTRGF_SHIFT                  31                                                  /*!< TSI0_GENCS: OUTRGF Position             */

/* ------- TSI0_DATA                                ------ */
#define TSI0_DATA_TSICNT_MASK                    (0xFFFFUL << TSI0_DATA_TSICNT_SHIFT)                /*!< TSI0_DATA: TSICNT Mask                  */
#define TSI0_DATA_TSICNT_SHIFT                   0                                                   /*!< TSI0_DATA: TSICNT Position              */
#define TSI0_DATA_TSICNT(x)                      (((x)<<TSI0_DATA_TSICNT_SHIFT)&TSI0_DATA_TSICNT_MASK) /*!< TSI0_DATA                               */
#define TSI0_DATA_SWTS_MASK                      (0x01UL << TSI0_DATA_SWTS_SHIFT)                    /*!< TSI0_DATA: SWTS Mask                    */
#define TSI0_DATA_SWTS_SHIFT                     22                                                  /*!< TSI0_DATA: SWTS Position                */
#define TSI0_DATA_DMAEN_MASK                     (0x01UL << TSI0_DATA_DMAEN_SHIFT)                   /*!< TSI0_DATA: DMAEN Mask                   */
#define TSI0_DATA_DMAEN_SHIFT                    23                                                  /*!< TSI0_DATA: DMAEN Position               */
#define TSI0_DATA_TSICH_MASK                     (0x0FUL << TSI0_DATA_TSICH_SHIFT)                   /*!< TSI0_DATA: TSICH Mask                   */
#define TSI0_DATA_TSICH_SHIFT                    28                                                  /*!< TSI0_DATA: TSICH Position               */
#define TSI0_DATA_TSICH(x)                       (((x)<<TSI0_DATA_TSICH_SHIFT)&TSI0_DATA_TSICH_MASK) /*!< TSI0_DATA                               */

/* ------- TSI0_TSHD                                ------ */
#define TSI0_TSHD_THRESL_MASK                    (0xFFFFUL << TSI0_TSHD_THRESL_SHIFT)                /*!< TSI0_TSHD: THRESL Mask                  */
#define TSI0_TSHD_THRESL_SHIFT                   0                                                   /*!< TSI0_TSHD: THRESL Position              */
#define TSI0_TSHD_THRESL(x)                      (((x)<<TSI0_TSHD_THRESL_SHIFT)&TSI0_TSHD_THRESL_MASK) /*!< TSI0_TSHD                               */
#define TSI0_TSHD_THRESH_MASK                    (0xFFFFUL << TSI0_TSHD_THRESH_SHIFT)                /*!< TSI0_TSHD: THRESH Mask                  */
#define TSI0_TSHD_THRESH_SHIFT                   16                                                  /*!< TSI0_TSHD: THRESH Position              */
#define TSI0_TSHD_THRESH(x)                      (((x)<<TSI0_TSHD_THRESH_SHIFT)&TSI0_TSHD_THRESH_MASK) /*!< TSI0_TSHD                               */

/* -------------------------------------------------------------------------------- */
/* -----------     'TSI0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define TSI0_GENCS                     (TSI0->GENCS)
#define TSI0_DATA                      (TSI0->DATA)
#define TSI0_TSHD                      (TSI0->TSHD)

/* ================================================================================ */
/* ================           UART0 (file:UART0_4)                 ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter (UART)
 */
typedef struct {                                /*!<       UART0 Structure                                              */
   __IO uint8_t   BDH;                          /*!< 0000: UART Baud Rate Register: High                                */
   __IO uint8_t   BDL;                          /*!< 0001: UART Baud Rate Register: Low                                 */
   __IO uint8_t   C1;                           /*!< 0002: UART Control Register 1                                      */
   __IO uint8_t   C2;                           /*!< 0003: UART Control Register 2                                      */
   __I  uint8_t   S1;                           /*!< 0004: UART Status Register 1                                       */
   __IO uint8_t   S2;                           /*!< 0005: UART Status Register 2                                       */
   __IO uint8_t   C3;                           /*!< 0006: UART Control Register 3                                      */
   __IO uint8_t   D;                            /*!< 0007: UART Data Register                                           */
   __IO uint8_t   MA1;                          /*!< 0008: UART Match Address Registers 1                               */
   __IO uint8_t   MA2;                          /*!< 0009: UART Match Address Registers 2                               */
   __IO uint8_t   C4;                           /*!< 000A: UART Control Register 4                                      */
   __IO uint8_t   C5;                           /*!< 000B: UART Control Register 5                                      */
} UART0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'UART0' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- UART0_BDH                                ------ */
#define UART_BDH_SBR_MASK                        (0x1FUL << UART_BDH_SBR_SHIFT)                      /*!< UART0_BDH: SBR Mask                     */
#define UART_BDH_SBR_SHIFT                       0                                                   /*!< UART0_BDH: SBR Position                 */
#define UART_BDH_SBR(x)                          (((x)<<UART_BDH_SBR_SHIFT)&UART_BDH_SBR_MASK)       /*!< UART0_BDH                               */
#define UART_BDH_SBNS_MASK                       (0x01UL << UART_BDH_SBNS_SHIFT)                     /*!< UART0_BDH: SBNS Mask                    */
#define UART_BDH_SBNS_SHIFT                      5                                                   /*!< UART0_BDH: SBNS Position                */
#define UART_BDH_RXEDGIE_MASK                    (0x01UL << UART_BDH_RXEDGIE_SHIFT)                  /*!< UART0_BDH: RXEDGIE Mask                 */
#define UART_BDH_RXEDGIE_SHIFT                   6                                                   /*!< UART0_BDH: RXEDGIE Position             */
#define UART_BDH_LBKDIE_MASK                     (0x01UL << UART_BDH_LBKDIE_SHIFT)                   /*!< UART0_BDH: LBKDIE Mask                  */
#define UART_BDH_LBKDIE_SHIFT                    7                                                   /*!< UART0_BDH: LBKDIE Position              */

/* ------- UART0_BDL                                ------ */
#define UART_BDL_SBR_MASK                        (0xFFUL << UART_BDL_SBR_SHIFT)                      /*!< UART0_BDL: SBR Mask                     */
#define UART_BDL_SBR_SHIFT                       0                                                   /*!< UART0_BDL: SBR Position                 */
#define UART_BDL_SBR(x)                          (((x)<<UART_BDL_SBR_SHIFT)&UART_BDL_SBR_MASK)       /*!< UART0_BDL                               */

/* ------- UART0_C1                                 ------ */
#define UART_C1_PT_MASK                          (0x01UL << UART_C1_PT_SHIFT)                        /*!< UART0_C1: PT Mask                       */
#define UART_C1_PT_SHIFT                         0                                                   /*!< UART0_C1: PT Position                   */
#define UART_C1_PE_MASK                          (0x01UL << UART_C1_PE_SHIFT)                        /*!< UART0_C1: PE Mask                       */
#define UART_C1_PE_SHIFT                         1                                                   /*!< UART0_C1: PE Position                   */
#define UART_C1_ILT_MASK                         (0x01UL << UART_C1_ILT_SHIFT)                       /*!< UART0_C1: ILT Mask                      */
#define UART_C1_ILT_SHIFT                        2                                                   /*!< UART0_C1: ILT Position                  */
#define UART_C1_WAKE_MASK                        (0x01UL << UART_C1_WAKE_SHIFT)                      /*!< UART0_C1: WAKE Mask                     */
#define UART_C1_WAKE_SHIFT                       3                                                   /*!< UART0_C1: WAKE Position                 */
#define UART_C1_M_MASK                           (0x01UL << UART_C1_M_SHIFT)                         /*!< UART0_C1: M Mask                        */
#define UART_C1_M_SHIFT                          4                                                   /*!< UART0_C1: M Position                    */
#define UART_C1_RSRC_MASK                        (0x01UL << UART_C1_RSRC_SHIFT)                      /*!< UART0_C1: RSRC Mask                     */
#define UART_C1_RSRC_SHIFT                       5                                                   /*!< UART0_C1: RSRC Position                 */
#define UART_C1_DOZEEN_MASK                      (0x01UL << UART_C1_DOZEEN_SHIFT)                    /*!< UART0_C1: DOZEEN Mask                   */
#define UART_C1_DOZEEN_SHIFT                     6                                                   /*!< UART0_C1: DOZEEN Position               */
#define UART_C1_LOOPS_MASK                       (0x01UL << UART_C1_LOOPS_SHIFT)                     /*!< UART0_C1: LOOPS Mask                    */
#define UART_C1_LOOPS_SHIFT                      7                                                   /*!< UART0_C1: LOOPS Position                */

/* ------- UART0_C2                                 ------ */
#define UART_C2_SBK_MASK                         (0x01UL << UART_C2_SBK_SHIFT)                       /*!< UART0_C2: SBK Mask                      */
#define UART_C2_SBK_SHIFT                        0                                                   /*!< UART0_C2: SBK Position                  */
#define UART_C2_RWU_MASK                         (0x01UL << UART_C2_RWU_SHIFT)                       /*!< UART0_C2: RWU Mask                      */
#define UART_C2_RWU_SHIFT                        1                                                   /*!< UART0_C2: RWU Position                  */
#define UART_C2_RE_MASK                          (0x01UL << UART_C2_RE_SHIFT)                        /*!< UART0_C2: RE Mask                       */
#define UART_C2_RE_SHIFT                         2                                                   /*!< UART0_C2: RE Position                   */
#define UART_C2_TE_MASK                          (0x01UL << UART_C2_TE_SHIFT)                        /*!< UART0_C2: TE Mask                       */
#define UART_C2_TE_SHIFT                         3                                                   /*!< UART0_C2: TE Position                   */
#define UART_C2_ILIE_MASK                        (0x01UL << UART_C2_ILIE_SHIFT)                      /*!< UART0_C2: ILIE Mask                     */
#define UART_C2_ILIE_SHIFT                       4                                                   /*!< UART0_C2: ILIE Position                 */
#define UART_C2_RIE_MASK                         (0x01UL << UART_C2_RIE_SHIFT)                       /*!< UART0_C2: RIE Mask                      */
#define UART_C2_RIE_SHIFT                        5                                                   /*!< UART0_C2: RIE Position                  */
#define UART_C2_TCIE_MASK                        (0x01UL << UART_C2_TCIE_SHIFT)                      /*!< UART0_C2: TCIE Mask                     */
#define UART_C2_TCIE_SHIFT                       6                                                   /*!< UART0_C2: TCIE Position                 */
#define UART_C2_TIE_MASK                         (0x01UL << UART_C2_TIE_SHIFT)                       /*!< UART0_C2: TIE Mask                      */
#define UART_C2_TIE_SHIFT                        7                                                   /*!< UART0_C2: TIE Position                  */

/* ------- UART0_S1                                 ------ */
#define UART_S1_PF_MASK                          (0x01UL << UART_S1_PF_SHIFT)                        /*!< UART0_S1: PF Mask                       */
#define UART_S1_PF_SHIFT                         0                                                   /*!< UART0_S1: PF Position                   */
#define UART_S1_FE_MASK                          (0x01UL << UART_S1_FE_SHIFT)                        /*!< UART0_S1: FE Mask                       */
#define UART_S1_FE_SHIFT                         1                                                   /*!< UART0_S1: FE Position                   */
#define UART_S1_NF_MASK                          (0x01UL << UART_S1_NF_SHIFT)                        /*!< UART0_S1: NF Mask                       */
#define UART_S1_NF_SHIFT                         2                                                   /*!< UART0_S1: NF Position                   */
#define UART_S1_OR_MASK                          (0x01UL << UART_S1_OR_SHIFT)                        /*!< UART0_S1: OR Mask                       */
#define UART_S1_OR_SHIFT                         3                                                   /*!< UART0_S1: OR Position                   */
#define UART_S1_IDLE_MASK                        (0x01UL << UART_S1_IDLE_SHIFT)                      /*!< UART0_S1: IDLE Mask                     */
#define UART_S1_IDLE_SHIFT                       4                                                   /*!< UART0_S1: IDLE Position                 */
#define UART_S1_RDRF_MASK                        (0x01UL << UART_S1_RDRF_SHIFT)                      /*!< UART0_S1: RDRF Mask                     */
#define UART_S1_RDRF_SHIFT                       5                                                   /*!< UART0_S1: RDRF Position                 */
#define UART_S1_TC_MASK                          (0x01UL << UART_S1_TC_SHIFT)                        /*!< UART0_S1: TC Mask                       */
#define UART_S1_TC_SHIFT                         6                                                   /*!< UART0_S1: TC Position                   */
#define UART_S1_TDRE_MASK                        (0x01UL << UART_S1_TDRE_SHIFT)                      /*!< UART0_S1: TDRE Mask                     */
#define UART_S1_TDRE_SHIFT                       7                                                   /*!< UART0_S1: TDRE Position                 */

/* ------- UART0_S2                                 ------ */
#define UART_S2_RAF_MASK                         (0x01UL << UART_S2_RAF_SHIFT)                       /*!< UART0_S2: RAF Mask                      */
#define UART_S2_RAF_SHIFT                        0                                                   /*!< UART0_S2: RAF Position                  */
#define UART_S2_LBKDE_MASK                       (0x01UL << UART_S2_LBKDE_SHIFT)                     /*!< UART0_S2: LBKDE Mask                    */
#define UART_S2_LBKDE_SHIFT                      1                                                   /*!< UART0_S2: LBKDE Position                */
#define UART_S2_BRK13_MASK                       (0x01UL << UART_S2_BRK13_SHIFT)                     /*!< UART0_S2: BRK13 Mask                    */
#define UART_S2_BRK13_SHIFT                      2                                                   /*!< UART0_S2: BRK13 Position                */
#define UART_S2_RWUID_MASK                       (0x01UL << UART_S2_RWUID_SHIFT)                     /*!< UART0_S2: RWUID Mask                    */
#define UART_S2_RWUID_SHIFT                      3                                                   /*!< UART0_S2: RWUID Position                */
#define UART_S2_RXINV_MASK                       (0x01UL << UART_S2_RXINV_SHIFT)                     /*!< UART0_S2: RXINV Mask                    */
#define UART_S2_RXINV_SHIFT                      4                                                   /*!< UART0_S2: RXINV Position                */
#define UART_S2_MSBF_MASK                        (0x01UL << UART_S2_MSBF_SHIFT)                      /*!< UART0_S2: MSBF Mask                     */
#define UART_S2_MSBF_SHIFT                       5                                                   /*!< UART0_S2: MSBF Position                 */
#define UART_S2_RXEDGIF_MASK                     (0x01UL << UART_S2_RXEDGIF_SHIFT)                   /*!< UART0_S2: RXEDGIF Mask                  */
#define UART_S2_RXEDGIF_SHIFT                    6                                                   /*!< UART0_S2: RXEDGIF Position              */
#define UART_S2_LBKDIF_MASK                      (0x01UL << UART_S2_LBKDIF_SHIFT)                    /*!< UART0_S2: LBKDIF Mask                   */
#define UART_S2_LBKDIF_SHIFT                     7                                                   /*!< UART0_S2: LBKDIF Position               */

/* ------- UART0_C3                                 ------ */
#define UART_C3_PEIE_MASK                        (0x01UL << UART_C3_PEIE_SHIFT)                      /*!< UART0_C3: PEIE Mask                     */
#define UART_C3_PEIE_SHIFT                       0                                                   /*!< UART0_C3: PEIE Position                 */
#define UART_C3_FEIE_MASK                        (0x01UL << UART_C3_FEIE_SHIFT)                      /*!< UART0_C3: FEIE Mask                     */
#define UART_C3_FEIE_SHIFT                       1                                                   /*!< UART0_C3: FEIE Position                 */
#define UART_C3_NEIE_MASK                        (0x01UL << UART_C3_NEIE_SHIFT)                      /*!< UART0_C3: NEIE Mask                     */
#define UART_C3_NEIE_SHIFT                       2                                                   /*!< UART0_C3: NEIE Position                 */
#define UART_C3_ORIE_MASK                        (0x01UL << UART_C3_ORIE_SHIFT)                      /*!< UART0_C3: ORIE Mask                     */
#define UART_C3_ORIE_SHIFT                       3                                                   /*!< UART0_C3: ORIE Position                 */
#define UART_C3_TXINV_MASK                       (0x01UL << UART_C3_TXINV_SHIFT)                     /*!< UART0_C3: TXINV Mask                    */
#define UART_C3_TXINV_SHIFT                      4                                                   /*!< UART0_C3: TXINV Position                */
#define UART_C3_TXDIR_MASK                       (0x01UL << UART_C3_TXDIR_SHIFT)                     /*!< UART0_C3: TXDIR Mask                    */
#define UART_C3_TXDIR_SHIFT                      5                                                   /*!< UART0_C3: TXDIR Position                */
#define UART_C3_R9T8_MASK                        (0x01UL << UART_C3_R9T8_SHIFT)                      /*!< UART0_C3: R9T8 Mask                     */
#define UART_C3_R9T8_SHIFT                       6                                                   /*!< UART0_C3: R9T8 Position                 */
#define UART_C3_R8T9_MASK                        (0x01UL << UART_C3_R8T9_SHIFT)                      /*!< UART0_C3: R8T9 Mask                     */
#define UART_C3_R8T9_SHIFT                       7                                                   /*!< UART0_C3: R8T9 Position                 */

/* ------- UART0_D                                  ------ */
#define UART_D_DATA_MASK                         (0xFFUL << UART_D_DATA_SHIFT)                       /*!< UART0_D: DATA Mask                      */
#define UART_D_DATA_SHIFT                        0                                                   /*!< UART0_D: DATA Position                  */
#define UART_D_DATA(x)                           (((x)<<UART_D_DATA_SHIFT)&UART_D_DATA_MASK)         /*!< UART0_D                                 */

/* ------- UART0_MA                                 ------ */
#define UART_MA_MA_MASK                          (0xFFUL << UART_MA_MA_SHIFT)                        /*!< UART0_MA: MA Mask                       */
#define UART_MA_MA_SHIFT                         0                                                   /*!< UART0_MA: MA Position                   */
#define UART_MA_MA(x)                            (((x)<<UART_MA_MA_SHIFT)&UART_MA_MA_MASK)           /*!< UART0_MA                                */

/* ------- UART0_C4                                 ------ */
#define UART_C4_OSR_MASK                         (0x1FUL << UART_C4_OSR_SHIFT)                       /*!< UART0_C4: OSR Mask                      */
#define UART_C4_OSR_SHIFT                        0                                                   /*!< UART0_C4: OSR Position                  */
#define UART_C4_OSR(x)                           (((x)<<UART_C4_OSR_SHIFT)&UART_C4_OSR_MASK)         /*!< UART0_C4                                */
#define UART_C4_M10_MASK                         (0x01UL << UART_C4_M10_SHIFT)                       /*!< UART0_C4: M10 Mask                      */
#define UART_C4_M10_SHIFT                        5                                                   /*!< UART0_C4: M10 Position                  */
#define UART_C4_MAEN2_MASK                       (0x01UL << UART_C4_MAEN2_SHIFT)                     /*!< UART0_C4: MAEN2 Mask                    */
#define UART_C4_MAEN2_SHIFT                      6                                                   /*!< UART0_C4: MAEN2 Position                */
#define UART_C4_MAEN1_MASK                       (0x01UL << UART_C4_MAEN1_SHIFT)                     /*!< UART0_C4: MAEN1 Mask                    */
#define UART_C4_MAEN1_SHIFT                      7                                                   /*!< UART0_C4: MAEN1 Position                */

/* ------- UART0_C5                                 ------ */
#define UART_C5_RESYNCDIS_MASK                   (0x01UL << UART_C5_RESYNCDIS_SHIFT)                 /*!< UART0_C5: RESYNCDIS Mask                */
#define UART_C5_RESYNCDIS_SHIFT                  0                                                   /*!< UART0_C5: RESYNCDIS Position            */
#define UART_C5_BOTHEDGE_MASK                    (0x01UL << UART_C5_BOTHEDGE_SHIFT)                  /*!< UART0_C5: BOTHEDGE Mask                 */
#define UART_C5_BOTHEDGE_SHIFT                   1                                                   /*!< UART0_C5: BOTHEDGE Position             */
#define UART_C5_RDMAE_MASK                       (0x01UL << UART_C5_RDMAE_SHIFT)                     /*!< UART0_C5: RDMAE Mask                    */
#define UART_C5_RDMAE_SHIFT                      5                                                   /*!< UART0_C5: RDMAE Position                */
#define UART_C5_TDMAE_MASK                       (0x01UL << UART_C5_TDMAE_SHIFT)                     /*!< UART0_C5: TDMAE Mask                    */
#define UART_C5_TDMAE_SHIFT                      7                                                   /*!< UART0_C5: TDMAE Position                */

/* -------------------------------------------------------------------------------- */
/* -----------     'UART0' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define UART0_BDH                      (UART0->BDH)
#define UART0_BDL                      (UART0->BDL)
#define UART0_C1                       (UART0->C1)
#define UART0_C2                       (UART0->C2)
#define UART0_S1                       (UART0->S1)
#define UART0_S2                       (UART0->S2)
#define UART0_C3                       (UART0->C3)
#define UART0_D                        (UART0->D)
#define UART0_MA1                      (UART0->MA1)
#define UART0_MA2                      (UART0->MA2)
#define UART0_C4                       (UART0->C4)
#define UART0_C5                       (UART0->C5)

/* ================================================================================ */
/* ================           UART1 (file:UART1_3)                 ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter (UART)
 */
typedef struct {                                /*!<       UART1 Structure                                              */
   __IO uint8_t   BDH;                          /*!< 0000: UART Baud Rate Register: High                                */
   __IO uint8_t   BDL;                          /*!< 0001: UART Baud Rate Register: Low                                 */
   __IO uint8_t   C1;                           /*!< 0002: UART Control Register 1                                      */
   __IO uint8_t   C2;                           /*!< 0003: UART Control Register 2                                      */
   __I  uint8_t   S1;                           /*!< 0004: UART Status Register 1                                       */
   __IO uint8_t   S2;                           /*!< 0005: UART Status Register 2                                       */
   __IO uint8_t   C3;                           /*!< 0006: UART Control Register 3                                      */
   __IO uint8_t   D;                            /*!< 0007: UART Data Register                                           */
   __IO uint8_t   C4;                           /*!< 0008: UART Control Register 4                                      */
} UART1_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'UART1' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- UART1_BDH                                ------ */
#define UART1_BDH_SBR_MASK                       (0x1FUL << UART1_BDH_SBR_SHIFT)                     /*!< UART1_BDH: SBR Mask                     */
#define UART1_BDH_SBR_SHIFT                      0                                                   /*!< UART1_BDH: SBR Position                 */
#define UART1_BDH_SBR(x)                         (((x)<<UART1_BDH_SBR_SHIFT)&UART1_BDH_SBR_MASK)     /*!< UART1_BDH                               */
#define UART1_BDH_SBNS_MASK                      (0x01UL << UART1_BDH_SBNS_SHIFT)                    /*!< UART1_BDH: SBNS Mask                    */
#define UART1_BDH_SBNS_SHIFT                     5                                                   /*!< UART1_BDH: SBNS Position                */
#define UART1_BDH_RXEDGIE_MASK                   (0x01UL << UART1_BDH_RXEDGIE_SHIFT)                 /*!< UART1_BDH: RXEDGIE Mask                 */
#define UART1_BDH_RXEDGIE_SHIFT                  6                                                   /*!< UART1_BDH: RXEDGIE Position             */
#define UART1_BDH_LBKDIE_MASK                    (0x01UL << UART1_BDH_LBKDIE_SHIFT)                  /*!< UART1_BDH: LBKDIE Mask                  */
#define UART1_BDH_LBKDIE_SHIFT                   7                                                   /*!< UART1_BDH: LBKDIE Position              */

/* ------- UART1_BDL                                ------ */
#define UART1_BDL_SBR_MASK                       (0xFFUL << UART1_BDL_SBR_SHIFT)                     /*!< UART1_BDL: SBR Mask                     */
#define UART1_BDL_SBR_SHIFT                      0                                                   /*!< UART1_BDL: SBR Position                 */
#define UART1_BDL_SBR(x)                         (((x)<<UART1_BDL_SBR_SHIFT)&UART1_BDL_SBR_MASK)     /*!< UART1_BDL                               */

/* ------- UART1_C1                                 ------ */
#define UART1_C1_PT_MASK                         (0x01UL << UART1_C1_PT_SHIFT)                       /*!< UART1_C1: PT Mask                       */
#define UART1_C1_PT_SHIFT                        0                                                   /*!< UART1_C1: PT Position                   */
#define UART1_C1_PE_MASK                         (0x01UL << UART1_C1_PE_SHIFT)                       /*!< UART1_C1: PE Mask                       */
#define UART1_C1_PE_SHIFT                        1                                                   /*!< UART1_C1: PE Position                   */
#define UART1_C1_ILT_MASK                        (0x01UL << UART1_C1_ILT_SHIFT)                      /*!< UART1_C1: ILT Mask                      */
#define UART1_C1_ILT_SHIFT                       2                                                   /*!< UART1_C1: ILT Position                  */
#define UART1_C1_WAKE_MASK                       (0x01UL << UART1_C1_WAKE_SHIFT)                     /*!< UART1_C1: WAKE Mask                     */
#define UART1_C1_WAKE_SHIFT                      3                                                   /*!< UART1_C1: WAKE Position                 */
#define UART1_C1_M_MASK                          (0x01UL << UART1_C1_M_SHIFT)                        /*!< UART1_C1: M Mask                        */
#define UART1_C1_M_SHIFT                         4                                                   /*!< UART1_C1: M Position                    */
#define UART1_C1_RSRC_MASK                       (0x01UL << UART1_C1_RSRC_SHIFT)                     /*!< UART1_C1: RSRC Mask                     */
#define UART1_C1_RSRC_SHIFT                      5                                                   /*!< UART1_C1: RSRC Position                 */
#define UART1_C1_UARTSWAI_MASK                   (0x01UL << UART1_C1_UARTSWAI_SHIFT)                 /*!< UART1_C1: UARTSWAI Mask                 */
#define UART1_C1_UARTSWAI_SHIFT                  6                                                   /*!< UART1_C1: UARTSWAI Position             */
#define UART1_C1_LOOPS_MASK                      (0x01UL << UART1_C1_LOOPS_SHIFT)                    /*!< UART1_C1: LOOPS Mask                    */
#define UART1_C1_LOOPS_SHIFT                     7                                                   /*!< UART1_C1: LOOPS Position                */

/* ------- UART1_C2                                 ------ */
#define UART1_C2_SBK_MASK                        (0x01UL << UART1_C2_SBK_SHIFT)                      /*!< UART1_C2: SBK Mask                      */
#define UART1_C2_SBK_SHIFT                       0                                                   /*!< UART1_C2: SBK Position                  */
#define UART1_C2_RWU_MASK                        (0x01UL << UART1_C2_RWU_SHIFT)                      /*!< UART1_C2: RWU Mask                      */
#define UART1_C2_RWU_SHIFT                       1                                                   /*!< UART1_C2: RWU Position                  */
#define UART1_C2_RE_MASK                         (0x01UL << UART1_C2_RE_SHIFT)                       /*!< UART1_C2: RE Mask                       */
#define UART1_C2_RE_SHIFT                        2                                                   /*!< UART1_C2: RE Position                   */
#define UART1_C2_TE_MASK                         (0x01UL << UART1_C2_TE_SHIFT)                       /*!< UART1_C2: TE Mask                       */
#define UART1_C2_TE_SHIFT                        3                                                   /*!< UART1_C2: TE Position                   */
#define UART1_C2_ILIE_MASK                       (0x01UL << UART1_C2_ILIE_SHIFT)                     /*!< UART1_C2: ILIE Mask                     */
#define UART1_C2_ILIE_SHIFT                      4                                                   /*!< UART1_C2: ILIE Position                 */
#define UART1_C2_RIE_MASK                        (0x01UL << UART1_C2_RIE_SHIFT)                      /*!< UART1_C2: RIE Mask                      */
#define UART1_C2_RIE_SHIFT                       5                                                   /*!< UART1_C2: RIE Position                  */
#define UART1_C2_TCIE_MASK                       (0x01UL << UART1_C2_TCIE_SHIFT)                     /*!< UART1_C2: TCIE Mask                     */
#define UART1_C2_TCIE_SHIFT                      6                                                   /*!< UART1_C2: TCIE Position                 */
#define UART1_C2_TIE_MASK                        (0x01UL << UART1_C2_TIE_SHIFT)                      /*!< UART1_C2: TIE Mask                      */
#define UART1_C2_TIE_SHIFT                       7                                                   /*!< UART1_C2: TIE Position                  */

/* ------- UART1_S1                                 ------ */
#define UART1_S1_PF_MASK                         (0x01UL << UART1_S1_PF_SHIFT)                       /*!< UART1_S1: PF Mask                       */
#define UART1_S1_PF_SHIFT                        0                                                   /*!< UART1_S1: PF Position                   */
#define UART1_S1_FE_MASK                         (0x01UL << UART1_S1_FE_SHIFT)                       /*!< UART1_S1: FE Mask                       */
#define UART1_S1_FE_SHIFT                        1                                                   /*!< UART1_S1: FE Position                   */
#define UART1_S1_NF_MASK                         (0x01UL << UART1_S1_NF_SHIFT)                       /*!< UART1_S1: NF Mask                       */
#define UART1_S1_NF_SHIFT                        2                                                   /*!< UART1_S1: NF Position                   */
#define UART1_S1_OR_MASK                         (0x01UL << UART1_S1_OR_SHIFT)                       /*!< UART1_S1: OR Mask                       */
#define UART1_S1_OR_SHIFT                        3                                                   /*!< UART1_S1: OR Position                   */
#define UART1_S1_IDLE_MASK                       (0x01UL << UART1_S1_IDLE_SHIFT)                     /*!< UART1_S1: IDLE Mask                     */
#define UART1_S1_IDLE_SHIFT                      4                                                   /*!< UART1_S1: IDLE Position                 */
#define UART1_S1_RDRF_MASK                       (0x01UL << UART1_S1_RDRF_SHIFT)                     /*!< UART1_S1: RDRF Mask                     */
#define UART1_S1_RDRF_SHIFT                      5                                                   /*!< UART1_S1: RDRF Position                 */
#define UART1_S1_TC_MASK                         (0x01UL << UART1_S1_TC_SHIFT)                       /*!< UART1_S1: TC Mask                       */
#define UART1_S1_TC_SHIFT                        6                                                   /*!< UART1_S1: TC Position                   */
#define UART1_S1_TDRE_MASK                       (0x01UL << UART1_S1_TDRE_SHIFT)                     /*!< UART1_S1: TDRE Mask                     */
#define UART1_S1_TDRE_SHIFT                      7                                                   /*!< UART1_S1: TDRE Position                 */

/* ------- UART1_S2                                 ------ */
#define UART1_S2_RAF_MASK                        (0x01UL << UART1_S2_RAF_SHIFT)                      /*!< UART1_S2: RAF Mask                      */
#define UART1_S2_RAF_SHIFT                       0                                                   /*!< UART1_S2: RAF Position                  */
#define UART1_S2_LBKDE_MASK                      (0x01UL << UART1_S2_LBKDE_SHIFT)                    /*!< UART1_S2: LBKDE Mask                    */
#define UART1_S2_LBKDE_SHIFT                     1                                                   /*!< UART1_S2: LBKDE Position                */
#define UART1_S2_BRK13_MASK                      (0x01UL << UART1_S2_BRK13_SHIFT)                    /*!< UART1_S2: BRK13 Mask                    */
#define UART1_S2_BRK13_SHIFT                     2                                                   /*!< UART1_S2: BRK13 Position                */
#define UART1_S2_RWUID_MASK                      (0x01UL << UART1_S2_RWUID_SHIFT)                    /*!< UART1_S2: RWUID Mask                    */
#define UART1_S2_RWUID_SHIFT                     3                                                   /*!< UART1_S2: RWUID Position                */
#define UART1_S2_RXINV_MASK                      (0x01UL << UART1_S2_RXINV_SHIFT)                    /*!< UART1_S2: RXINV Mask                    */
#define UART1_S2_RXINV_SHIFT                     4                                                   /*!< UART1_S2: RXINV Position                */
#define UART1_S2_RXEDGIF_MASK                    (0x01UL << UART1_S2_RXEDGIF_SHIFT)                  /*!< UART1_S2: RXEDGIF Mask                  */
#define UART1_S2_RXEDGIF_SHIFT                   6                                                   /*!< UART1_S2: RXEDGIF Position              */
#define UART1_S2_LBKDIF_MASK                     (0x01UL << UART1_S2_LBKDIF_SHIFT)                   /*!< UART1_S2: LBKDIF Mask                   */
#define UART1_S2_LBKDIF_SHIFT                    7                                                   /*!< UART1_S2: LBKDIF Position               */

/* ------- UART1_C3                                 ------ */
#define UART1_C3_PEIE_MASK                       (0x01UL << UART1_C3_PEIE_SHIFT)                     /*!< UART1_C3: PEIE Mask                     */
#define UART1_C3_PEIE_SHIFT                      0                                                   /*!< UART1_C3: PEIE Position                 */
#define UART1_C3_FEIE_MASK                       (0x01UL << UART1_C3_FEIE_SHIFT)                     /*!< UART1_C3: FEIE Mask                     */
#define UART1_C3_FEIE_SHIFT                      1                                                   /*!< UART1_C3: FEIE Position                 */
#define UART1_C3_NEIE_MASK                       (0x01UL << UART1_C3_NEIE_SHIFT)                     /*!< UART1_C3: NEIE Mask                     */
#define UART1_C3_NEIE_SHIFT                      2                                                   /*!< UART1_C3: NEIE Position                 */
#define UART1_C3_ORIE_MASK                       (0x01UL << UART1_C3_ORIE_SHIFT)                     /*!< UART1_C3: ORIE Mask                     */
#define UART1_C3_ORIE_SHIFT                      3                                                   /*!< UART1_C3: ORIE Position                 */
#define UART1_C3_TXINV_MASK                      (0x01UL << UART1_C3_TXINV_SHIFT)                    /*!< UART1_C3: TXINV Mask                    */
#define UART1_C3_TXINV_SHIFT                     4                                                   /*!< UART1_C3: TXINV Position                */
#define UART1_C3_TXDIR_MASK                      (0x01UL << UART1_C3_TXDIR_SHIFT)                    /*!< UART1_C3: TXDIR Mask                    */
#define UART1_C3_TXDIR_SHIFT                     5                                                   /*!< UART1_C3: TXDIR Position                */
#define UART1_C3_T8_MASK                         (0x01UL << UART1_C3_T8_SHIFT)                       /*!< UART1_C3: T8 Mask                       */
#define UART1_C3_T8_SHIFT                        6                                                   /*!< UART1_C3: T8 Position                   */
#define UART1_C3_R8_MASK                         (0x01UL << UART1_C3_R8_SHIFT)                       /*!< UART1_C3: R8 Mask                       */
#define UART1_C3_R8_SHIFT                        7                                                   /*!< UART1_C3: R8 Position                   */

/* ------- UART1_D                                  ------ */
#define UART1_D_DATA_MASK                        (0xFFUL << UART1_D_DATA_SHIFT)                      /*!< UART1_D: DATA Mask                      */
#define UART1_D_DATA_SHIFT                       0                                                   /*!< UART1_D: DATA Position                  */
#define UART1_D_DATA(x)                          (((x)<<UART1_D_DATA_SHIFT)&UART1_D_DATA_MASK)       /*!< UART1_D                                 */

/* ------- UART1_C4                                 ------ */
#define UART1_C4_RDMAS_MASK                      (0x01UL << UART1_C4_RDMAS_SHIFT)                    /*!< UART1_C4: RDMAS Mask                    */
#define UART1_C4_RDMAS_SHIFT                     5                                                   /*!< UART1_C4: RDMAS Position                */
#define UART1_C4_TDMAS_MASK                      (0x01UL << UART1_C4_TDMAS_SHIFT)                    /*!< UART1_C4: TDMAS Mask                    */
#define UART1_C4_TDMAS_SHIFT                     7                                                   /*!< UART1_C4: TDMAS Position                */

/* -------------------------------------------------------------------------------- */
/* -----------     'UART1' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define UART1_BDH                      (UART1->BDH)
#define UART1_BDL                      (UART1->BDL)
#define UART1_C1                       (UART1->C1)
#define UART1_C2                       (UART1->C2)
#define UART1_S1                       (UART1->S1)
#define UART1_S2                       (UART1->S2)
#define UART1_C3                       (UART1->C3)
#define UART1_D                        (UART1->D)
#define UART1_C4                       (UART1->C4)

/* ================================================================================ */
/* ================           UART2 (derived from UART1)           ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter (UART) (UART2)
 */
typedef UART1_Type UART2_Type;  /*!< UART2 Structure                                             */


/* -------------------------------------------------------------------------------- */
/* -----------     'UART2' Register Access macros                       ----------- */
/* -------------------------------------------------------------------------------- */

#define UART2_BDH                      (UART2->BDH)
#define UART2_BDL                      (UART2->BDL)
#define UART2_C1                       (UART2->C1)
#define UART2_C2                       (UART2->C2)
#define UART2_S1                       (UART2->S1)
#define UART2_S2                       (UART2->S2)
#define UART2_C3                       (UART2->C3)
#define UART2_D                        (UART2->D)
#define UART2_C4                       (UART2->C4)

/* ================================================================================ */
/* ================           USB0 (file:USB0_MK_MKL)              ================ */
/* ================================================================================ */

/**
 * @brief Universal Serial Bus, OTG Capable Controller (USB0)
 */
typedef struct {                                /*!<       USB0 Structure                                               */
   __I  uint8_t   PERID;                        /*!< 0000: Peripheral ID Register                                       */
   __I  uint8_t   RESERVED0[3];                 /*!< 0001:                                                              */
   __I  uint8_t   IDCOMP;                       /*!< 0004: Peripheral ID Complement Register                            */
   __I  uint8_t   RESERVED1[3];                 /*!< 0005:                                                              */
   __I  uint8_t   REV;                          /*!< 0008: Peripheral Revision Register                                 */
   __I  uint8_t   RESERVED2[3];                 /*!< 0009:                                                              */
   __I  uint8_t   ADDINFO;                      /*!< 000C: Peripheral Additional Info Register                          */
   __I  uint8_t   RESERVED3[3];                 /*!< 000D:                                                              */
   __IO uint8_t   OTGISTAT;                     /*!< 0010: OTG Interrupt Status Register                                */
   __I  uint8_t   RESERVED4[3];                 /*!< 0011:                                                              */
   __IO uint8_t   OTGICR;                       /*!< 0014: OTG Interrupt Control Register                               */
   __I  uint8_t   RESERVED5[3];                 /*!< 0015:                                                              */
   __IO uint8_t   OTGSTAT;                      /*!< 0018: OTG Status Register                                          */
   __I  uint8_t   RESERVED6[3];                 /*!< 0019:                                                              */
   __IO uint8_t   OTGCTL;                       /*!< 001C: OTG Control Register                                         */
   __I  uint8_t   RESERVED7[99];                /*!< 001D:                                                              */
   __IO uint8_t   ISTAT;                        /*!< 0080: Interrupt Status Register                                    */
   __I  uint8_t   RESERVED8[3];                 /*!< 0081:                                                              */
   __IO uint8_t   INTEN;                        /*!< 0084: Interrupt Enable Register                                    */
   __I  uint8_t   RESERVED9[3];                 /*!< 0085:                                                              */
   __IO uint8_t   ERRSTAT;                      /*!< 0088: Error Interrupt Status Register                              */
   __I  uint8_t   RESERVED10[3];                /*!< 0089:                                                              */
   __IO uint8_t   ERREN;                        /*!< 008C: Error Interrupt Enable Register                              */
   __I  uint8_t   RESERVED11[3];                /*!< 008D:                                                              */
   __I  uint8_t   STAT;                         /*!< 0090: Status Register                                              */
   __I  uint8_t   RESERVED12[3];                /*!< 0091:                                                              */
   __IO uint8_t   CTL;                          /*!< 0094: Control register                                             */
   __I  uint8_t   RESERVED13[3];                /*!< 0095:                                                              */
   __IO uint8_t   ADDR;                         /*!< 0098: Address Register                                             */
   __I  uint8_t   RESERVED14[3];                /*!< 0099:                                                              */
   __IO uint8_t   BDTPAGE1;                     /*!< 009C: BDT Page Register 1                                          */
   __I  uint8_t   RESERVED15[3];                /*!< 009D:                                                              */
   __IO uint8_t   FRMNUML;                      /*!< 00A0: Frame Number Register Low                                    */
   __I  uint8_t   RESERVED16[3];                /*!< 00A1:                                                              */
   __IO uint8_t   FRMNUMH;                      /*!< 00A4: Frame Number Register High                                   */
   __I  uint8_t   RESERVED17[3];                /*!< 00A5:                                                              */
   __IO uint8_t   TOKEN;                        /*!< 00A8: Token Register                                               */
   __I  uint8_t   RESERVED18[3];                /*!< 00A9:                                                              */
   __IO uint8_t   SOFTHLD;                      /*!< 00AC: SOF Threshold Register                                       */
   __I  uint8_t   RESERVED19[3];                /*!< 00AD:                                                              */
   __IO uint8_t   BDTPAGE2;                     /*!< 00B0: BDT Page Register 2                                          */
   __I  uint8_t   RESERVED20[3];                /*!< 00B1:                                                              */
   __IO uint8_t   BDTPAGE3;                     /*!< 00B4: BDT Page Register 3                                          */
   __I  uint8_t   RESERVED21[11];               /*!< 00B5:                                                              */
   struct { /* (cluster) */                     /*!< 00C0: (size=0x0040, 64)                                            */
      __IO uint8_t   ENDPT;                     /*!< 00C0: Endpoint Control Register                                    */
      __I  uint8_t   RESERVED0[3];              /*!< 00C1:                                                              */
   } ENDPOINT[16];
   __IO uint8_t   USBCTRL;                      /*!< 0100: USB Control Register                                         */
   __I  uint8_t   RESERVED22[3];                /*!< 0101:                                                              */
   __I  uint8_t   OBSERVE;                      /*!< 0104: USB OTG Observe Register                                     */
   __I  uint8_t   RESERVED23[3];                /*!< 0105:                                                              */
   __IO uint8_t   CONTROL;                      /*!< 0108: USB OTG Control Register                                     */
   __I  uint8_t   RESERVED24[3];                /*!< 0109:                                                              */
   __IO uint8_t   USBTRC0;                      /*!< 010C: USB Transceiver Control Register 0                           */
   __I  uint8_t   RESERVED25[7];                /*!< 010D:                                                              */
   __IO uint8_t   USBFRMADJUST;                 /*!< 0114: Frame Adjust Register                                        */
} USB0_Type;


/* -------------------------------------------------------------------------------- */
/* -----------     'USB0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */


/* ------- USB0_PERID                               ------ */
#define USB0_PERID_ID_MASK                       (0x3FUL << USB0_PERID_ID_SHIFT)                     /*!< USB0_PERID: ID Mask                     */
#define USB0_PERID_ID_SHIFT                      0                                                   /*!< USB0_PERID: ID Position                 */
#define USB0_PERID_ID(x)                         (((x)<<USB0_PERID_ID_SHIFT)&USB0_PERID_ID_MASK)     /*!< USB0_PERID                              */

/* ------- USB0_IDCOMP                              ------ */
#define USB0_IDCOMP_NID_MASK                     (0x3FUL << USB0_IDCOMP_NID_SHIFT)                   /*!< USB0_IDCOMP: NID Mask                   */
#define USB0_IDCOMP_NID_SHIFT                    0                                                   /*!< USB0_IDCOMP: NID Position               */
#define USB0_IDCOMP_NID(x)                       (((x)<<USB0_IDCOMP_NID_SHIFT)&USB0_IDCOMP_NID_MASK) /*!< USB0_IDCOMP                             */

/* ------- USB0_REV                                 ------ */
#define USB0_REV_REV_MASK                        (0xFFUL << USB0_REV_REV_SHIFT)                      /*!< USB0_REV: REV Mask                      */
#define USB0_REV_REV_SHIFT                       0                                                   /*!< USB0_REV: REV Position                  */
#define USB0_REV_REV(x)                          (((x)<<USB0_REV_REV_SHIFT)&USB0_REV_REV_MASK)       /*!< USB0_REV                                */

/* ------- USB0_ADDINFO                             ------ */
#define USB0_ADDINFO_IEHOST_MASK                 (0x01UL << USB0_ADDINFO_IEHOST_SHIFT)               /*!< USB0_ADDINFO: IEHOST Mask               */
#define USB0_ADDINFO_IEHOST_SHIFT                0                                                   /*!< USB0_ADDINFO: IEHOST Position           */
#define USB0_ADDINFO_IRQNUM_MASK                 (0x1FUL << USB0_ADDINFO_IRQNUM_SHIFT)               /*!< USB0_ADDINFO: IRQNUM Mask               */
#define USB0_ADDINFO_IRQNUM_SHIFT                3                                                   /*!< USB0_ADDINFO: IRQNUM Position           */
#define USB0_ADDINFO_IRQNUM(x)                   (((x)<<USB0_ADDINFO_IRQNUM_SHIFT)&USB0_ADDINFO_IRQNUM_MASK) /*!< USB0_ADDINFO                            */

/* ------- USB0_OTGISTAT                            ------ */
#define USB0_OTGISTAT_AVBUSCHG_MASK              (0x01UL << USB0_OTGISTAT_AVBUSCHG_SHIFT)            /*!< USB0_OTGISTAT: AVBUSCHG Mask            */
#define USB0_OTGISTAT_AVBUSCHG_SHIFT             0                                                   /*!< USB0_OTGISTAT: AVBUSCHG Position        */
#define USB0_OTGISTAT_B_SESS_CHG_MASK            (0x01UL << USB0_OTGISTAT_B_SESS_CHG_SHIFT)          /*!< USB0_OTGISTAT: B_SESS_CHG Mask          */
#define USB0_OTGISTAT_B_SESS_CHG_SHIFT           2                                                   /*!< USB0_OTGISTAT: B_SESS_CHG Position      */
#define USB0_OTGISTAT_SESSVLDCHG_MASK            (0x01UL << USB0_OTGISTAT_SESSVLDCHG_SHIFT)          /*!< USB0_OTGISTAT: SESSVLDCHG Mask          */
#define USB0_OTGISTAT_SESSVLDCHG_SHIFT           3                                                   /*!< USB0_OTGISTAT: SESSVLDCHG Position      */
#define USB0_OTGISTAT_LINE_STATE_CHG_MASK        (0x01UL << USB0_OTGISTAT_LINE_STATE_CHG_SHIFT)      /*!< USB0_OTGISTAT: LINE_STATE_CHG Mask      */
#define USB0_OTGISTAT_LINE_STATE_CHG_SHIFT       5                                                   /*!< USB0_OTGISTAT: LINE_STATE_CHG Position  */
#define USB0_OTGISTAT_ONEMSEC_MASK               (0x01UL << USB0_OTGISTAT_ONEMSEC_SHIFT)             /*!< USB0_OTGISTAT: ONEMSEC Mask             */
#define USB0_OTGISTAT_ONEMSEC_SHIFT              6                                                   /*!< USB0_OTGISTAT: ONEMSEC Position         */
#define USB0_OTGISTAT_IDCHG_MASK                 (0x01UL << USB0_OTGISTAT_IDCHG_SHIFT)               /*!< USB0_OTGISTAT: IDCHG Mask               */
#define USB0_OTGISTAT_IDCHG_SHIFT                7                                                   /*!< USB0_OTGISTAT: IDCHG Position           */

/* ------- USB0_OTGICR                              ------ */
#define USB0_OTGICR_AVBUSEN_MASK                 (0x01UL << USB0_OTGICR_AVBUSEN_SHIFT)               /*!< USB0_OTGICR: AVBUSEN Mask               */
#define USB0_OTGICR_AVBUSEN_SHIFT                0                                                   /*!< USB0_OTGICR: AVBUSEN Position           */
#define USB0_OTGICR_BSESSEN_MASK                 (0x01UL << USB0_OTGICR_BSESSEN_SHIFT)               /*!< USB0_OTGICR: BSESSEN Mask               */
#define USB0_OTGICR_BSESSEN_SHIFT                2                                                   /*!< USB0_OTGICR: BSESSEN Position           */
#define USB0_OTGICR_SESSVLDEN_MASK               (0x01UL << USB0_OTGICR_SESSVLDEN_SHIFT)             /*!< USB0_OTGICR: SESSVLDEN Mask             */
#define USB0_OTGICR_SESSVLDEN_SHIFT              3                                                   /*!< USB0_OTGICR: SESSVLDEN Position         */
#define USB0_OTGICR_LINESTATEEN_MASK             (0x01UL << USB0_OTGICR_LINESTATEEN_SHIFT)           /*!< USB0_OTGICR: LINESTATEEN Mask           */
#define USB0_OTGICR_LINESTATEEN_SHIFT            5                                                   /*!< USB0_OTGICR: LINESTATEEN Position       */
#define USB0_OTGICR_ONEMSECEN_MASK               (0x01UL << USB0_OTGICR_ONEMSECEN_SHIFT)             /*!< USB0_OTGICR: ONEMSECEN Mask             */
#define USB0_OTGICR_ONEMSECEN_SHIFT              6                                                   /*!< USB0_OTGICR: ONEMSECEN Position         */
#define USB0_OTGICR_IDEN_MASK                    (0x01UL << USB0_OTGICR_IDEN_SHIFT)                  /*!< USB0_OTGICR: IDEN Mask                  */
#define USB0_OTGICR_IDEN_SHIFT                   7                                                   /*!< USB0_OTGICR: IDEN Position              */

/* ------- USB0_OTGSTAT                             ------ */
#define USB0_OTGSTAT_AVBUSVLD_MASK               (0x01UL << USB0_OTGSTAT_AVBUSVLD_SHIFT)             /*!< USB0_OTGSTAT: AVBUSVLD Mask             */
#define USB0_OTGSTAT_AVBUSVLD_SHIFT              0                                                   /*!< USB0_OTGSTAT: AVBUSVLD Position         */
#define USB0_OTGSTAT_BSESSEND_MASK               (0x01UL << USB0_OTGSTAT_BSESSEND_SHIFT)             /*!< USB0_OTGSTAT: BSESSEND Mask             */
#define USB0_OTGSTAT_BSESSEND_SHIFT              2                                                   /*!< USB0_OTGSTAT: BSESSEND Position         */
#define USB0_OTGSTAT_SESS_VLD_MASK               (0x01UL << USB0_OTGSTAT_SESS_VLD_SHIFT)             /*!< USB0_OTGSTAT: SESS_VLD Mask             */
#define USB0_OTGSTAT_SESS_VLD_SHIFT              3                                                   /*!< USB0_OTGSTAT: SESS_VLD Position         */
#define USB0_OTGSTAT_LINESTATESTABLE_MASK        (0x01UL << USB0_OTGSTAT_LINESTATESTABLE_SHIFT)      /*!< USB0_OTGSTAT: LINESTATESTABLE Mask      */
#define USB0_OTGSTAT_LINESTATESTABLE_SHIFT       5                                                   /*!< USB0_OTGSTAT: LINESTATESTABLE Position  */
#define USB0_OTGSTAT_ONEMSECEN_MASK              (0x01UL << USB0_OTGSTAT_ONEMSECEN_SHIFT)            /*!< USB0_OTGSTAT: ONEMSECEN Mask            */
#define USB0_OTGSTAT_ONEMSECEN_SHIFT             6                                                   /*!< USB0_OTGSTAT: ONEMSECEN Position        */
#define USB0_OTGSTAT_ID_MASK                     (0x01UL << USB0_OTGSTAT_ID_SHIFT)                   /*!< USB0_OTGSTAT: ID Mask                   */
#define USB0_OTGSTAT_ID_SHIFT                    7                                                   /*!< USB0_OTGSTAT: ID Position               */

/* ------- USB0_OTGCTL                              ------ */
#define USB0_OTGCTL_OTGEN_MASK                   (0x01UL << USB0_OTGCTL_OTGEN_SHIFT)                 /*!< USB0_OTGCTL: OTGEN Mask                 */
#define USB0_OTGCTL_OTGEN_SHIFT                  2                                                   /*!< USB0_OTGCTL: OTGEN Position             */
#define USB0_OTGCTL_DMLOW_MASK                   (0x01UL << USB0_OTGCTL_DMLOW_SHIFT)                 /*!< USB0_OTGCTL: DMLOW Mask                 */
#define USB0_OTGCTL_DMLOW_SHIFT                  4                                                   /*!< USB0_OTGCTL: DMLOW Position             */
#define USB0_OTGCTL_DPLOW_MASK                   (0x01UL << USB0_OTGCTL_DPLOW_SHIFT)                 /*!< USB0_OTGCTL: DPLOW Mask                 */
#define USB0_OTGCTL_DPLOW_SHIFT                  5                                                   /*!< USB0_OTGCTL: DPLOW Position             */
#define USB0_OTGCTL_DPHIGH_MASK                  (0x01UL << USB0_OTGCTL_DPHIGH_SHIFT)                /*!< USB0_OTGCTL: DPHIGH Mask                */
#define USB0_OTGCTL_DPHIGH_SHIFT                 7                                                   /*!< USB0_OTGCTL: DPHIGH Position            */

/* ------- USB0_ISTAT                               ------ */
#define USB0_ISTAT_USBRST_MASK                   (0x01UL << USB0_ISTAT_USBRST_SHIFT)                 /*!< USB0_ISTAT: USBRST Mask                 */
#define USB0_ISTAT_USBRST_SHIFT                  0                                                   /*!< USB0_ISTAT: USBRST Position             */
#define USB0_ISTAT_ERROR_MASK                    (0x01UL << USB0_ISTAT_ERROR_SHIFT)                  /*!< USB0_ISTAT: ERROR Mask                  */
#define USB0_ISTAT_ERROR_SHIFT                   1                                                   /*!< USB0_ISTAT: ERROR Position              */
#define USB0_ISTAT_SOFTOK_MASK                   (0x01UL << USB0_ISTAT_SOFTOK_SHIFT)                 /*!< USB0_ISTAT: SOFTOK Mask                 */
#define USB0_ISTAT_SOFTOK_SHIFT                  2                                                   /*!< USB0_ISTAT: SOFTOK Position             */
#define USB0_ISTAT_TOKDNE_MASK                   (0x01UL << USB0_ISTAT_TOKDNE_SHIFT)                 /*!< USB0_ISTAT: TOKDNE Mask                 */
#define USB0_ISTAT_TOKDNE_SHIFT                  3                                                   /*!< USB0_ISTAT: TOKDNE Position             */
#define USB0_ISTAT_SLEEP_MASK                    (0x01UL << USB0_ISTAT_SLEEP_SHIFT)                  /*!< USB0_ISTAT: SLEEP Mask                  */
#define USB0_ISTAT_SLEEP_SHIFT                   4                                                   /*!< USB0_ISTAT: SLEEP Position              */
#define USB0_ISTAT_RESUME_MASK                   (0x01UL << USB0_ISTAT_RESUME_SHIFT)                 /*!< USB0_ISTAT: RESUME Mask                 */
#define USB0_ISTAT_RESUME_SHIFT                  5                                                   /*!< USB0_ISTAT: RESUME Position             */
#define USB0_ISTAT_ATTACH_MASK                   (0x01UL << USB0_ISTAT_ATTACH_SHIFT)                 /*!< USB0_ISTAT: ATTACH Mask                 */
#define USB0_ISTAT_ATTACH_SHIFT                  6                                                   /*!< USB0_ISTAT: ATTACH Position             */
#define USB0_ISTAT_STALL_MASK                    (0x01UL << USB0_ISTAT_STALL_SHIFT)                  /*!< USB0_ISTAT: STALL Mask                  */
#define USB0_ISTAT_STALL_SHIFT                   7                                                   /*!< USB0_ISTAT: STALL Position              */

/* ------- USB0_INTEN                               ------ */
#define USB0_INTEN_USBRSTEN_MASK                 (0x01UL << USB0_INTEN_USBRSTEN_SHIFT)               /*!< USB0_INTEN: USBRSTEN Mask               */
#define USB0_INTEN_USBRSTEN_SHIFT                0                                                   /*!< USB0_INTEN: USBRSTEN Position           */
#define USB0_INTEN_ERROREN_MASK                  (0x01UL << USB0_INTEN_ERROREN_SHIFT)                /*!< USB0_INTEN: ERROREN Mask                */
#define USB0_INTEN_ERROREN_SHIFT                 1                                                   /*!< USB0_INTEN: ERROREN Position            */
#define USB0_INTEN_SOFTOKEN_MASK                 (0x01UL << USB0_INTEN_SOFTOKEN_SHIFT)               /*!< USB0_INTEN: SOFTOKEN Mask               */
#define USB0_INTEN_SOFTOKEN_SHIFT                2                                                   /*!< USB0_INTEN: SOFTOKEN Position           */
#define USB0_INTEN_TOKDNEEN_MASK                 (0x01UL << USB0_INTEN_TOKDNEEN_SHIFT)               /*!< USB0_INTEN: TOKDNEEN Mask               */
#define USB0_INTEN_TOKDNEEN_SHIFT                3                                                   /*!< USB0_INTEN: TOKDNEEN Position           */
#define USB0_INTEN_SLEEPEN_MASK                  (0x01UL << USB0_INTEN_SLEEPEN_SHIFT)                /*!< USB0_INTEN: SLEEPEN Mask                */
#define USB0_INTEN_SLEEPEN_SHIFT                 4                                                   /*!< USB0_INTEN: SLEEPEN Position            */
#define USB0_INTEN_RESUMEEN_MASK                 (0x01UL << USB0_INTEN_RESUMEEN_SHIFT)               /*!< USB0_INTEN: RESUMEEN Mask               */
#define USB0_INTEN_RESUMEEN_SHIFT                5                                                   /*!< USB0_INTEN: RESUMEEN Position           */
#define USB0_INTEN_ATTACHEN_MASK                 (0x01UL << USB0_INTEN_ATTACHEN_SHIFT)               /*!< USB0_INTEN: ATTACHEN Mask               */
#define USB0_INTEN_ATTACHEN_SHIFT                6                                                   /*!< USB0_INTEN: ATTACHEN Position           */
#define USB0_INTEN_STALLEN_MASK                  (0x01UL << USB0_INTEN_STALLEN_SHIFT)                /*!< USB0_INTEN: STALLEN Mask                */
#define USB0_INTEN_STALLEN_SHIFT                 7                                                   /*!< USB0_INTEN: STALLEN Position            */

/* ------- USB0_ERRSTAT                             ------ */
#define USB0_ERRSTAT_PIDERR_MASK                 (0x01UL << USB0_ERRSTAT_PIDERR_SHIFT)               /*!< USB0_ERRSTAT: PIDERR Mask               */
#define USB0_ERRSTAT_PIDERR_SHIFT                0                                                   /*!< USB0_ERRSTAT: PIDERR Position           */
#define USB0_ERRSTAT_CRC5EOF_MASK                (0x01UL << USB0_ERRSTAT_CRC5EOF_SHIFT)              /*!< USB0_ERRSTAT: CRC5EOF Mask              */
#define USB0_ERRSTAT_CRC5EOF_SHIFT               1                                                   /*!< USB0_ERRSTAT: CRC5EOF Position          */
#define USB0_ERRSTAT_CRC16_MASK                  (0x01UL << USB0_ERRSTAT_CRC16_SHIFT)                /*!< USB0_ERRSTAT: CRC16 Mask                */
#define USB0_ERRSTAT_CRC16_SHIFT                 2                                                   /*!< USB0_ERRSTAT: CRC16 Position            */
#define USB0_ERRSTAT_DFN8_MASK                   (0x01UL << USB0_ERRSTAT_DFN8_SHIFT)                 /*!< USB0_ERRSTAT: DFN8 Mask                 */
#define USB0_ERRSTAT_DFN8_SHIFT                  3                                                   /*!< USB0_ERRSTAT: DFN8 Position             */
#define USB0_ERRSTAT_BTOERR_MASK                 (0x01UL << USB0_ERRSTAT_BTOERR_SHIFT)               /*!< USB0_ERRSTAT: BTOERR Mask               */
#define USB0_ERRSTAT_BTOERR_SHIFT                4                                                   /*!< USB0_ERRSTAT: BTOERR Position           */
#define USB0_ERRSTAT_DMAERR_MASK                 (0x01UL << USB0_ERRSTAT_DMAERR_SHIFT)               /*!< USB0_ERRSTAT: DMAERR Mask               */
#define USB0_ERRSTAT_DMAERR_SHIFT                5                                                   /*!< USB0_ERRSTAT: DMAERR Position           */
#define USB0_ERRSTAT_BTSERR_MASK                 (0x01UL << USB0_ERRSTAT_BTSERR_SHIFT)               /*!< USB0_ERRSTAT: BTSERR Mask               */
#define USB0_ERRSTAT_BTSERR_SHIFT                7                                                   /*!< USB0_ERRSTAT: BTSERR Position           */

/* ------- USB0_ERREN                               ------ */
#define USB0_ERREN_PIDERREN_MASK                 (0x01UL << USB0_ERREN_PIDERREN_SHIFT)               /*!< USB0_ERREN: PIDERREN Mask               */
#define USB0_ERREN_PIDERREN_SHIFT                0                                                   /*!< USB0_ERREN: PIDERREN Position           */
#define USB0_ERREN_CRC5EOFEN_MASK                (0x01UL << USB0_ERREN_CRC5EOFEN_SHIFT)              /*!< USB0_ERREN: CRC5EOFEN Mask              */
#define USB0_ERREN_CRC5EOFEN_SHIFT               1                                                   /*!< USB0_ERREN: CRC5EOFEN Position          */
#define USB0_ERREN_CRC16EN_MASK                  (0x01UL << USB0_ERREN_CRC16EN_SHIFT)                /*!< USB0_ERREN: CRC16EN Mask                */
#define USB0_ERREN_CRC16EN_SHIFT                 2                                                   /*!< USB0_ERREN: CRC16EN Position            */
#define USB0_ERREN_DFN8EN_MASK                   (0x01UL << USB0_ERREN_DFN8EN_SHIFT)                 /*!< USB0_ERREN: DFN8EN Mask                 */
#define USB0_ERREN_DFN8EN_SHIFT                  3                                                   /*!< USB0_ERREN: DFN8EN Position             */
#define USB0_ERREN_BTOERREN_MASK                 (0x01UL << USB0_ERREN_BTOERREN_SHIFT)               /*!< USB0_ERREN: BTOERREN Mask               */
#define USB0_ERREN_BTOERREN_SHIFT                4                                                   /*!< USB0_ERREN: BTOERREN Position           */
#define USB0_ERREN_DMAERREN_MASK                 (0x01UL << USB0_ERREN_DMAERREN_SHIFT)               /*!< USB0_ERREN: DMAERREN Mask               */
#define USB0_ERREN_DMAERREN_SHIFT                5                                                   /*!< USB0_ERREN: DMAERREN Position           */
#define USB0_ERREN_BTSERREN_MASK                 (0x01UL << USB0_ERREN_BTSERREN_SHIFT)               /*!< USB0_ERREN: BTSERREN Mask               */
#define USB0_ERREN_BTSERREN_SHIFT                7                                                   /*!< USB0_ERREN: BTSERREN Position           */

/* ------- USB0_STAT                                ------ */
#define USB0_STAT_ODD_MASK                       (0x01UL << USB0_STAT_ODD_SHIFT)                     /*!< USB0_STAT: ODD Mask                     */
#define USB0_STAT_ODD_SHIFT                      2                                                   /*!< USB0_STAT: ODD Position                 */
#define USB0_STAT_TX_MASK                        (0x01UL << USB0_STAT_TX_SHIFT)                      /*!< USB0_STAT: TX Mask                      */
#define USB0_STAT_TX_SHIFT                       3                                                   /*!< USB0_STAT: TX Position                  */
#define USB0_STAT_ENDP_MASK                      (0x0FUL << USB0_STAT_ENDP_SHIFT)                    /*!< USB0_STAT: ENDP Mask                    */
#define USB0_STAT_ENDP_SHIFT                     4                                                   /*!< USB0_STAT: ENDP Position                */
#define USB0_STAT_ENDP(x)                        (((x)<<USB0_STAT_ENDP_SHIFT)&USB0_STAT_ENDP_MASK)   /*!< USB0_STAT                               */

/* ------- USB0_CTL                                 ------ */
#define USB0_CTL_USBENSOFEN_MASK                 (0x01UL << USB0_CTL_USBENSOFEN_SHIFT)               /*!< USB0_CTL: USBENSOFEN Mask               */
#define USB0_CTL_USBENSOFEN_SHIFT                0                                                   /*!< USB0_CTL: USBENSOFEN Position           */
#define USB0_CTL_ODDRST_MASK                     (0x01UL << USB0_CTL_ODDRST_SHIFT)                   /*!< USB0_CTL: ODDRST Mask                   */
#define USB0_CTL_ODDRST_SHIFT                    1                                                   /*!< USB0_CTL: ODDRST Position               */
#define USB0_CTL_RESUME_MASK                     (0x01UL << USB0_CTL_RESUME_SHIFT)                   /*!< USB0_CTL: RESUME Mask                   */
#define USB0_CTL_RESUME_SHIFT                    2                                                   /*!< USB0_CTL: RESUME Position               */
#define USB0_CTL_HOSTMODEEN_MASK                 (0x01UL << USB0_CTL_HOSTMODEEN_SHIFT)               /*!< USB0_CTL: HOSTMODEEN Mask               */
#define USB0_CTL_HOSTMODEEN_SHIFT                3                                                   /*!< USB0_CTL: HOSTMODEEN Position           */
#define USB0_CTL_RESET_MASK                      (0x01UL << USB0_CTL_RESET_SHIFT)                    /*!< USB0_CTL: RESET Mask                    */
#define USB0_CTL_RESET_SHIFT                     4                                                   /*!< USB0_CTL: RESET Position                */
#define USB0_CTL_TXSUSPENDTOKENBUSY_MASK         (0x01UL << USB0_CTL_TXSUSPENDTOKENBUSY_SHIFT)       /*!< USB0_CTL: TXSUSPENDTOKENBUSY Mask       */
#define USB0_CTL_TXSUSPENDTOKENBUSY_SHIFT        5                                                   /*!< USB0_CTL: TXSUSPENDTOKENBUSY Position   */
#define USB0_CTL_SE0_MASK                        (0x01UL << USB0_CTL_SE0_SHIFT)                      /*!< USB0_CTL: SE0 Mask                      */
#define USB0_CTL_SE0_SHIFT                       6                                                   /*!< USB0_CTL: SE0 Position                  */
#define USB0_CTL_JSTATE_MASK                     (0x01UL << USB0_CTL_JSTATE_SHIFT)                   /*!< USB0_CTL: JSTATE Mask                   */
#define USB0_CTL_JSTATE_SHIFT                    7                                                   /*!< USB0_CTL: JSTATE Position               */

/* ------- USB0_ADDR                                ------ */
#define USB0_ADDR_ADDR_MASK                      (0x7FUL << USB0_ADDR_ADDR_SHIFT)                    /*!< USB0_ADDR: ADDR Mask                    */
#define USB0_ADDR_ADDR_SHIFT                     0                                                   /*!< USB0_ADDR: ADDR Position                */
#define USB0_ADDR_ADDR(x)                        (((x)<<USB0_ADDR_ADDR_SHIFT)&USB0_ADDR_ADDR_MASK)   /*!< USB0_ADDR                               */
#define USB0_ADDR_LSEN_MASK                      (0x01UL << USB0_ADDR_LSEN_SHIFT)                    /*!< USB0_ADDR: LSEN Mask                    */
#define USB0_ADDR_LSEN_SHIFT                     7                                                   /*!< USB0_ADDR: LSEN Position                */

/* ------- USB0_BDTPAGE1                            ------ */
#define USB0_BDTPAGE1_BDTBA_MASK                 (0x7FUL << USB0_BDTPAGE1_BDTBA_SHIFT)               /*!< USB0_BDTPAGE1: BDTBA Mask               */
#define USB0_BDTPAGE1_BDTBA_SHIFT                1                                                   /*!< USB0_BDTPAGE1: BDTBA Position           */
#define USB0_BDTPAGE1_BDTBA(x)                   (((x)<<USB0_BDTPAGE1_BDTBA_SHIFT)&USB0_BDTPAGE1_BDTBA_MASK) /*!< USB0_BDTPAGE1                           */

/* ------- USB0_FRMNUML                             ------ */
#define USB0_FRMNUML_FRM_MASK                    (0xFFUL << USB0_FRMNUML_FRM_SHIFT)                  /*!< USB0_FRMNUML: FRM Mask                  */
#define USB0_FRMNUML_FRM_SHIFT                   0                                                   /*!< USB0_FRMNUML: FRM Position              */
#define USB0_FRMNUML_FRM(x)                      (((x)<<USB0_FRMNUML_FRM_SHIFT)&USB0_FRMNUML_FRM_MASK) /*!< USB0_FRMNUML                            */

/* ------- USB0_FRMNUMH                             ------ */
#define USB0_FRMNUMH_FRM_MASK                    (0x07UL << USB0_FRMNUMH_FRM_SHIFT)                  /*!< USB0_FRMNUMH: FRM Mask                  */
#define USB0_FRMNUMH_FRM_SHIFT                   0                                                   /*!< USB0_FRMNUMH: FRM Position              */
#define USB0_FRMNUMH_FRM(x)                      (((x)<<USB0_FRMNUMH_FRM_SHIFT)&USB0_FRMNUMH_FRM_MASK) /*!< USB0_FRMNUMH                            */

/* ------- USB0_TOKEN                               ------ */
#define USB0_TOKEN_TOKENENDPT_MASK               (0x0FUL << USB0_TOKEN_TOKENENDPT_SHIFT)             /*!< USB0_TOKEN: TOKENENDPT Mask             */
#define USB0_TOKEN_TOKENENDPT_SHIFT              0                                                   /*!< USB0_TOKEN: TOKENENDPT Position         */
#define USB0_TOKEN_TOKENENDPT(x)                 (((x)<<USB0_TOKEN_TOKENENDPT_SHIFT)&USB0_TOKEN_TOKENENDPT_MASK) /*!< USB0_TOKEN                              */
#define USB0_TOKEN_TOKENPID_MASK                 (0x0FUL << USB0_TOKEN_TOKENPID_SHIFT)               /*!< USB0_TOKEN: TOKENPID Mask               */
#define USB0_TOKEN_TOKENPID_SHIFT                4                                                   /*!< USB0_TOKEN: TOKENPID Position           */
#define USB0_TOKEN_TOKENPID(x)                   (((x)<<USB0_TOKEN_TOKENPID_SHIFT)&USB0_TOKEN_TOKENPID_MASK) /*!< USB0_TOKEN                              */

/* ------- USB0_SOFTHLD                             ------ */
#define USB0_SOFTHLD_CNT_MASK                    (0xFFUL << USB0_SOFTHLD_CNT_SHIFT)                  /*!< USB0_SOFTHLD: CNT Mask                  */
#define USB0_SOFTHLD_CNT_SHIFT                   0                                                   /*!< USB0_SOFTHLD: CNT Position              */
#define USB0_SOFTHLD_CNT(x)                      (((x)<<USB0_SOFTHLD_CNT_SHIFT)&USB0_SOFTHLD_CNT_MASK) /*!< USB0_SOFTHLD                            */

/* ------- USB0_BDTPAGE2                            ------ */
#define USB0_BDTPAGE2_BDTBA_MASK                 (0xFFUL << USB0_BDTPAGE2_BDTBA_SHIFT)               /*!< USB0_BDTPAGE2: BDTBA Mask               */
#define USB0_BDTPAGE2_BDTBA_SHIFT                0                                                   /*!< USB0_BDTPAGE2: BDTBA Position           */
#define USB0_BDTPAGE2_BDTBA(x)                   (((x)<<USB0_BDTPAGE2_BDTBA_SHIFT)&USB0_BDTPAGE2_BDTBA_MASK) /*!< USB0_BDTPAGE2                           */

/* ------- USB0_BDTPAGE3                            ------ */
#define USB0_BDTPAGE3_BDTBA_MASK                 (0xFFUL << USB0_BDTPAGE3_BDTBA_SHIFT)               /*!< USB0_BDTPAGE3: BDTBA Mask               */
#define USB0_BDTPAGE3_BDTBA_SHIFT                0                                                   /*!< USB0_BDTPAGE3: BDTBA Position           */
#define USB0_BDTPAGE3_BDTBA(x)                   (((x)<<USB0_BDTPAGE3_BDTBA_SHIFT)&USB0_BDTPAGE3_BDTBA_MASK) /*!< USB0_BDTPAGE3                           */

/* ------- USB0_ENDPT                               ------ */
#define USB0_ENDPT_EPHSHK_MASK                   (0x01UL << USB0_ENDPT_EPHSHK_SHIFT)                 /*!< USB0_ENDPT: EPHSHK Mask                 */
#define USB0_ENDPT_EPHSHK_SHIFT                  0                                                   /*!< USB0_ENDPT: EPHSHK Position             */
#define USB0_ENDPT_EPSTALL_MASK                  (0x01UL << USB0_ENDPT_EPSTALL_SHIFT)                /*!< USB0_ENDPT: EPSTALL Mask                */
#define USB0_ENDPT_EPSTALL_SHIFT                 1                                                   /*!< USB0_ENDPT: EPSTALL Position            */
#define USB0_ENDPT_EPTXEN_MASK                   (0x01UL << USB0_ENDPT_EPTXEN_SHIFT)                 /*!< USB0_ENDPT: EPTXEN Mask                 */
#define USB0_ENDPT_EPTXEN_SHIFT                  2                                                   /*!< USB0_ENDPT: EPTXEN Position             */
#define USB0_ENDPT_EPRXEN_MASK                   (0x01UL << USB0_ENDPT_EPRXEN_SHIFT)                 /*!< USB0_ENDPT: EPRXEN Mask                 */
#define USB0_ENDPT_EPRXEN_SHIFT                  3                                                   /*!< USB0_ENDPT: EPRXEN Position             */
#define USB0_ENDPT_EPCTLDIS_MASK                 (0x01UL << USB0_ENDPT_EPCTLDIS_SHIFT)               /*!< USB0_ENDPT: EPCTLDIS Mask               */
#define USB0_ENDPT_EPCTLDIS_SHIFT                4                                                   /*!< USB0_ENDPT: EPCTLDIS Position           */
#define USB0_ENDPT_RETRYDIS_MASK                 (0x01UL << USB0_ENDPT_RETRYDIS_SHIFT)               /*!< USB0_ENDPT: RETRYDIS Mask               */
#define USB0_ENDPT_RETRYDIS_SHIFT                6                                                   /*!< USB0_ENDPT: RETRYDIS Position           */
#define USB0_ENDPT_HOSTWOHUB_MASK                (0x01UL << USB0_ENDPT_HOSTWOHUB_SHIFT)              /*!< USB0_ENDPT: HOSTWOHUB Mask              */
#define USB0_ENDPT_HOSTWOHUB_SHIFT               7                                                   /*!< USB0_ENDPT: HOSTWOHUB Position          */

/* ------- USB0_USBCTRL                             ------ */
#define USB0_USBCTRL_PDE_MASK                    (0x01UL << USB0_USBCTRL_PDE_SHIFT)                  /*!< USB0_USBCTRL: PDE Mask                  */
#define USB0_USBCTRL_PDE_SHIFT                   6                                                   /*!< USB0_USBCTRL: PDE Position              */
#define USB0_USBCTRL_SUSP_MASK                   (0x01UL << USB0_USBCTRL_SUSP_SHIFT)                 /*!< USB0_USBCTRL: SUSP Mask                 */
#define USB0_USBCTRL_SUSP_SHIFT                  7                                                   /*!< USB0_USBCTRL: SUSP Position             */

/* ------- USB0_OBSERVE                             ------ */
#define USB0_OBSERVE_DMPD_MASK                   (0x01UL << USB0_OBSERVE_DMPD_SHIFT)                 /*!< USB0_OBSERVE: DMPD Mask                 */
#define USB0_OBSERVE_DMPD_SHIFT                  4                                                   /*!< USB0_OBSERVE: DMPD Position             */
#define USB0_OBSERVE_DPPD_MASK                   (0x01UL << USB0_OBSERVE_DPPD_SHIFT)                 /*!< USB0_OBSERVE: DPPD Mask                 */
#define USB0_OBSERVE_DPPD_SHIFT                  6                                                   /*!< USB0_OBSERVE: DPPD Position             */
#define USB0_OBSERVE_DPPU_MASK                   (0x01UL << USB0_OBSERVE_DPPU_SHIFT)                 /*!< USB0_OBSERVE: DPPU Mask                 */
#define USB0_OBSERVE_DPPU_SHIFT                  7                                                   /*!< USB0_OBSERVE: DPPU Position             */

/* ------- USB0_CONTROL                             ------ */
#define USB0_CONTROL_DPPULLUPNONOTG_MASK         (0x01UL << USB0_CONTROL_DPPULLUPNONOTG_SHIFT)       /*!< USB0_CONTROL: DPPULLUPNONOTG Mask       */
#define USB0_CONTROL_DPPULLUPNONOTG_SHIFT        4                                                   /*!< USB0_CONTROL: DPPULLUPNONOTG Position   */

/* ------- USB0_USBTRC0                             ------ */
#define USB0_USBTRC0_USB_RESUME_INT_MASK         (0x01UL << USB0_USBTRC0_USB_RESUME_INT_SHIFT)       /*!< USB0_USBTRC0: USB_RESUME_INT Mask       */
#define USB0_USBTRC0_USB_RESUME_INT_SHIFT        0                                                   /*!< USB0_USBTRC0: USB_RESUME_INT Position   */
#define USB0_USBTRC0_SYNC_DET_MASK               (0x01UL << USB0_USBTRC0_SYNC_DET_SHIFT)             /*!< USB0_USBTRC0: SYNC_DET Mask             */
#define USB0_USBTRC0_SYNC_DET_SHIFT              1                                                   /*!< USB0_USBTRC0: SYNC_DET Position         */
#define USB0_USBTRC0_USBRESMEN_MASK              (0x01UL << USB0_USBTRC0_USBRESMEN_SHIFT)            /*!< USB0_USBTRC0: USBRESMEN Mask            */
#define USB0_USBTRC0_USBRESMEN_SHIFT             5                                                   /*!< USB0_USBTRC0: USBRESMEN Position        */
#define USB0_USBTRC0_USBRESET_MASK               (0x01UL << USB0_USBTRC0_USBRESET_SHIFT)             /*!< USB0_USBTRC0: USBRESET Mask             */
#define USB0_USBTRC0_USBRESET_SHIFT              7                                                   /*!< USB0_USBTRC0: USBRESET Position         */

/* ------- USB0_USBFRMADJUST                        ------ */
#define USB0_USBFRMADJUST_ADJ_MASK               (0xFFUL << USB0_USBFRMADJUST_ADJ_SHIFT)             /*!< USB0_USBFRMADJUST: ADJ Mask             */
#define USB0_USBFRMADJUST_ADJ_SHIFT              0                                                   /*!< USB0_USBFRMADJUST: ADJ Position         */
#define USB0_USBFRMADJUST_ADJ(x)                 (((x)<<USB0_USBFRMADJUST_ADJ_SHIFT)&USB0_USBFRMADJUST_ADJ_MASK) /*!< USB0_USBFRMADJUST                       */

/* -------------------------------------------------------------------------------- */
/* -----------     'USB0' Register Access macros                        ----------- */
/* -------------------------------------------------------------------------------- */

#define USB0_PERID                     (USB0->PERID)
#define USB0_IDCOMP                    (USB0->IDCOMP)
#define USB0_REV                       (USB0->REV)
#define USB0_ADDINFO                   (USB0->ADDINFO)
#define USB0_OTGISTAT                  (USB0->OTGISTAT)
#define USB0_OTGICR                    (USB0->OTGICR)
#define USB0_OTGSTAT                   (USB0->OTGSTAT)
#define USB0_OTGCTL                    (USB0->OTGCTL)
#define USB0_ISTAT                     (USB0->ISTAT)
#define USB0_INTEN                     (USB0->INTEN)
#define USB0_ERRSTAT                   (USB0->ERRSTAT)
#define USB0_ERREN                     (USB0->ERREN)
#define USB0_STAT                      (USB0->STAT)
#define USB0_CTL                       (USB0->CTL)
#define USB0_ADDR                      (USB0->ADDR)
#define USB0_BDTPAGE1                  (USB0->BDTPAGE1)
#define USB0_FRMNUML                   (USB0->FRMNUML)
#define USB0_FRMNUMH                   (USB0->FRMNUMH)
#define USB0_TOKEN                     (USB0->TOKEN)
#define USB0_SOFTHLD                   (USB0->SOFTHLD)
#define USB0_BDTPAGE2                  (USB0->BDTPAGE2)
#define USB0_BDTPAGE3                  (USB0->BDTPAGE3)
#define USB0_ENDPT0                    (USB0->ENDPOINT[0].ENDPT)
#define USB0_ENDPT1                    (USB0->ENDPOINT[1].ENDPT)
#define USB0_ENDPT2                    (USB0->ENDPOINT[2].ENDPT)
#define USB0_ENDPT3                    (USB0->ENDPOINT[3].ENDPT)
#define USB0_ENDPT4                    (USB0->ENDPOINT[4].ENDPT)
#define USB0_ENDPT5                    (USB0->ENDPOINT[5].ENDPT)
#define USB0_ENDPT6                    (USB0->ENDPOINT[6].ENDPT)
#define USB0_ENDPT7                    (USB0->ENDPOINT[7].ENDPT)
#define USB0_ENDPT8                    (USB0->ENDPOINT[8].ENDPT)
#define USB0_ENDPT9                    (USB0->ENDPOINT[9].ENDPT)
#define USB0_ENDPT10                   (USB0->ENDPOINT[10].ENDPT)
#define USB0_ENDPT11                   (USB0->ENDPOINT[11].ENDPT)
#define USB0_ENDPT12                   (USB0->ENDPOINT[12].ENDPT)
#define USB0_ENDPT13                   (USB0->ENDPOINT[13].ENDPT)
#define USB0_ENDPT14                   (USB0->ENDPOINT[14].ENDPT)
#define USB0_ENDPT15                   (USB0->ENDPOINT[15].ENDPT)
#define USB0_USBCTRL                   (USB0->USBCTRL)
#define USB0_OBSERVE                   (USB0->OBSERVE)
#define USB0_CONTROL                   (USB0->CONTROL)
#define USB0_USBTRC0                   (USB0->USBTRC0)
#define USB0_USBFRMADJUST              (USB0->USBFRMADJUST)
/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif

/* ================================================================================ */
/* ================              Peripheral memory map             ================ */
/* ================================================================================ */

#define ADC0_BASE_PTR                  0x4003B000UL
#define BP_BASE_PTR                    0xE0002000UL
#define CMP0_BASE_PTR                  0x40073000UL
#define DAC0_BASE_PTR                  0x4003F000UL
#define DMA_BASE_PTR                   0x40008000UL
#define DMAMUX_BASE_PTR                0x40021000UL
#define FGPIOA_BASE_PTR                0xF80FF000UL
#define FGPIOB_BASE_PTR                0xF80FF040UL
#define FGPIOC_BASE_PTR                0xF80FF080UL
#define FGPIOD_BASE_PTR                0xF80FF0C0UL
#define FGPIOE_BASE_PTR                0xF80FF100UL
#define FTFA_BASE_PTR                  0x40020000UL
#define GPIOA_BASE_PTR                 0x400FF000UL
#define GPIOB_BASE_PTR                 0x400FF040UL
#define GPIOC_BASE_PTR                 0x400FF080UL
#define GPIOD_BASE_PTR                 0x400FF0C0UL
#define GPIOE_BASE_PTR                 0x400FF100UL
#define I2C0_BASE_PTR                  0x40066000UL
#define I2C1_BASE_PTR                  0x40067000UL
#define I2S0_BASE_PTR                  0x4002F000UL
#define LLWU_BASE_PTR                  0x4007C000UL
#define LPTMR0_BASE_PTR                0x40040000UL
#define MCG_BASE_PTR                   0x40064000UL
#define MCM_BASE_PTR                   0xF0003000UL
#define MTB_BASE_PTR                   0xF0000000UL
#define MTBDWT_BASE_PTR                0xF0001000UL
#define NV_BASE_PTR                    0x00000400UL
#define OSC0_BASE_PTR                  0x40065000UL
#define PIT_BASE_PTR                   0x40037000UL
#define PMC_BASE_PTR                   0x4007D000UL
#define PORTA_BASE_PTR                 0x40049000UL
#define PORTB_BASE_PTR                 0x4004A000UL
#define PORTC_BASE_PTR                 0x4004B000UL
#define PORTD_BASE_PTR                 0x4004C000UL
#define PORTE_BASE_PTR                 0x4004D000UL
#define RCM_BASE_PTR                   0x4007F000UL
#define ROM_BASE_PTR                   0xF0002000UL
#define RTC_BASE_PTR                   0x4003D000UL
#define SIM_BASE_PTR                   0x40047000UL
#define SMC_BASE_PTR                   0x4007E000UL
#define SPI0_BASE_PTR                  0x40076000UL
#define SPI1_BASE_PTR                  0x40077000UL
#define TPM0_BASE_PTR                  0x40038000UL
#define TPM1_BASE_PTR                  0x40039000UL
#define TPM2_BASE_PTR                  0x4003A000UL
#define TSI0_BASE_PTR                  0x40045000UL
#define UART0_BASE_PTR                 0x4006A000UL
#define UART1_BASE_PTR                 0x4006B000UL
#define UART2_BASE_PTR                 0x4006C000UL
#define USB0_BASE_PTR                  0x40072000UL

/* ================================================================================ */
/* ================             Peripheral declarations            ================ */
/* ================================================================================ */

#define ADC0                           ((volatile ADC0_Type   *) ADC0_BASE_PTR)
#define BP                             ((volatile BP_Type     *) BP_BASE_PTR)
#define CMP0                           ((volatile CMP0_Type   *) CMP0_BASE_PTR)
#define DAC0                           ((volatile DAC0_Type   *) DAC0_BASE_PTR)
#define DMA                            ((volatile DMA_Type    *) DMA_BASE_PTR)
#define DMAMUX                         ((volatile DMAMUX_Type *) DMAMUX_BASE_PTR)
#define FGPIOA                         ((volatile FGPIOA_Type *) FGPIOA_BASE_PTR)
#define FGPIOB                         ((volatile FGPIOB_Type *) FGPIOB_BASE_PTR)
#define FGPIOC                         ((volatile FGPIOC_Type *) FGPIOC_BASE_PTR)
#define FGPIOD                         ((volatile FGPIOD_Type *) FGPIOD_BASE_PTR)
#define FGPIOE                         ((volatile FGPIOE_Type *) FGPIOE_BASE_PTR)
#define FTFA                           ((volatile FTFA_Type   *) FTFA_BASE_PTR)
#define GPIOA                          ((volatile GPIOA_Type  *) GPIOA_BASE_PTR)
#define GPIOB                          ((volatile GPIOB_Type  *) GPIOB_BASE_PTR)
#define GPIOC                          ((volatile GPIOC_Type  *) GPIOC_BASE_PTR)
#define GPIOD                          ((volatile GPIOD_Type  *) GPIOD_BASE_PTR)
#define GPIOE                          ((volatile GPIOE_Type  *) GPIOE_BASE_PTR)
#define I2C0                           ((volatile I2C0_Type   *) I2C0_BASE_PTR)
#define I2C1                           ((volatile I2C1_Type   *) I2C1_BASE_PTR)
#define I2S0                           ((volatile I2S0_Type   *) I2S0_BASE_PTR)
#define LLWU                           ((volatile LLWU_Type   *) LLWU_BASE_PTR)
#define LPTMR0                         ((volatile LPTMR0_Type *) LPTMR0_BASE_PTR)
#define MCG                            ((volatile MCG_Type    *) MCG_BASE_PTR)
#define MCM                            ((volatile MCM_Type    *) MCM_BASE_PTR)
#define MTB                            ((volatile MTB_Type    *) MTB_BASE_PTR)
#define MTBDWT                         ((volatile MTBDWT_Type *) MTBDWT_BASE_PTR)
#define NV                             ((volatile NV_Type     *) NV_BASE_PTR)
#define OSC0                           ((volatile OSC0_Type   *) OSC0_BASE_PTR)
#define PIT                            ((volatile PIT_Type    *) PIT_BASE_PTR)
#define PMC                            ((volatile PMC_Type    *) PMC_BASE_PTR)
#define PORTA                          ((volatile PORTA_Type  *) PORTA_BASE_PTR)
#define PORTB                          ((volatile PORTB_Type  *) PORTB_BASE_PTR)
#define PORTC                          ((volatile PORTC_Type  *) PORTC_BASE_PTR)
#define PORTD                          ((volatile PORTD_Type  *) PORTD_BASE_PTR)
#define PORTE                          ((volatile PORTE_Type  *) PORTE_BASE_PTR)
#define RCM                            ((volatile RCM_Type    *) RCM_BASE_PTR)
#define ROM                            ((volatile ROM_Type    *) ROM_BASE_PTR)
#define RTC                            ((volatile RTC_Type    *) RTC_BASE_PTR)
#define SIM                            ((volatile SIM_Type    *) SIM_BASE_PTR)
#define SMC                            ((volatile SMC_Type    *) SMC_BASE_PTR)
#define SPI0                           ((volatile SPI0_Type   *) SPI0_BASE_PTR)
#define SPI1                           ((volatile SPI1_Type   *) SPI1_BASE_PTR)
#define TPM0                           ((volatile TPM0_Type   *) TPM0_BASE_PTR)
#define TPM1                           ((volatile TPM1_Type   *) TPM1_BASE_PTR)
#define TPM2                           ((volatile TPM2_Type   *) TPM2_BASE_PTR)
#define TSI0                           ((volatile TSI0_Type   *) TSI0_BASE_PTR)
#define UART0                          ((volatile UART0_Type  *) UART0_BASE_PTR)
#define UART1                          ((volatile UART1_Type  *) UART1_BASE_PTR)
#define UART2                          ((volatile UART2_Type  *) UART2_BASE_PTR)
#define USB0                           ((volatile USB0_Type   *) USB0_BASE_PTR)

#ifdef __cplusplus
}
#endif


#endif  /* MCU_MKL26Z4 */


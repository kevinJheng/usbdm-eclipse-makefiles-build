/*
 * clock_private-mkl0x.h
 *
 *  Created on: Nov 6, 2012
 *      Author: podonoghue
 */

#ifndef CLOCK_PRIVATE_H_
#define CLOCK_PRIVATE_H_

#include <stdint.h>
#include "derivative.h"

#ifdef __cplusplus
extern "C" {
#endif

//-------- <<< Use Configuration Wizard in Context Menu >>> -----------------

// Convention
// name_V = field value
// name_M = field mask i.e. value in correct position for register

//-------- <<< Use Configuration Wizard in Context Menu >>> -----------------

// XTAL_FREQ ==============================
//
//   <o> Frequency of External Clock or Crystal (Hz)
//   <i> Frequency of external crystal or clock
#define OSCCLK_CLOCK (32768UL)

#if   (OSCCLK_CLOCK > 32000UL)   && (OSCCLK_CLOCK <= 40000UL)
#define MCG_C2_RANGE0_M MCG_C2_RANGE0(0) // 32-40 kHz
#elif (OSCCLK_CLOCK > 3000000UL) && (OSCCLK_CLOCK <= 8000000UL)
#define MCG_C2_RANGE0_M MCG_C2_RANGE0(1) // 3-8 MHz
#elif (OSCCLK_CLOCK > 8000000UL) && (OSCCLK_CLOCK <= 32000000UL)
#define MCG_C2_RANGE0_M MCG_C2_RANGE0(2) // 8-32 MHz
#else
#error "Illegal Crystal Frequency"
#endif

// Slow Internal Clock ~32kHz
#define SYSTEM_SLOW_IRC_CLOCK (32000UL)

// 32kHz crystal oscillator
// May be the same as the main OSC on some chips
#define SYSTEM_OSC32KCLK_CLOCK (32625UL)

// Slow Internal Clock ~4MHz
#define SYSTEM_FAST_IRC_CLOCK (4000000UL)

// Low Power Oscillator Clock ~1kHz
#define SYSTEM_LOW_POWER_CLOCK (1000UL)

// SYSTEM_RTC_CLKIN_CLOCK ==============================
//
//   <o> External RTC clock input
//   <i> Frequency of external clock provided to RTC clock input pin
#define SYSTEM_RTC_CLKIN_CLOCK (0UL)

// CLOCK_MODE ===============================
//
//   <o> Clock Mode to set up (Not currently used)
//   <i> Basic choice on final clock mode
//     <0=> No setup (Reset default FEI)
//     <1=> FLL Engaged Internal (FEI)
//     <2=> FLL Engaged External (FEE)
//     <3=> PLL Engaged External (PEE)
#define CLOCK_MODE 2
#define CLOCK_MODE_RESET (0)
#define CLOCK_MODE_FEI   (1)
#define CLOCK_MODE_FEE   (2)
#define CLOCK_MODE_PEE   (3)

//========================================================================================
//========================================================================================
// <h> OSC Control Register (OSC_CR)

// OSC_CR_ERCLKEN ===============================
//
//   <q> External Reference Enable (ERCLKEN)
//   <i> Enables external reference clock [OSC_CR_ERCLKEN]
//     <0=> Disabled
//     <1=> Enabled
#define OSC_CR_ERCLKEN_V 1
#define OSC_CR_ERCLKEN_M (OSC_CR_ERCLKEN_V<<OSC_CR_ERCLKEN_SHIFT)

// OSC_CR_EREFSTEN ===============================
//
//   <q> External Reference Stop Enable (EREFSTEN)
//   <i> Determines if external reference clock is enabled in Stop mode [OSC_CR_EREFSTEN]
//     <0=> Disabled in Stop mode
//     <1=> Enabled in Stop mode
#define OSC_CR_EREFSTEN_V 1
#define OSC_CR_EREFSTEN_M (OSC_CR_EREFSTEN_V<<OSC_CR_EREFSTEN_SHIFT)

// OSC_CR_SC2P ===============================
//
//   <q0> Oscillator Capacitor Load Configure
//   <i> Configures the oscillator load capacitance [OSC_CR_SC2P]
//     <0=>
//     <1=> +2pF

// OSC_CR_SC4P ===============================
//
//   <q1> Oscillator Capacitor Load Configure
//   <i> Configures the oscillator load capacitance [OSC_CR_SC4P]
//     <0=>
//     <1=> +4pF

// OSC_CR_SC8P ===============================
//
//   <q2> Oscillator Capacitor Load Configure
//   <i> Configures the oscillator load capacitance [OSC_CR_SC8P]
//     <0=>
//     <1=> +8pF

// OSC_CR_SC16P ===============================
//
//   <q3> Oscillator Capacitor Load Configure
//   <i> Configures the oscillator load capacitance [OSC_CR_SC16P]
//     <0=>
//     <1=> +16pF

#define OSC_CR_SCP_M ((0<<OSC_CR_SC2P_SHIFT)|(0<<OSC_CR_SC4P_SHIFT)|(0<<OSC_CR_SC8P_SHIFT)|(0<<OSC_CR_SC16P_SHIFT))
// </h>

//========================================================================================
//========================================================================================

// MCG_C1_CLKS =======================================
//
//  <o> MCGOUTCLK Clock Source Select (CLKS) <0-2>
//  <i> Selects the clock source for MCGOUTCLK [MCG_C1_CLKS]
//      <0=> Output of FLL is selected
//      <1=> Internal reference clock is selected
//      <2=> External reference clock is selected
#define MCG_C1_CLKS_V 0
#define MCG_C1_CLKS_M MCG_C1_CLKS(MCG_C1_CLKS_V)

// MCG_C1_IREFS ================================
//
//   <q> IREFS Internal Reference Select (IREFS)
//   <i> FLL External Reference Divider [MCG_C1_IREFS]
//      <0=> External Reference Clock
//      <1=> Slow Internal Clock
#define MCG_C1_IREFS_V 0
#define MCG_C1_IREFS_M (MCG_C1_IREFS_V<<MCG_C1_IREFS_SHIFT)

// MCG_C1_IRCLKEN ==============================
//
//   <q> Internal Reference Clock Enable (IRCLKEN)
//   <i> Enables the internal reference clock for use as MCGIRCLK [MCG_C1_IRCLKEN]
//      <0=> inactive
//      <1=> active
#define MCG_C1_IRCLKEN_V   1
#define MCG_C1_IRCLKEN_M   (1<<MCG_C1_IRCLKEN_SHIFT)

// MCG_C1_IREFSTEN =============================
//
//   <q> Internal Reference Stop Enable (IREFSTEN)
//   <i> Determines if IRS is enabled in Stop mode [MCG_C1_IREFSTEN]
//      <0=> IR disabled in STOP
//      <1=> IR enabled in STOP
#define MCG_C1_IREFSTEN_V   1
#define MCG_C1_IREFSTEN_M   (MCG_C1_IREFSTEN_V<<MCG_C1_IREFSTEN_SHIFT)

// MCG_C2_LOCRE0 =============================
//
//   <q> Loss of Clock Reset Enable (LOCRE0)
//   <i> Reset on loss of OSC0 external reference [MCG_C2_LOCRE0]
//      <0=> Interrupt only (if CME0=1)
//      <1=> Reset
#define MCG_C2_LOCRE0_V (0)
#define MCG_C2_LOCRE0_M (MCG_C2_LOCRE0_V<<MCG_C2_LOCRE0_SHIFT)

// MCG_C2_HGO0 =============================
//
//   <q> Oscillator Gain (HGO0)
//   <i> Controls the crystal oscillator mode of operation [MCG_C2_HGO0_V]
//      <0=> Low gain
//      <1=> High gain
#define MCG_C2_HGO0_V   0
#define MCG_C2_HGO0_M   (MCG_C2_HGO0_V<<MCG_C2_HGO0_SHIFT)

// MCG_C2_EREFS0 =============================
//
//   <q> External Reference Select (EREFS0)
//   <i> Selects the source for the external reference clock [C2_EREFS0]
//      <0=> External clock
//      <1=> Oscillator
#define MCG_C2_EREFS0_V  1
#define MCG_C2_EREFS0_M (MCG_C2_EREFS0_V<<MCG_C2_EREFS0_SHIFT)

// MCG_C2_LP =============================
//
//   <q> Low Power Select (LP)
//   <i> Whether FLL continues operation when bypassed [MCG_C2_LP]
//      <0=> FLL is enabled in bypass modes
//      <1=> FLL is disabled in bypass modes
#define MCG_C2_LP_V  0
#define MCG_C2_LP_M (MCG_C2_LP_V<<MCG_C2_LP_SHIFT)

// MCG_C2_IRCS ==============================
//
//   <q> MCG IRC Clock Source (IRCS)
//   <i> MCG Internal Clock Source [MCG_C2_IRCS]
//     <0=> Slow internal reference clock
//     <1=> Fast internal reference clock
#define MCG_C2_IRCS_V 1
#define MCG_C2_IRCS_M (MCG_C2_IRCS_V<<MCG_C2_IRCS_SHIFT)

// MCG_C4_DMX32 ==============================
//
//   <q> DMX32 DCO lock range (DMX32)
//   <i> Optimise for 32.768 kHz Reference [MCG_C4_DMX32]
//     <0=> Wide lock range 31.25-39.06 kHz
//     <1=> Optimised for 32.768 kHz reference
#define MCG_C4_DMX32_V  1
#define MCG_C4_DMX32_M (MCG_C4_DMX32_V<<MCG_C4_DMX32_SHIFT)

// MCG_C4_DRST_DRS =============================
//
//   <o> DCO Range Select (DRST_DRS) <0-3>
//   <i> Frequency range for the FLL output, DCOOUT [MCG_C4_DRST_DRS]
//      <0=> Low range (24/20-25 MHz)
//      <1=> Mid range (48/40-50 MHz)
//      <2=> Mid-high range (72/60-75 MHz)
//      <3=> High range (96/80-100 MHz)
#define MCG_C4_DRST_DRS_V  1
#define MCG_C4_DRST_DRS_M (MCG_C4_DRST_DRS_V<<MCG_C4_DRST_DRS_SHIFT)

// MCG_C6_CME ==============================
//
//   <q> Clock Monitor Enable (CME)
//   <i> Determines if a reset on loss of external clock [MCG_C6_CME]
//      <0=> External clock monitor is disabled.
//      <1=> Reset request on loss of external clock.
#define MCG_C6_CME_V (0)
#define MCG_C6_CME_M (MCG_C6_CME_V<<MCG_C6_CME_SHIFT)

// MCG_SC_FCRDIV ==============================
//
//   <o> Fast Clock Internal Reference Divider (FCRDIV) <0-7>
//   <i> Selects the amount to divide down the fast internal reference clock [MCG_SC_FCRDIV]
#define MCG_SC_FCRDIV_V  0
#define MCG_SC_FCRDIV_M (MCG_SC_FCRDIV_V<<MCG_SC_FCRDIV_SHIFT)

#define SYSTEM_OSCERCLK_CLOCK    OSCCLK_CLOCK         // External reference clock

// Assume no pre-scaler
#define OSCERCLK_CLOCKx         SYSTEM_OSCERCLK_CLOCK
#define MCG_C2_RANGE0_V    0

#if   (((OSCERCLK_CLOCKx/1)>=31250UL)   && ((OSCERCLK_CLOCKx/1)<=39063UL))
#define MCG_C1_FRDIV_V 0
#elif (((OSCERCLK_CLOCKx/2)>=31250UL)   && ((OSCERCLK_CLOCKx/2)<=39063UL))
#define MCG_C1_FRDIV_V 1
#elif (((OSCERCLK_CLOCKx/4)>=31250UL)   && ((OSCERCLK_CLOCKx/4)<=39063UL))
#define MCG_C1_FRDIV_V 2
#elif (((OSCERCLK_CLOCKx/8)>=31250UL)   && ((OSCERCLK_CLOCKx/8)<=39063UL))
#define MCG_C1_FRDIV_V 3
#elif (((OSCERCLK_CLOCKx/16)>=31250UL)  && ((OSCERCLK_CLOCKx/16)<=39063UL))
#define MCG_C1_FRDIV_V 4
#elif (((OSCERCLK_CLOCKx/32)>=31250UL)  && ((OSCERCLK_CLOCKx/32)<=39063UL))
#define MCG_C1_FRDIV_V 5
#elif (((OSCERCLK_CLOCKx/64)>=31250UL)  && ((OSCERCLK_CLOCKx/64)<=39063UL))
#define MCG_C1_FRDIV_V 6
#elif (((OSCERCLK_CLOCKx/128)>=31250UL) && ((OSCERCLK_CLOCKx/128)<=39063UL))
#define MCG_C1_FRDIV_V 7
#else
// Try with pre-scaler
#undef OSCERCLK_CLOCKx
#undef MCG_C2_RANGE0_V
#define OSCERCLK_CLOCKx         (SYSTEM_OSCERCLK_CLOCK/(1<<5))
#define MCG_C2_RANGE0_V    1
#if   (((OSCERCLK_CLOCKx/1)>=31250UL)   && ((OSCERCLK_CLOCKx/1)<=39063UL))
#define MCG_C1_FRDIV_V 0
#elif (((OSCERCLK_CLOCKx/2)>=31250UL)   && ((OSCERCLK_CLOCKx/2)<=39063UL))
#define MCG_C1_FRDIV_V 1
#elif (((OSCERCLK_CLOCKx/4)>=31250UL)   && ((OSCERCLK_CLOCKx/4)<=39063UL))
#define MCG_C1_FRDIV_V 2
#elif (((OSCERCLK_CLOCKx/8)>=31250UL)   && ((OSCERCLK_CLOCKx/8)<=39063UL))
#define MCG_C1_FRDIV_V 3
#elif (((OSCERCLK_CLOCKx/16)>=31250UL)  && ((OSCERCLK_CLOCKx/16)<=39063UL))
#define MCG_C1_FRDIV_V 4
#elif (((OSCERCLK_CLOCKx/32)>=31250UL)  && ((OSCERCLK_CLOCKx/32)<=39063UL))
#define MCG_C1_FRDIV_V 5
#elif (((OSCERCLK_CLOCKx/64)>=31250UL)  && ((OSCERCLK_CLOCKx/64)<=39063UL))
#define MCG_C1_FRDIV_V 6
#elif (((OSCERCLK_CLOCKx/128)>=31250UL) && ((OSCERCLK_CLOCKx/128)<=39063UL))
#define MCG_C1_FRDIV_V 7
#else
#endif
#endif
#undef OSCERCLK_CLOCKx

#define MCG_C1_FRDIV_M (MCG_C1_FRDIV_V<<MCG_C1_FRDIV_SHIFT)

// ERC_AFTER_FRDIV_CLOCK = External reference clock after dividers
#if (MCG_C2_RANGE0_V == 0)
#define ERC_AFTER_FRDIV_CLOCK (SYSTEM_OSCERCLK_CLOCK/(1<<MCG_C1_FRDIV_V))
#else
#define ERC_AFTER_FRDIV_CLOCK (SYSTEM_OSCERCLK_CLOCK/(1<<(MCG_C1_FRDIV_V+5)))
#endif

#if (ERC_AFTER_FRDIV_CLOCK > 39062UL) || (ERC_AFTER_FRDIV_CLOCK < 31250UL)
#error "External reference clock must be in range 31.25 kHz to 39.0625 kHz"
#endif

// SYSTEM_MCGFFCLK_CLOCK  ==============================
#if (MCG_C1_IREFS_V == 0)
#define SYSTEM_MCGFFCLK_CLOCK ERC_AFTER_FRDIV_CLOCK  // External Reference clock after dividers
#else
#define SYSTEM_MCGFFCLK_CLOCK SYSTEM_SLOW_IRC_CLOCK  // Slow internal clock (nominally 32 kHz)
#endif

// MCGFLLCLK_CLOCK  ==============================

#if (MCG_C4_DMX32_V == 0)
#define SYSTEM_MCGFLLCLK_CLOCK (640*(MCG_C4_DRST_DRS_V+1)*SYSTEM_MCGFFCLK_CLOCK)
#elif (MCG_C4_DMX32_V == 1)
#define SYSTEM_MCGFLLCLK_CLOCK (732*(MCG_C4_DRST_DRS_V+1)*SYSTEM_MCGFFCLK_CLOCK)
#endif


// <h> Peripheral Clock Source Selection

#if (MCG_C1_CLKS_V == 0)
#define SYSTEM_MCGOUTCLK_CLOCK SYSTEM_MCGFLLCLK_CLOCK
#elif (MCG_C1_CLKS_V == 1)
#define SYSTEM_MCGOUTCLK_CLOCK SYSTEM_MCGIRCLK_CLOCK
#elif (MCG_C1_CLKS_V == 2)
#define SYSTEM_MCGOUTCLK_CLOCK SYSTEM_OSCERCLK_CLOCK
#endif

#if (MCG_C2_IRCS_V == 0)
#define SYSTEM_MCGIRCLK_CLOCK SYSTEM_SLOW_IRC_CLOCK
#else
#define SYSTEM_MCGIRCLK_CLOCK (SYSTEM_FAST_IRC_CLOCK/(1<<MCG_SC_FCRDIV_V))
#endif

#ifdef SIM_SOPT1_OSC32KSEL
// SIM_SOPT1_OSC32KSEL ================================
//
//   <o> 32kHz Clock Source (ERCLK32)
//   <i> (Not available on KL02 chips) - [SIM_SOPT1_OSC32KSEL]
//     <0=> System Oscillator (OSC32KCLK)
//     <2=> Real Time Clock CLKIN pin
//     <3=> Low power oscillator (LPO - 1kHz)
#define SIM_SOPT1_OSC32KSEL_M SIM_SOPT1_OSC32KSEL(0)

#if SIM_SOPT1_OSC32KSEL_M == SIM_SOPT1_OSC32KSEL(0)
#define SYSTEM_ERCLK32_CLOCK SYSTEM_RTC_CLKIN_CLOCK   // External RTC clock pin
#elif SIM_SOPT1_OSC32KSEL_M == SIM_SOPT1_OSC32KSEL(2)
#define SYSTEM_ERCLK32_CLOCK SYSTEM_OSC32KCLK_CLOCK   // Main/32kHz Oscillator (depends on chip)
#elif SIM_SOPT1_OSC32KSEL_M == SIM_SOPT1_OSC32KSEL(3)
#define SYSTEM_ERCLK32_CLOCK SYSTEM_LOW_POWER_CLOCK   // LPO
#else
#error "Invalid ERCLK32 clock selected"
#endif
#else
#define SYSTEM_ERCLK32_CLOCK SYSTEM_OSC32KCLK_CLOCK   // Main/32kHz Oscillator (depends on chip)
#endif

// LPTMR0_CLKSRC ==============================
//
//   <o> LPTMR0 Clock Source
//   <i> Low Power Timer clock source - [LPTMR0_PSR_PCS]
//     <0=> MCG Internal Reference Clock (MCGIRCLK)
//     <1=> Low power oscillator (LPO - 1kHz)
//     <2=> 32kHz Clock Source (ERCLK32)
//     <3=> Oscillator External Reference Clock (OSCERCLK)
#define LPTMR0_CLKSRC_M LPTMR0_PSR_PCS(0)

#if (LPTMR0_CLKSRC_M == LPTMR0_PSR_PCS(0))
#define SYSTEM_LPTMR0_CLOCK SYSTEM_MCGIRCLK_CLOCK
#elif (LPTMR0_CLKSRC_M == LPTMR0_PSR_PCS(1))
#define SYSTEM_LPTMR0_CLOCK SYSTEM_LOW_POWER_CLOCK
#elif (LPTMR0_CLKSRC_M == LPTMR0_PSR_PCS(2))
#define SYSTEM_LPTMR0_CLOCK SYSTEM_ERCLK32_CLOCK
#elif (LPTMR0_CLKSRC_M == LPTMR0_PSR_PCS(3))
#define SYSTEM_LPTMR0_CLOCK OSCCLK_CLOCK
#endif

// SIM_SOPT2_UART0SRC =================================
//
//   <o> UART0 Clock Source
//   <i> Universal Asynchronous Receiver/Transmitter clock source [SIM_SOPT2_UART0SRC]
//     <0=> Disabled
//     <1=> MCG FLL Clock (MCGFLLCLK)
//     <2=> Oscillator External Reference Clock (OSCERCLK)
//     <3=> MCG Internal Reference Clock (MCGIRCLK)
#define SIM_SOPT2_UART0SRC_M  SIM_SOPT2_UART0SRC(1)

#if (SIM_SOPT2_UART0SRC_M == SIM_SOPT2_UART0SRC(0))
#define SYSTEM_UART0_CLOCK (0)
#elif (SIM_SOPT2_UART0SRC_M == SIM_SOPT2_UART0SRC(1))
#define SYSTEM_UART0_CLOCK SYSTEM_MCGFLLCLK_CLOCK
#elif (SIM_SOPT2_UART0SRC_M == SIM_SOPT2_UART0SRC(2))
#define SYSTEM_UART0_CLOCK SYSTEM_OSCERCLK_CLOCK
#elif (SIM_SOPT2_UART0SRC_M == SIM_SOPT2_UART0SRC(3))
#define SYSTEM_UART0_CLOCK SYSTEM_MCGIRCLK_CLOCK
#endif

// SIM_SOPT2_TPMSRC ===================================
//
//   <o> TPM Clock Source
//   <i> Timer/PWM Module clock source [SIM_SOPT2_TPMSRC]
//     <0=> Disabled
//     <1=> MGC FLL Clock (MCGFLLCLK)
//     <2=> Oscillator External Reference Clock (OSCERCLK)
//     <3=> MCG Internal Reference Clock (MCGIRCLK)
#define SIM_SOPT2_TPMSRC_M SIM_SOPT2_TPMSRC(1)

#if (SIM_SOPT2_TPMSRC_M == SIM_SOPT2_TPMSRC(0))
#define SYSTEM_TPM_CLOCK (0)
#elif (SIM_SOPT2_TPMSRC_M == SIM_SOPT2_TPMSRC(1))
#define SYSTEM_TPM_CLOCK SYSTEM_MCGFLLCLK_CLOCK
#elif (SIM_SOPT2_TPMSRC_M == SIM_SOPT2_TPMSRC(2))
#define SYSTEM_TPM_CLOCK SYSTEM_OSCERCLK_CLOCK
#elif (SIM_SOPT2_TPMSRC_M == SIM_SOPT2_TPMSRC(3))
#define SYSTEM_TPM_CLOCK SYSTEM_MCGIRCLK_CLOCK
#endif
// </h>

// <h> System Clock dividers
// SIM_CLKDIV1_OUTDIV1 ================================
//
//   <o> Core & System Clock Division (OUTDIV1) - Divide by <1-16> <#-1>
//   <i> Clocks the ARM Cortex-M4 core and bus masters (48 MHz max.) [SIM_CLKDIV1_OUTDIV1]
//   <i> MCGOUTCLK clock is source. Default /2
#define SIM_CLKDIV1_OUTDIV1_V (0)
#define SIM_CLKDIV1_OUTDIV1_M SIM_CLKDIV1_OUTDIV1(SIM_CLKDIV1_OUTDIV1_V)

// SIM_CLKDIV1_OUTDIV2 ================================
// Not used
#define SIM_CLKDIV1_OUTDIV2_M (0)

// SIM_CLKDIV1_OUTDIV3 ================================
// Not used
#define SIM_CLKDIV1_OUTDIV3_M (0)

// SIM_CLKDIV1_OUTDIV4 ================================
//
//   <o> Bus & Flash Clock Divider (OUTDIV4) - Divide by <1-16> <#-1>
//   <i> Clocks the bus slaves and peripheral (24 MHz max.) [SIM_CLKDIV1_OUTDIV4]
//   <i> MCGOUTCLK clock divided by OUTDIV1 is source. Default /2
#define SIM_CLKDIV1_OUTDIV4_V (0)
#define SIM_CLKDIV1_OUTDIV4_M SIM_CLKDIV1_OUTDIV4(SIM_CLKDIV1_OUTDIV4_V)

// </h>

#define SYSTEM_CORE_CLOCK      (SYSTEM_MCGOUTCLK_CLOCK/(SIM_CLKDIV1_OUTDIV1_V+1))
#define SYSTEM_BUSCLK_CLOCK    (SYSTEM_CORE_CLOCK/(SIM_CLKDIV1_OUTDIV4_V+1))
#define SYSTEM_FLASHCLK_CLOCK  (SYSTEM_CORE_CLOCK/(SIM_CLKDIV1_OUTDIV4_V+1))

/*
 * The following are 'public' definitions
 *
 * SYSTEM_MCGIRCLK_CLOCK   MCG Internal Reference clock
 * SYSTEM_MCGFFCLK_CLOCK   MCG Various   (from SlowIRC/ERC_DIV/Peripheral bus clock)
 * SYSTEM_MCGFLLCLK_CLOCK  MCG FLL clock (from FLL)
 * SYSTEM_MCGOUTCLK_CLOCK  MCG OUT clock (from SlowIRC/FastIRC/ExternalRC/FLL)
 * SYSTEM_OSCERCLK_CLOCK
 * SYSTEM_BUSCLK_CLOCK
 * SYSTEM_CORE_CLOCK
 *
 */

void clock_initialise(void);

#ifdef __cplusplus
}
#endif

#endif /* CLOCK_PRIVATE_H_ */

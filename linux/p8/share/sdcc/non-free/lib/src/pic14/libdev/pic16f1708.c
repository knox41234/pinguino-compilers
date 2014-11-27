/*
 * This definitions of the PIC16F1708 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2013.
 *
 * This file is generated automatically by the cinc2h.pl, 2013-09-19 18:40:44 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic16f1708.h>

//==============================================================================

__at(0x0000) __sfr INDF0;

__at(0x0001) __sfr INDF1;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR0;

__at(0x0004) __sfr FSR0L;

__at(0x0005) __sfr FSR0H;

__at(0x0006) __sfr FSR1;

__at(0x0006) __sfr FSR1L;

__at(0x0007) __sfr FSR1H;

__at(0x0008) __sfr BSR;
__at(0x0008) volatile __BSRbits_t BSRbits;

__at(0x0009) __sfr WREG;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PORTA;
__at(0x000C) volatile __PORTAbits_t PORTAbits;

__at(0x000D) __sfr PORTB;
__at(0x000D) volatile __PORTBbits_t PORTBbits;

__at(0x000E) __sfr PORTC;
__at(0x000E) volatile __PORTCbits_t PORTCbits;

__at(0x0011) __sfr PIR1;
__at(0x0011) volatile __PIR1bits_t PIR1bits;

__at(0x0012) __sfr PIR2;
__at(0x0012) volatile __PIR2bits_t PIR2bits;

__at(0x0013) __sfr PIR3;
__at(0x0013) volatile __PIR3bits_t PIR3bits;

__at(0x0015) __sfr TMR0;

__at(0x0016) __sfr TMR1;

__at(0x0016) __sfr TMR1L;

__at(0x0017) __sfr TMR1H;

__at(0x0018) __sfr T1CON;
__at(0x0018) volatile __T1CONbits_t T1CONbits;

__at(0x0019) __sfr T1GCON;
__at(0x0019) volatile __T1GCONbits_t T1GCONbits;

__at(0x001A) __sfr TMR2;

__at(0x001B) __sfr PR2;

__at(0x001C) __sfr T2CON;
__at(0x001C) volatile __T2CONbits_t T2CONbits;

__at(0x008C) __sfr TRISA;
__at(0x008C) volatile __TRISAbits_t TRISAbits;

__at(0x008D) __sfr TRISB;
__at(0x008D) volatile __TRISBbits_t TRISBbits;

__at(0x008E) __sfr TRISC;
__at(0x008E) volatile __TRISCbits_t TRISCbits;

__at(0x0091) __sfr PIE1;
__at(0x0091) volatile __PIE1bits_t PIE1bits;

__at(0x0092) __sfr PIE2;
__at(0x0092) volatile __PIE2bits_t PIE2bits;

__at(0x0093) __sfr PIE3;
__at(0x0093) volatile __PIE3bits_t PIE3bits;

__at(0x0095) __sfr OPTION_REG;
__at(0x0095) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0096) __sfr PCON;
__at(0x0096) volatile __PCONbits_t PCONbits;

__at(0x0097) __sfr WDTCON;
__at(0x0097) volatile __WDTCONbits_t WDTCONbits;

__at(0x0098) __sfr OSCTUNE;
__at(0x0098) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0099) __sfr OSCCON;
__at(0x0099) volatile __OSCCONbits_t OSCCONbits;

__at(0x009A) __sfr OSCSTAT;
__at(0x009A) volatile __OSCSTATbits_t OSCSTATbits;

__at(0x009B) __sfr ADRES;

__at(0x009B) __sfr ADRESL;

__at(0x009C) __sfr ADRESH;

__at(0x009D) __sfr ADCON0;
__at(0x009D) volatile __ADCON0bits_t ADCON0bits;

__at(0x009E) __sfr ADCON1;
__at(0x009E) volatile __ADCON1bits_t ADCON1bits;

__at(0x009F) __sfr ADCON2;
__at(0x009F) volatile __ADCON2bits_t ADCON2bits;

__at(0x010C) __sfr LATA;
__at(0x010C) volatile __LATAbits_t LATAbits;

__at(0x010D) __sfr LATB;
__at(0x010D) volatile __LATBbits_t LATBbits;

__at(0x010E) __sfr LATC;
__at(0x010E) volatile __LATCbits_t LATCbits;

__at(0x0111) __sfr CM1CON0;
__at(0x0111) volatile __CM1CON0bits_t CM1CON0bits;

__at(0x0112) __sfr CM1CON1;
__at(0x0112) volatile __CM1CON1bits_t CM1CON1bits;

__at(0x0113) __sfr CM2CON0;
__at(0x0113) volatile __CM2CON0bits_t CM2CON0bits;

__at(0x0114) __sfr CM2CON1;
__at(0x0114) volatile __CM2CON1bits_t CM2CON1bits;

__at(0x0115) __sfr CMOUT;
__at(0x0115) volatile __CMOUTbits_t CMOUTbits;

__at(0x0116) __sfr BORCON;
__at(0x0116) volatile __BORCONbits_t BORCONbits;

__at(0x0117) __sfr FVRCON;
__at(0x0117) volatile __FVRCONbits_t FVRCONbits;

__at(0x0118) __sfr DAC1CON0;
__at(0x0118) volatile __DAC1CON0bits_t DAC1CON0bits;

__at(0x0119) __sfr DAC1CON1;
__at(0x0119) volatile __DAC1CON1bits_t DAC1CON1bits;

__at(0x011C) __sfr ZCD1CON;
__at(0x011C) volatile __ZCD1CONbits_t ZCD1CONbits;

__at(0x018C) __sfr ANSELA;
__at(0x018C) volatile __ANSELAbits_t ANSELAbits;

__at(0x018D) __sfr ANSELB;
__at(0x018D) volatile __ANSELBbits_t ANSELBbits;

__at(0x018E) __sfr ANSELC;
__at(0x018E) volatile __ANSELCbits_t ANSELCbits;

__at(0x0191) __sfr PMADR;

__at(0x0191) __sfr PMADRL;

__at(0x0192) __sfr PMADRH;

__at(0x0193) __sfr PMDAT;

__at(0x0193) __sfr PMDATL;

__at(0x0194) __sfr PMDATH;

__at(0x0195) __sfr PMCON1;
__at(0x0195) volatile __PMCON1bits_t PMCON1bits;

__at(0x0196) __sfr PMCON2;

__at(0x0197) __sfr VREGCON;
__at(0x0197) volatile __VREGCONbits_t VREGCONbits;

__at(0x0199) __sfr RC1REG;

__at(0x0199) __sfr RCREG;

__at(0x0199) __sfr RCREG1;

__at(0x019A) __sfr TX1REG;

__at(0x019A) __sfr TXREG;

__at(0x019A) __sfr TXREG1;

__at(0x019B) __sfr SP1BRG;

__at(0x019B) __sfr SP1BRGL;

__at(0x019B) __sfr SPBRG;

__at(0x019B) __sfr SPBRG1;

__at(0x019B) __sfr SPBRGL;

__at(0x019C) __sfr SP1BRGH;

__at(0x019C) __sfr SPBRGH;

__at(0x019C) __sfr SPBRGH1;

__at(0x019D) __sfr RC1STA;
__at(0x019D) volatile __RC1STAbits_t RC1STAbits;

__at(0x019D) __sfr RCSTA;
__at(0x019D) volatile __RCSTAbits_t RCSTAbits;

__at(0x019D) __sfr RCSTA1;
__at(0x019D) volatile __RCSTA1bits_t RCSTA1bits;

__at(0x019E) __sfr TX1STA;
__at(0x019E) volatile __TX1STAbits_t TX1STAbits;

__at(0x019E) __sfr TXSTA;
__at(0x019E) volatile __TXSTAbits_t TXSTAbits;

__at(0x019E) __sfr TXSTA1;
__at(0x019E) volatile __TXSTA1bits_t TXSTA1bits;

__at(0x019F) __sfr BAUD1CON;
__at(0x019F) volatile __BAUD1CONbits_t BAUD1CONbits;

__at(0x019F) __sfr BAUDCON;
__at(0x019F) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x019F) __sfr BAUDCON1;
__at(0x019F) volatile __BAUDCON1bits_t BAUDCON1bits;

__at(0x019F) __sfr BAUDCTL;
__at(0x019F) volatile __BAUDCTLbits_t BAUDCTLbits;

__at(0x019F) __sfr BAUDCTL1;
__at(0x019F) volatile __BAUDCTL1bits_t BAUDCTL1bits;

__at(0x020C) __sfr WPUA;
__at(0x020C) volatile __WPUAbits_t WPUAbits;

__at(0x020D) __sfr WPUB;
__at(0x020D) volatile __WPUBbits_t WPUBbits;

__at(0x020E) __sfr WPUC;
__at(0x020E) volatile __WPUCbits_t WPUCbits;

__at(0x0211) __sfr SSP1BUF;
__at(0x0211) volatile __SSP1BUFbits_t SSP1BUFbits;

__at(0x0211) __sfr SSPBUF;
__at(0x0211) volatile __SSPBUFbits_t SSPBUFbits;

__at(0x0212) __sfr SSP1ADD;
__at(0x0212) volatile __SSP1ADDbits_t SSP1ADDbits;

__at(0x0212) __sfr SSPADD;
__at(0x0212) volatile __SSPADDbits_t SSPADDbits;

__at(0x0213) __sfr SSP1MSK;
__at(0x0213) volatile __SSP1MSKbits_t SSP1MSKbits;

__at(0x0213) __sfr SSPMSK;
__at(0x0213) volatile __SSPMSKbits_t SSPMSKbits;

__at(0x0214) __sfr SSP1STAT;
__at(0x0214) volatile __SSP1STATbits_t SSP1STATbits;

__at(0x0214) __sfr SSPSTAT;
__at(0x0214) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0215) __sfr SSP1CON;
__at(0x0215) volatile __SSP1CONbits_t SSP1CONbits;

__at(0x0215) __sfr SSP1CON1;
__at(0x0215) volatile __SSP1CON1bits_t SSP1CON1bits;

__at(0x0215) __sfr SSPCON;
__at(0x0215) volatile __SSPCONbits_t SSPCONbits;

__at(0x0215) __sfr SSPCON1;
__at(0x0215) volatile __SSPCON1bits_t SSPCON1bits;

__at(0x0216) __sfr SSP1CON2;
__at(0x0216) volatile __SSP1CON2bits_t SSP1CON2bits;

__at(0x0216) __sfr SSPCON2;
__at(0x0216) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0217) __sfr SSP1CON3;
__at(0x0217) volatile __SSP1CON3bits_t SSP1CON3bits;

__at(0x0217) __sfr SSPCON3;
__at(0x0217) volatile __SSPCON3bits_t SSPCON3bits;

__at(0x028C) __sfr ODCONA;
__at(0x028C) volatile __ODCONAbits_t ODCONAbits;

__at(0x028D) __sfr ODCONB;
__at(0x028D) volatile __ODCONBbits_t ODCONBbits;

__at(0x028E) __sfr ODCONC;
__at(0x028E) volatile __ODCONCbits_t ODCONCbits;

__at(0x0291) __sfr CCPR1;

__at(0x0291) __sfr CCPR1L;

__at(0x0292) __sfr CCPR1H;

__at(0x0293) __sfr CCP1CON;
__at(0x0293) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x0293) __sfr ECCP1CON;
__at(0x0293) volatile __ECCP1CONbits_t ECCP1CONbits;

__at(0x0298) __sfr CCPR2;

__at(0x0298) __sfr CCPR2L;

__at(0x0299) __sfr CCPR2H;

__at(0x029A) __sfr CCP2CON;
__at(0x029A) volatile __CCP2CONbits_t CCP2CONbits;

__at(0x029A) __sfr ECCP2CON;
__at(0x029A) volatile __ECCP2CONbits_t ECCP2CONbits;

__at(0x029E) __sfr CCPTMRS;
__at(0x029E) volatile __CCPTMRSbits_t CCPTMRSbits;

__at(0x030C) __sfr SLRCONA;
__at(0x030C) volatile __SLRCONAbits_t SLRCONAbits;

__at(0x030D) __sfr SLRCONB;
__at(0x030D) volatile __SLRCONBbits_t SLRCONBbits;

__at(0x030E) __sfr SLRCONC;
__at(0x030E) volatile __SLRCONCbits_t SLRCONCbits;

__at(0x038C) __sfr INLVLA;
__at(0x038C) volatile __INLVLAbits_t INLVLAbits;

__at(0x038D) __sfr INLVLB;
__at(0x038D) volatile __INLVLBbits_t INLVLBbits;

__at(0x038E) __sfr INLVLC;
__at(0x038E) volatile __INLVLCbits_t INLVLCbits;

__at(0x0391) __sfr IOCAP;
__at(0x0391) volatile __IOCAPbits_t IOCAPbits;

__at(0x0392) __sfr IOCAN;
__at(0x0392) volatile __IOCANbits_t IOCANbits;

__at(0x0393) __sfr IOCAF;
__at(0x0393) volatile __IOCAFbits_t IOCAFbits;

__at(0x0394) __sfr IOCBP;
__at(0x0394) volatile __IOCBPbits_t IOCBPbits;

__at(0x0395) __sfr IOCBN;
__at(0x0395) volatile __IOCBNbits_t IOCBNbits;

__at(0x0396) __sfr IOCBF;
__at(0x0396) volatile __IOCBFbits_t IOCBFbits;

__at(0x0397) __sfr IOCCP;
__at(0x0397) volatile __IOCCPbits_t IOCCPbits;

__at(0x0398) __sfr IOCCN;
__at(0x0398) volatile __IOCCNbits_t IOCCNbits;

__at(0x0399) __sfr IOCCF;
__at(0x0399) volatile __IOCCFbits_t IOCCFbits;

__at(0x0415) __sfr TMR4;

__at(0x0416) __sfr PR4;

__at(0x0417) __sfr T4CON;
__at(0x0417) volatile __T4CONbits_t T4CONbits;

__at(0x041C) __sfr TMR6;

__at(0x041D) __sfr PR6;

__at(0x041E) __sfr T6CON;
__at(0x041E) volatile __T6CONbits_t T6CONbits;

__at(0x0511) __sfr OPA1CON;
__at(0x0511) volatile __OPA1CONbits_t OPA1CONbits;

__at(0x0515) __sfr OPA2CON;
__at(0x0515) volatile __OPA2CONbits_t OPA2CONbits;

__at(0x0617) __sfr PWM3DCL;
__at(0x0617) volatile __PWM3DCLbits_t PWM3DCLbits;

__at(0x0618) __sfr PWM3DCH;
__at(0x0618) volatile __PWM3DCHbits_t PWM3DCHbits;

__at(0x0619) __sfr PWM3CON;
__at(0x0619) volatile __PWM3CONbits_t PWM3CONbits;

__at(0x0619) __sfr PWM3CON0;
__at(0x0619) volatile __PWM3CON0bits_t PWM3CON0bits;

__at(0x061A) __sfr PWM4DCL;
__at(0x061A) volatile __PWM4DCLbits_t PWM4DCLbits;

__at(0x061B) __sfr PWM4DCH;
__at(0x061B) volatile __PWM4DCHbits_t PWM4DCHbits;

__at(0x061C) __sfr PWM4CON;
__at(0x061C) volatile __PWM4CONbits_t PWM4CONbits;

__at(0x061C) __sfr PWM4CON0;
__at(0x061C) volatile __PWM4CON0bits_t PWM4CON0bits;

__at(0x0691) __sfr COG1PHR;
__at(0x0691) volatile __COG1PHRbits_t COG1PHRbits;

__at(0x0692) __sfr COG1PHF;
__at(0x0692) volatile __COG1PHFbits_t COG1PHFbits;

__at(0x0693) __sfr COG1BLKR;
__at(0x0693) volatile __COG1BLKRbits_t COG1BLKRbits;

__at(0x0694) __sfr COG1BLKF;
__at(0x0694) volatile __COG1BLKFbits_t COG1BLKFbits;

__at(0x0695) __sfr COG1DBR;
__at(0x0695) volatile __COG1DBRbits_t COG1DBRbits;

__at(0x0696) __sfr COG1DBF;
__at(0x0696) volatile __COG1DBFbits_t COG1DBFbits;

__at(0x0697) __sfr COG1CON0;
__at(0x0697) volatile __COG1CON0bits_t COG1CON0bits;

__at(0x0698) __sfr COG1CON1;
__at(0x0698) volatile __COG1CON1bits_t COG1CON1bits;

__at(0x0699) __sfr COG1RIS;
__at(0x0699) volatile __COG1RISbits_t COG1RISbits;

__at(0x069A) __sfr COG1RSIM;
__at(0x069A) volatile __COG1RSIMbits_t COG1RSIMbits;

__at(0x069B) __sfr COG1FIS;
__at(0x069B) volatile __COG1FISbits_t COG1FISbits;

__at(0x069C) __sfr COG1FSIM;
__at(0x069C) volatile __COG1FSIMbits_t COG1FSIMbits;

__at(0x069D) __sfr COG1ASD0;
__at(0x069D) volatile __COG1ASD0bits_t COG1ASD0bits;

__at(0x069E) __sfr COG1ASD1;
__at(0x069E) volatile __COG1ASD1bits_t COG1ASD1bits;

__at(0x069F) __sfr COG1STR;
__at(0x069F) volatile __COG1STRbits_t COG1STRbits;

__at(0x0E0F) __sfr PPSLOCK;
__at(0x0E0F) volatile __PPSLOCKbits_t PPSLOCKbits;

__at(0x0E10) __sfr INTPPS;

__at(0x0E11) __sfr T0CKIPPS;

__at(0x0E12) __sfr T1CKIPPS;

__at(0x0E13) __sfr T1GPPS;

__at(0x0E14) __sfr CCP1PPS;

__at(0x0E15) __sfr CCP2PPS;

__at(0x0E17) __sfr COGINPPS;

__at(0x0E20) __sfr SSPCLKPPS;

__at(0x0E21) __sfr SSPDATPPS;

__at(0x0E22) __sfr SSPSSPPS;

__at(0x0E24) __sfr RXPPS;

__at(0x0E25) __sfr CKPPS;

__at(0x0E28) __sfr CLCIN0PPS;

__at(0x0E29) __sfr CLCIN1PPS;

__at(0x0E2A) __sfr CLCIN2PPS;

__at(0x0E2B) __sfr CLCIN3PPS;

__at(0x0E90) __sfr RA0PPS;

__at(0x0E91) __sfr RA1PPS;

__at(0x0E92) __sfr RA2PPS;

__at(0x0E94) __sfr RA4PPS;

__at(0x0E95) __sfr RA5PPS;

__at(0x0E9C) __sfr RB4PPS;

__at(0x0E9D) __sfr RB5PPS;

__at(0x0E9E) __sfr RB6PPS;

__at(0x0E9F) __sfr RB7PPS;

__at(0x0EA0) __sfr RC0PPS;

__at(0x0EA1) __sfr RC1PPS;

__at(0x0EA2) __sfr RC2PPS;

__at(0x0EA3) __sfr RC3PPS;

__at(0x0EA4) __sfr RC4PPS;

__at(0x0EA5) __sfr RC5PPS;

__at(0x0EA6) __sfr RC6PPS;

__at(0x0EA7) __sfr RC7PPS;

__at(0x0F0F) __sfr CLCDATA;
__at(0x0F0F) volatile __CLCDATAbits_t CLCDATAbits;

__at(0x0F10) __sfr CLC1CON;
__at(0x0F10) volatile __CLC1CONbits_t CLC1CONbits;

__at(0x0F11) __sfr CLC1POL;
__at(0x0F11) volatile __CLC1POLbits_t CLC1POLbits;

__at(0x0F12) __sfr CLC1SEL0;
__at(0x0F12) volatile __CLC1SEL0bits_t CLC1SEL0bits;

__at(0x0F13) __sfr CLC1SEL1;
__at(0x0F13) volatile __CLC1SEL1bits_t CLC1SEL1bits;

__at(0x0F14) __sfr CLC1SEL2;
__at(0x0F14) volatile __CLC1SEL2bits_t CLC1SEL2bits;

__at(0x0F15) __sfr CLC1SEL3;
__at(0x0F15) volatile __CLC1SEL3bits_t CLC1SEL3bits;

__at(0x0F16) __sfr CLC1GLS0;
__at(0x0F16) volatile __CLC1GLS0bits_t CLC1GLS0bits;

__at(0x0F17) __sfr CLC1GLS1;
__at(0x0F17) volatile __CLC1GLS1bits_t CLC1GLS1bits;

__at(0x0F18) __sfr CLC1GLS2;
__at(0x0F18) volatile __CLC1GLS2bits_t CLC1GLS2bits;

__at(0x0F19) __sfr CLC1GLS3;
__at(0x0F19) volatile __CLC1GLS3bits_t CLC1GLS3bits;

__at(0x0F1A) __sfr CLC2CON;
__at(0x0F1A) volatile __CLC2CONbits_t CLC2CONbits;

__at(0x0F1B) __sfr CLC2POL;
__at(0x0F1B) volatile __CLC2POLbits_t CLC2POLbits;

__at(0x0F1C) __sfr CLC2SEL0;
__at(0x0F1C) volatile __CLC2SEL0bits_t CLC2SEL0bits;

__at(0x0F1D) __sfr CLC2SEL1;
__at(0x0F1D) volatile __CLC2SEL1bits_t CLC2SEL1bits;

__at(0x0F1E) __sfr CLC2SEL2;
__at(0x0F1E) volatile __CLC2SEL2bits_t CLC2SEL2bits;

__at(0x0F1F) __sfr CLC2SEL3;
__at(0x0F1F) volatile __CLC2SEL3bits_t CLC2SEL3bits;

__at(0x0F20) __sfr CLC2GLS0;
__at(0x0F20) volatile __CLC2GLS0bits_t CLC2GLS0bits;

__at(0x0F21) __sfr CLC2GLS1;
__at(0x0F21) volatile __CLC2GLS1bits_t CLC2GLS1bits;

__at(0x0F22) __sfr CLC2GLS2;
__at(0x0F22) volatile __CLC2GLS2bits_t CLC2GLS2bits;

__at(0x0F23) __sfr CLC2GLS3;
__at(0x0F23) volatile __CLC2GLS3bits_t CLC2GLS3bits;

__at(0x0F24) __sfr CLC3CON;
__at(0x0F24) volatile __CLC3CONbits_t CLC3CONbits;

__at(0x0F25) __sfr CLC3POL;
__at(0x0F25) volatile __CLC3POLbits_t CLC3POLbits;

__at(0x0F26) __sfr CLC3SEL0;
__at(0x0F26) volatile __CLC3SEL0bits_t CLC3SEL0bits;

__at(0x0F27) __sfr CLC3SEL1;
__at(0x0F27) volatile __CLC3SEL1bits_t CLC3SEL1bits;

__at(0x0F28) __sfr CLC3SEL2;
__at(0x0F28) volatile __CLC3SEL2bits_t CLC3SEL2bits;

__at(0x0F29) __sfr CLC3SEL3;
__at(0x0F29) volatile __CLC3SEL3bits_t CLC3SEL3bits;

__at(0x0F2A) __sfr CLC3GLS0;
__at(0x0F2A) volatile __CLC3GLS0bits_t CLC3GLS0bits;

__at(0x0F2B) __sfr CLC3GLS1;
__at(0x0F2B) volatile __CLC3GLS1bits_t CLC3GLS1bits;

__at(0x0F2C) __sfr CLC3GLS2;
__at(0x0F2C) volatile __CLC3GLS2bits_t CLC3GLS2bits;

__at(0x0F2D) __sfr CLC3GLS3;
__at(0x0F2D) volatile __CLC3GLS3bits_t CLC3GLS3bits;

__at(0x0F9E) __sfr ICDBK0H;
__at(0x0F9E) volatile __ICDBK0Hbits_t ICDBK0Hbits;

__at(0x0FE4) __sfr STATUS_SHAD;
__at(0x0FE4) volatile __STATUS_SHADbits_t STATUS_SHADbits;

__at(0x0FE5) __sfr WREG_SHAD;

__at(0x0FE6) __sfr BSR_SHAD;

__at(0x0FE7) __sfr PCLATH_SHAD;

__at(0x0FE8) __sfr FSR0L_SHAD;

__at(0x0FE9) __sfr FSR0H_SHAD;

__at(0x0FEA) __sfr FSR1L_SHAD;

__at(0x0FEB) __sfr FSR1H_SHAD;

__at(0x0FED) __sfr STKPTR;

__at(0x0FEE) __sfr TOSL;

__at(0x0FEF) __sfr TOSH;

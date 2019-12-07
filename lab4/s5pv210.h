/*  
 *s5pv210 SFR address define
 *http://dev.hqyj.com
 *yangsl@farsight.com.cn
 *2013.3.28
*/

#ifndef __S5PV210_H__
#define __S5PV210_H__



#define  	__REG(x)					(*(volatile unsigned int *)(x))  
#define     EXT_INT_0_CON      __REG(0XE0200E00)
#define     EXT_INT_1_CON      __REG(0XE0200E04)
#define     EXT_INT_2_CON      __REG(0XE0200E08)
#define     EXT_INT_3_CON      __REG(0XE0200E0C)

#define     EXT_INT_0_FLTCON0   __REG(0XE0200E80)
#define     EXT_INT_0_FLTCON1   __REG(0XE0200E84)
#define     EXT_INT_1_FLTCON0   __REG(0XE0200E88)
#define     EXT_INT_1_FLTCON1   __REG(0XE0200E8C)
#define     EXT_INT_2_FLTCON0   __REG(0XE0200E90)
#define     EXT_INT_2_FLTCON1   __REG(0XE0200E94)
#define     EXT_INT_3_FLTCON0   __REG(0XE0200E98)
#define     EXT_INT_3_FLTCON1   __REG(0XE0200E9C)

#define     EXT_INT_0_MASK      __REG(0XE0200F00)
#define     EXT_INT_1_MASK      __REG(0XE0200F04)
#define     EXT_INT_2_MASK      __REG(0XE0200F08)
#define     EXT_INT_3_MASK      __REG(0XE0200F0C)

#define     EXT_INT_0_PEND      __REG(0XE0200F40)
#define     EXT_INT_1_PEND      __REG(0XE0200F44)
#define     EXT_INT_2_PEND      __REG(0XE0200F48)
#define     EXT_INT_3_PEND      __REG(0XE0200F4C)


/****************************** GPIO **********************************/
/* GPA0 */
typedef struct {
				unsigned int GPA0CON;
				unsigned int GPA0DAT;
				unsigned int GPA0PULL;
				unsigned int GPA0DRV;
				unsigned int GPA0PDNCON;
				unsigned int GPA0PDNPULL;
}gpa0;
#define GPA0 (* (volatile gpa0 * )0xE0200000 )

/* GPB */
typedef struct {
				unsigned int GPBCON ;
				unsigned int GPBDAT;
				unsigned int GPBPUD;
				unsigned int GPBDRV;
				unsigned int GPBCONPDN;
				unsigned int GPBPUDPDN;
}gpb;
#define GPB (* (volatile gpb * )0xE0200040  )
/* GPC0 */
typedef struct {
				unsigned int GPC0CON;
				unsigned int GPC0DAT;
				unsigned int GPC0PUD;
				unsigned int GPC0DRV;
				unsigned int GPC0CONPDN;
				unsigned int GPC0PUDPDN;
}gpc0;
#define GPC0 (* (volatile gpc0 *)0xE0200060 )

/* GPC1 */
typedef struct {
				unsigned int GPC1CON;
				unsigned int GPC1DAT;
				unsigned int GPC1PUD;
				unsigned int GPC1DRV;
				unsigned int GPC1CONPDN;
				unsigned int GPC1PUDPDN;
}gpc1;
#define GPC1 (* (volatile gpc1 *)0xE0200090 )
/* GPD0 */
typedef struct {
	  	  	  	 unsigned int GPD0CON;
	  	  	  	 unsigned int GPD0DAT;
				 unsigned int GPD0PUD;
				 unsigned int GPD0DRV;
				 unsigned int GPD0CONPDN;
				 unsigned int GPD0PUDPDN;
}gpd0;
#define GPD0 (* (volatile gpd0 *)0xE02000A0 )
/* GPD1 */
typedef struct {
	  	  	  	 unsigned int GPD1CON;
	  	  	  	 unsigned int GPD1DAT;
				 unsigned int GPD1PUD;
				 unsigned int GPD1DRV;
				 unsigned int GPD1CONPDN;
				 unsigned int GPD1PUDPDN;
}gpd1;
#define GPD1 (* (volatile gpd1 *)0xE02000C0 )

/* MP0_1 */
typedef struct {
	  	  	  	 unsigned int MP0_1CON ;
	  	  	  	 unsigned int MP0_1DAT;
				 unsigned int MP0_1PUD ;
				 unsigned int MP0_1DRV  ;
				 unsigned int MP0_1CONPDN;
				 unsigned int MP0_1PUDPDN ;
}mp0_1;
#define MP0_1 (* (volatile mp0_1 *)0xE02002E0 )

/* MP0_3 */
typedef struct {
	  	  	  	 unsigned int MP0_3CON;
	  	  	  	 unsigned int MP0_3DAT;
				 unsigned int MP0_3PUD ;
				 unsigned int MP0_3DRV ;
				 unsigned int MP0_3CONPDN;
				 unsigned int MP0_3PUDPDN;
}mp0_3;
#define MP0_3 (* (volatile mp0_3 *)0xE0200320 )


/* timer */
typedef struct {
	  	  	  	 unsigned int TCFG0;
	  	  	  	 unsigned int TCFG1 ;
				 unsigned int TCON;
				 unsigned int TCNTB0;
				 unsigned int TCMPB0;
				 unsigned int TCNTO0;
				 unsigned int TCNTB1;
				 unsigned int TCMPB1;
				 unsigned int TCNTO1;
				 unsigned int TCNTB2;
				 unsigned int TCMPB2;
				 unsigned int TCNTO2;
				 unsigned int TCNTB3;
				 unsigned int TCMPB3;
				 unsigned int TCNTO3;
				 unsigned int TCNTB4;
				 unsigned int TCNTO4;
				 unsigned int TINT_CSTAT;
}timer;
#define TIMER (* (volatile timer *)0xE2500000 )

/*
*WATCHDOG TIMER
*/
typedef struct {
				unsigned int WTCON  ;
				unsigned int WTDAT  ;
				unsigned int WTCNT  ;
				unsigned int WTCLRINT  ;

}wdt;
#define  WDT (* (volatile wdt *)0xE2700000  )

/* GPH0 */
typedef struct {
				unsigned int GPH0CON;
				unsigned int GPH0DAT;
				unsigned int GPH0PULL;
				unsigned int GPH0DRV;
}gph0;
#define GPH0 (* (volatile gph0 *)0xE0200C00 )

/*
*VIC0 interrupt
*/
typedef struct {
				unsigned int VIC0IRQSTATUS;
				unsigned int VIC0FIQSTATUS;
				unsigned int VIC0RAWINTR;
				unsigned int VIC0INTSELECT;
				unsigned int VIC0INTENABLE;
				unsigned int VIC0INTENCLEAR;
				unsigned int VIC0SOFTINT;
				unsigned int VIC0SOFTINTCLEAR;
				unsigned int VIC0PROTECTION;
				unsigned int VIC0SWPRIORITYMASK;
				unsigned int VIC0PRIORITYDAISY;
}vic0interrupt;
#define  VIC0INTERRUPT (* (volatile vic0interrupt *)0xF2000000 )

/*
 * VIC0 Vector Address  Registers
 */
typedef struct {
				unsigned int VIC0VECTADDR0;
				unsigned int VIC0VECTADDR1;
				unsigned int VIC0VECTADDR2;
				unsigned int VIC0VECTADDR3;
				unsigned int VIC0VECTADDR4;
				unsigned int VIC0VECTADDR5;
				unsigned int VIC0VECTADDR6;
				unsigned int VIC0VECTADDR7;
				unsigned int VIC0VECTADDR8;
				unsigned int VIC0VECTADDR9;
				unsigned int VIC0VECTADDR10;
				unsigned int VIC0VECTADDR11;
				unsigned int VIC0VECTADDR12;
				unsigned int VIC0VECTADDR13;
				unsigned int VIC0VECTADDR14;
				unsigned int VIC0VECTADDR15;
				unsigned int VIC0VECTADDR16;
				unsigned int VIC0VECTADDR17;
				unsigned int VIC0VECTADDR18;
				unsigned int VIC0VECTADDR19;
				unsigned int VIC0VECTADDR20;
				unsigned int VIC0VECTADDR21;
				unsigned int VIC0VECTADDR22;
				unsigned int VIC0VECTADDR23;
				unsigned int VIC0VECTADDR24;
				unsigned int VIC0VECTADDR25;
				unsigned int VIC0VECTADDR26;
				unsigned int VIC0VECTADDR27;
				unsigned int VIC0VECTADDR28;
				unsigned int VIC0VECTADDR29;
				unsigned int VIC0VECTADDR30;
				unsigned int VIC0VECTADDR31;
}vic0vectaddr;
#define  VIC0VECTADDR (* (volatile vic0vectaddr *)0xF2000100 )

/*
 * VIC0 Vector Priority  Register
 */
typedef struct {
				unsigned int VIC0VECTPRIORITY0;
				unsigned int VIC0VECTPRIORITY1;
				unsigned int VIC0VECTPRIORITY2;
				unsigned int VIC0VECTPRIORITY3;
				unsigned int VIC0VECTPRIORITY4;
				unsigned int VIC0VECTPRIORITY5;
				unsigned int VIC0VECTPRIORITY6;
				unsigned int VIC0VECTPRIORITY7;
				unsigned int VIC0VECTPRIORITY8;
				unsigned int VIC0VECTPRIORITY9;
				unsigned int VIC0VECTPRIORITY10;
				unsigned int VIC0VECTPRIORITY11;
				unsigned int VIC0VECTPRIORITY12;
				unsigned int VIC0VECTPRIORITY13;
				unsigned int VIC0VECTPRIORITY14;
				unsigned int VIC0VECTPRIORITY15;
				unsigned int VIC0VECTPRIORITY16;
				unsigned int VIC0VECTPRIORITY17;
				unsigned int VIC0VECTPRIORITY18;
				unsigned int VIC0VECTPRIORITY19;
				unsigned int VIC0VECTPRIORITY20;
				unsigned int VIC0VECTPRIORITY21;
				unsigned int VIC0VECTPRIORITY22;
				unsigned int VIC0VECTPRIORITY23;
				unsigned int VIC0VECTPRIORITY24;
				unsigned int VIC0VECTPRIORITY25;
				unsigned int VIC0VECTPRIORITY26;
				unsigned int VIC0VECTPRIORITY27;
				unsigned int VIC0VECTPRIORITY28;
				unsigned int VIC0VECTPRIORITY29;
				unsigned int VIC0VECTPRIORITY30;
				unsigned int VIC0VECTPRIORITY31;
}vic0vectpriority;
#define  VIC0VECTPRIORITY (* (volatile vic0vectpriority *)0xF2000200 )

#define    	VIC0ADDRESS    		__REG(0xF2000F00)
/*
 * VIC0 Peripheral Identification Register
 */
typedef struct{
	            unsigned int VIC0PERIPHID0;
	            unsigned int VIC0PERIPHID1;
	            unsigned int VIC0PERIPHID2;
	            unsigned int VIC0PERIPHID3;
}vic0periphid;
#define  VIC0PERIPHID (* (volatile vic0periphid *)0xF2000FE0 )

/*
 * VIC0 PrimeCell Identification Register
 */
typedef struct{
	            unsigned int VIC0PCELLID0;
	            unsigned int VIC0PCELLID1;
	            unsigned int VIC0PCELLID2;
	            unsigned int VIC0PCELLID3;
}vic0pcellid;
#define  VIC0PCELLID (* (volatile vic0pcellid *)0xF2000FF0 )

/*****************************************    UART  * *************************************/
/* UART0*/
typedef struct {
				unsigned int ULCON0;
				unsigned int UCON0;
				unsigned int UFCON0;
				unsigned int UMCON0;
				unsigned int UTRSTAT0;
				unsigned int UERSTAT0;
				unsigned int UFSTAT0;
				unsigned int UMSTAT0;
				unsigned int UTXH0;
				unsigned int URXH0;
				unsigned int UBRDIV0;
				unsigned int UDIVSLOT0;
				unsigned int UINTP0;
				unsigned int UINTSP0;
				unsigned int UINTM0;
}uart0;
#define UART0 ( * (volatile uart0 *)0XE2900000 )

/*
 * UART1
 */
typedef struct {
				unsigned int ULCON1;
				unsigned int UCON1;
				unsigned int UFCON1;
				unsigned int UMCON1;
				unsigned int UTRSTAT1;
				unsigned int UERSTAT1;
				unsigned int UFSTAT1;
				unsigned int UMSTAT1;
				unsigned int UTXH1;
				unsigned int URXH1;
				unsigned int UBRDIV1;
				unsigned int UDIVSLOT1;
				unsigned int UINTP1;
				unsigned int UINTSP1;
				unsigned int UINTM1;
}uart1;
#define UART1 ( * (volatile uart1 *)0XE2900400 )

/*
 * UART2
 */
typedef struct {
				unsigned int ULCON2;
				unsigned int UCON2;
				unsigned int UFCON2;
				unsigned int UMCON2;
				unsigned int UTRSTAT2;
				unsigned int UERSTAT2;
				unsigned int UFSTAT2;
				unsigned int UMSTAT2;
				unsigned int UTXH2;
				unsigned int URXH2;
				unsigned int UBRDIV2;
				unsigned int UDIVSLOT2;
				unsigned int UINTP2;
				unsigned int UINTSP2;
				unsigned int UINTM2;
}uart2;
#define UART2 ( * (volatile uart2 *)0XE2900800 )

/*
 * UART3
 */
typedef struct {
				unsigned int ULCON3;
				unsigned int UCON3;
				unsigned int UFCON3;
				unsigned int UMCON3;
				unsigned int UTRSTAT3;
				unsigned int UERSTAT3;
				unsigned int UFSTAT3;
				unsigned int UMSTAT3;
				unsigned int UTXH3;
				unsigned int URXH3;
				unsigned int UBRDIV3;
				unsigned int UDIVSLOT3;
				unsigned int UINTP3;
				unsigned int UINTSP3;
				unsigned int UINTM3;
}uart3;
#define UART3 ( * (volatile uart3 *)0XE2900C00 )

/*  adc0 */
typedef struct {
				unsigned int TSADCCON0;
				unsigned int TSCON0;
				unsigned int TSDLY0;
				unsigned int TSDATX0;
				unsigned int TSDATY0;
				unsigned int TSPENSTAT0;
				unsigned int CLRINTADC0;
				unsigned int ADCMUX;
				unsigned int CLRINTPEN0;

}adc0;
#define ADC0	(* (volatile adc0 * )0xE1700000 )

/*  adc1 */
typedef struct {
				unsigned int TSADCCON1;
				unsigned int TSCON1;
				unsigned int TSDLY1;
				unsigned int TSDATX1;
				unsigned int TSDATY1;
				unsigned int TSPENSTAT1;
				unsigned int CLRINTADC1;
				unsigned int CLRINTPEN1;

}adc1;
#define ADC1	(* (volatile adc1 * )0xE1701000 )

/*   RTC */
typedef struct {
				unsigned int INTP;
				unsigned int RTC1[3];
				unsigned int RTCCON;
				unsigned int TICCNT;
				unsigned int RTC2[2];
				unsigned int RTCALM;
				unsigned int ALMSEC;
				unsigned int ALMMIN;
				unsigned int ALMHOUR;
				unsigned int ALMDAY;
				unsigned int ALMMON;
				unsigned int ALMYEAR;
				unsigned int RTC3[1];
				unsigned int BCDSEC;
				unsigned int BCDMIN;
				unsigned int BCDHOUR;
				unsigned int BCDDAYWEEK;
				unsigned int BCDDAY;
				unsigned int BCDMON;
				unsigned int BCDYEAR;
				unsigned int RTC4[1];
				unsigned int CURTICCNT;
}rtc;
#define		RTC (* (volatile rtc *)0XE2800030)

/*   I2C */
typedef struct {
				unsigned int I2CCON0;
				unsigned int I2CSTAT0;
				unsigned int I2CADD0;
				unsigned int I2CDS0;
				unsigned int I2CLC0;
}i2c0;
#define		I2C0 (* (volatile i2c0 *)0xE1800000)

/*   nand flash */
typedef struct {
				unsigned int NFCONF;
				unsigned int NFCONT;
				unsigned int NFCMMD;
				unsigned int NFADDR;
				unsigned int NFDATA;
				unsigned int NFMECCD0;
				unsigned int NFMECCD1;
				unsigned int NFSECCD;
				unsigned int NFSBLK;
				unsigned int NFEBLK;
				unsigned int NFSTAT;
				unsigned int NFECCERR0;
				unsigned int NFECCERR1;
				unsigned int NFMECC0;
				unsigned int NFMECC1;
				unsigned int NFSECC;
				unsigned int NFMLCBITPT;


}nfc;
#define		NFC (* (volatile nfc *)0xB0E00000)

/*
*SPI0 REGISTERS
*/
typedef struct {
				unsigned int CH_CFG0  ;
				unsigned int CLK_CFG0;
				unsigned int MODE_CFG0 ;
				unsigned int CS_REG0;
				unsigned int SPI_INT_EN0 ;
				unsigned int SPI_STATUS0 ;
				unsigned int SPI_TX_DATA0 ;
				unsigned int SPI_RX_DATA0;
				unsigned int PACKET_CNT_REG0  ;
				unsigned int PENDING_CLR_REG0 ;
				unsigned int SWAP_CFG0 ;
				unsigned int FB_CLK_SEL0  ;
}spi0;
#define  SPI0 (* (volatile spi0 *)0xE1300000 )

/*
*SPI1 REGISTERS
*/
typedef struct {
				unsigned int CH_CFG1  ;
				unsigned int CLK_CFG1;
				unsigned int MODE_CFG1 ;
				unsigned int CS_REG1;
				unsigned int SPI_INT_EN1 ;
				unsigned int SPI_STATUS1 ;
				unsigned int SPI_TX_DATA1 ;
				unsigned int SPI_RX_DATA1;
				unsigned int PACKET_CNT_REG1  ;
				unsigned int PENDING_CLR_REG1 ;
				unsigned int SWAP_CFG1 ;
				unsigned int FB_CLK_SEL1  ;
}spi1;
#define  SPI1 (* (volatile spi1 *)0xE1400000  )
#endif



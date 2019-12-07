#include "s5pv210.h"
void putc(const char data)
{
	UART0.UTXH0 = data;		//待发送数据送给发送寄存器UTXH0
	while(!(UART0.UTRSTAT0&0x2));	//等待发送结束-UATRSTAT0寄存器bit1为1.
}
void puts(const  char  *pstr)	//发送字符串函数
{
	while(*pstr != '\0')	//C语言中字符串存放是以0结束，判断是否传送结束可以据此判断
		{
		putc(*pstr++);
		}
}

void uart0_init(void)
{

	GPA0.GPA0CON = (GPA0.GPA0CON&0x00) | 0x22;//enable GPA0.0 GPA0.1 pin function mode // RXD0 TXD0 s5pv210的PDF133页 bit7-biy4，bit3-bit0 设置成 0010，0010 。
	UART0.ULCON0 = (UART0.ULCON0&0x80) | 0x83;       //8 bit 1 stop  No parity ULCON0寄存器设置串口帧格式。869页 bit5-bit0  00 0 11
	UART0.UCON0  = (UART0.UCON0&0xf0)| (0x1<<2 | 0x1);   				//设置UCON0，设置工作方式，bit3-bit0  01 01 通过中断或轮询收发数据。bit10，为0。设置串口所用时钟为PCLK，计算公式如下
	UART0.UFCON0 = UART0.UFCON0&0x0;						  //禁用FIFO 功能 。设置fifo控制寄存器，不用fifo
	UART0.UMCON0 = UART0.UMCON0&0xef;						  //禁用 AFC  功能。设置流控寄存器，不用流控
	UART0.UBRDIV0 = 34;						  //波特率配置 115200   UBRDIV0 = (PCLK / (bps x 16 ) ) -1
	UART0.UDIVSLOT0 = 13 ;   				  //用来调整精度的,比如:66000000/115200/16 -1
												  //                   =35.8 -1
												  //     			   =34.8
												  // slot0 = 8*16/10 = 12.8 设置UDIVSLOT0寄存器调整精度，把小数部分乘以16后取整，查表确定送给UDVIVSLOT0的值。表在880页

	printf("uart0 device ok\n");
}
unsigned char getc()
{
	unsigned char data;
	while(!(UART0.UTRSTAT0&0x1));	//判断是否收到数据,根据UTRSTAT0即0号串口的状态寄存器的最低位是否为1判断
	data = UART0.URXH0;					//收到数据取出
	return data;					//返回

}

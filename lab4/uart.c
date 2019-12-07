#include "s5pv210.h"
void putc(const char data)
{
	UART0.UTXH0 = data;		//�����������͸����ͼĴ���UTXH0
	while(!(UART0.UTRSTAT0&0x2));	//�ȴ����ͽ���-UATRSTAT0�Ĵ���bit1Ϊ1.
}
void puts(const  char  *pstr)	//�����ַ�������
{
	while(*pstr != '\0')	//C�������ַ����������0�������ж��Ƿ��ͽ������Ծݴ��ж�
		{
		putc(*pstr++);
		}
}

void uart0_init(void)
{

	GPA0.GPA0CON = (GPA0.GPA0CON&0x00) | 0x22;//enable GPA0.0 GPA0.1 pin function mode // RXD0 TXD0 s5pv210��PDF133ҳ bit7-biy4��bit3-bit0 ���ó� 0010��0010 ��
	UART0.ULCON0 = (UART0.ULCON0&0x80) | 0x83;       //8 bit 1 stop  No parity ULCON0�Ĵ������ô���֡��ʽ��869ҳ bit5-bit0  00 0 11
	UART0.UCON0  = (UART0.UCON0&0xf0)| (0x1<<2 | 0x1);   				//����UCON0�����ù�����ʽ��bit3-bit0  01 01 ͨ���жϻ���ѯ�շ����ݡ�bit10��Ϊ0�����ô�������ʱ��ΪPCLK�����㹫ʽ����
	UART0.UFCON0 = UART0.UFCON0&0x0;						  //����FIFO ���� ������fifo���ƼĴ���������fifo
	UART0.UMCON0 = UART0.UMCON0&0xef;						  //���� AFC  ���ܡ��������ؼĴ�������������
	UART0.UBRDIV0 = 34;						  //���������� 115200   UBRDIV0 = (PCLK / (bps x 16 ) ) -1
	UART0.UDIVSLOT0 = 13 ;   				  //�����������ȵ�,����:66000000/115200/16 -1
												  //                   =35.8 -1
												  //     			   =34.8
												  // slot0 = 8*16/10 = 12.8 ����UDIVSLOT0�Ĵ����������ȣ���С�����ֳ���16��ȡ�������ȷ���͸�UDVIVSLOT0��ֵ������880ҳ

	printf("uart0 device ok\n");
}
unsigned char getc()
{
	unsigned char data;
	while(!(UART0.UTRSTAT0&0x1));	//�ж��Ƿ��յ�����,����UTRSTAT0��0�Ŵ��ڵ�״̬�Ĵ��������λ�Ƿ�Ϊ1�ж�
	data = UART0.URXH0;					//�յ�����ȡ��
	return data;					//����

}

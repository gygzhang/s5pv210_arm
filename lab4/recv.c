#include"s5pv210.h"
int main()
{
	int i;
	char data;
	uart0_init();	//��ʼ��
	printf("UART0 Test\n"); //��ʾ��Ϣ
	printf("Please input one strings\n");
	while(1)
	{
		// 0 indicate not recive
		while(!(UART0.UTRSTAT0&0x01));	//�ж��Ƿ��յ�����
		data = UART0.URXH0;					//ȡ������
		//data="hhaha";
		putc(data);							//�ط�
	}

}

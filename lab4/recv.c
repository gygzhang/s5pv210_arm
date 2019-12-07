#include"s5pv210.h"
int main()
{
	int i;
	char data;
	uart0_init();	//初始化
	printf("UART0 Test\n"); //提示信息
	printf("Please input one strings\n");
	while(1)
	{
		// 0 indicate not recive
		while(!(UART0.UTRSTAT0&0x01));	//判断是否收到数据
		data = UART0.URXH0;					//取出数据
		//data="hhaha";
		putc(data);							//回发
	}

}

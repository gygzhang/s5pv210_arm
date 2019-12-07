

int main(){
	int *GPD0_GPD0CON = (int*)(0XE02000A0);
	int *timer_tcfg0 = (int*)(0xE2500000);
	int *timer_tcfg1 = (int*)(0xE2500004);
	int *timer_tcntb1 = (int*)(0xE2500018);
	int *timer_tcmpb1 = (int*)(0xE250001C);
	int *timer_tcon = (int*)(0xE2500008);
	int *data = (int*)(0xE0200064);
	int interval=500000;
	*GPD0_GPD0CON = ( *GPD0_GPD0CON & 0B00001111) | 0B00100000;
	*timer_tcfg0 = (*timer_tcfg0 & ~0xff) | 0xff ;
	*timer_tcfg1 =  (*timer_tcfg1 & ~0xf0) | 4<<4;
	*timer_tcntb1 = 16113;
	*timer_tcmpb1 = 16113/2;
	*timer_tcon =   (*timer_tcon & (~0xf00) | (1<<11)| (1<<10)| (0<<9)| (1<<8));

loop_buzzer:
	goto loop_buzzer;

loop:
	interval=500000;
	//*con=0x00011000;


	while(interval--){
		*data=0X18;
	}
	interval=500000;
	while(interval--){
		*data=0X00;
	}
	goto loop;
}

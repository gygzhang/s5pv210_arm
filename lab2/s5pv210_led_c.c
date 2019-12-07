

int main(){
	int *gpd0__gpd0con = (int*)(0XE02000A0);
	int *timer_tcfg0 = (int*)(0xE2500000);
	int *timer_tcfg1 = (int*)(0xE2500004);
	int *timer_tcntb1 = (int*)(0xE2500018);
	int *timer_tcmpb1 = (int*)(0xE250001C);
	int *timer_tcon = (int*)(0xE2500008);

	//set tout
	*gpd0__gpd0con = ( *gpd0__gpd0con &~ 0B11110000) | 0B00100000;
	//prescalar = 255
	*timer_tcfg0 = (*timer_tcfg0 & ~0xff) | 0xff ;
	//set divider 1/16
	*timer_tcfg1 =  (*timer_tcfg1 & ~0xf0) | 4<<4;

	*timer_tcntb1 = 16113;

	*timer_tcmpb1 = 16113/2;
	*timer_tcon =   (*timer_tcon & (~0xf00) | (1<<11)| (1<<10)| (1<<9)| (1<<8));
	*timer_tcon =   (*timer_tcon & (~0xf00) | (1<<11)| (1<<10)| (0<<9)| (1<<8));

	loop:
	goto loop;

}

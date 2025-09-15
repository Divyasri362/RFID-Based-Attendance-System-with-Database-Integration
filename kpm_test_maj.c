#include "kpm.h"
#include "lcd.h"
#include "int_defines.h"
#include "types.h"
#include "extrn_int.h"
#include "rtc.h"
#include "adc.h"
#include "lcd_defines.h"
#include "uart_defines.h"
#include "uart.h"
u32 i;
s32 hour,min,sec,date,month,year,day;
f32 eAR;
u32 adcVal;
main(){
	Init_UART0();
	Init_adc();
	ext_int();
	RTC_Init();
	InitLCD();
	Init_kpd();
	
	
	SetRTCTimeInfo(23,59,50);

	SetRTCDateInfo(10,5,2025);

	SetRTCDay(6);
	//U0_TxU32(year);
	
	while(1){
		//U0_TxByte(48);
		Read_adc(1,&eAR,&adcVal);
		GetRTCTimeInfo(&hour,&min,&sec);

		DisplayRTCTime(hour,min,sec);

		GetRTCDateInfo(&date,&month,&year);
		
		DisplayRTCDate(date,month,year);

		GetRTCDay(&day);

		DisplayRTCDay(day);
		cmdLCD(GOTO_LINE2_POS0+12);
		f32LCD(eAR*100,2);
	
		uart_dispaly_fun(hour,min,sec,date,month,year,day,adcVal,eAR);
	}
}

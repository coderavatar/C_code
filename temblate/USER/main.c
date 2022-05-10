#include "led.h"
#include "timer.h"
#include "delay.h"
#include "sys.h"
#include "stm32f10x.h"
#define k PBin(8)  
#define led PAout(8)	// PA8

 int main(void)
 {	 
	delay_init();	    	 //延时函数初始化	  
	LED_Init();
	timer_Init(1599,899);	 //不分频，PWM初始化
	while(1)
	{
//	TIM_SetCompare2(TIM4,90);	   //夹子 260张开
//	TIM_SetCompare4(TIM4,90);	   //夹子 260张开
//	delay_ms(1000);
//	TIM_SetCompare2(TIM4,120);	   //夹子 260张开
//	TIM_SetCompare4(TIM4,120);	   //夹子 260张开
//	delay_ms(1000);
//	TIM_SetCompare2(TIM4,150);	   //夹子 260张开
//	TIM_SetCompare4(TIM4,150);	   //夹子 260张开
//	delay_ms(1000);


	TIM_SetCompare2(TIM4,55);
  delay_ms(1000);
	delay_ms(1);
	TIM_SetCompare4(TIM4,85);	   //差10相差20度，90表示0度，小于90表示逆转，大于90表示正转【110.150】
	delay_ms(1000);
	delay_ms(1);
	TIM_SetCompare3(TIM4,110);
  delay_ms(1000);
	delay_ms(1);		
	TIM_SetCompare2(TIM4,80);	   
	delay_ms(1000);
	delay_ms(1);
	TIM_SetCompare3(TIM4,160);
  delay_ms(1000);
	delay_ms(1);	
	TIM_SetCompare4(TIM4,110);	   
	delay_ms(1000);
	delay_ms(1);
	}
	 
 }


 
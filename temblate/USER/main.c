#include "led.h"
#include "timer.h"
#include "delay.h"
#include "sys.h"
#include "stm32f10x.h"
#define k PBin(8)  
#define led PAout(8)	// PA8

 int main(void)
 {	 
	delay_init();	    	 //��ʱ������ʼ��	  
	LED_Init();
	timer_Init(1599,899);	 //����Ƶ��PWM��ʼ��
	while(1)
	{
//	TIM_SetCompare2(TIM4,90);	   //���� 260�ſ�
//	TIM_SetCompare4(TIM4,90);	   //���� 260�ſ�
//	delay_ms(1000);
//	TIM_SetCompare2(TIM4,120);	   //���� 260�ſ�
//	TIM_SetCompare4(TIM4,120);	   //���� 260�ſ�
//	delay_ms(1000);
//	TIM_SetCompare2(TIM4,150);	   //���� 260�ſ�
//	TIM_SetCompare4(TIM4,150);	   //���� 260�ſ�
//	delay_ms(1000);


	TIM_SetCompare2(TIM4,55);
  delay_ms(1000);
	delay_ms(1);
	TIM_SetCompare4(TIM4,85);	   //��10���20�ȣ�90��ʾ0�ȣ�С��90��ʾ��ת������90��ʾ��ת��110.150��
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


 
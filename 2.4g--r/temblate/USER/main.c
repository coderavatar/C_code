#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
//#include "key.h"
#include "spi.h"
#include "24l01.h"
#include "timer.h"
int main(void)
{ 
	u8 tmp_buf[33];
	u8 t;
	delay_init();	    	 //��ʱ������ʼ��	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2
	//uart_init(9600);	 	//���ڳ�ʼ��Ϊ9600
	LED_Init();		  		//��ʼ����LED���ӵ�Ӳ���ӿ�
// 	KEY_Init();				//������ʼ��
 	NRF24L01_Init();    	//��ʼ��NRF24L01  
	LED0=1;	
	timer_Init(1599,899);	 //����Ƶ��PWM��ʼ��	

	while(NRF24L01_Check())	//���NRF24L01�Ƿ���λ.	
	{
		LED0=1;
		delay_ms(200);
		LED0=0;
 		delay_ms(200);
	}
	LED0=0;	
		NRF24L01_RX_Mode();

	while(1)
	{	  					
		if(NRF24L01_RxPacket(tmp_buf)==0)//һ�����յ���Ϣ,����ʾ����.
		{
			tmp_buf[32]=0;//�����ַ���������
//			if(tmp_buf[5]==0)
				LED0=~LED0;
			  delay_ms(300);
//			for(t=0;t<3;t++)//32 is complete
//			{
//				//TIM_SetCompare1(TIM1,tmp_buf[30]);
//				TIM_SetCompare1(TIM1,tmp_buf[0]);
//				if(tmp_buf[t]==2)
//				{
//					LED0=0;
//					delay_ms(60);
//					LED0=1;
//					delay_ms(60);
//				}
//				else
//				{
//					LED0=1;
//				}
//			}
				//LCD_ShowString(0,190,239,32,16,tmp_buf);    
		}
	}
}

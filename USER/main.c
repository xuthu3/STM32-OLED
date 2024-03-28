#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "oled.h"
#include "delay.h"
#include "MODE_Select.h"
#include <stdio.h>
#include <math.h>
/************************************************
 ALIENTEKս��STM32������ʵ��1
 �����ʵ�� 
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/

#define PI 	3.141592653589793238
#define PI2	6.283185307179586476

int main()
{	
	int theta;
	int Cx,Cy;
	
	 delay_init();	    //��ʱ������ʼ��	  
	 LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	 OLED_Init( );
	 NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	 KEY_Init();      //������ʼ�� 
	 OLED_P6x8Str(0,0,"Cx=",0);
	 OLED_P6x8Str(0,2,"Cy=",0);
	while(1)
	{
			theta=90;
			Cx=(int)(168+50*cos((double)theta/360*PI2));
			Cy=(int)(128+50*sin((double)theta/360*PI2));
			Oled_Printf_U16(50,0,Cx,0);
			Oled_Printf_U16(50,1,Cy,0);
			delay_ms(10);
		
  }
}


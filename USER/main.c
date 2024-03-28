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
 ALIENTEK战舰STM32开发板实验1
 跑马灯实验 
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

#define PI 	3.141592653589793238
#define PI2	6.283185307179586476

int main()
{	
	int theta;
	int Cx,Cy;
	
	 delay_init();	    //延时函数初始化	  
	 LED_Init();		  	//初始化与LED连接的硬件接口
	 OLED_Init( );
	 NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	 KEY_Init();      //按键初始化 
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


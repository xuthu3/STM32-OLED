#ifndef _IIC_H_
#define _IIC_H_
#include "sys.h"

//本测试程序使用的是软件模拟IIC接口驱动
//IIC的数据引脚定义和时钟引脚定义都可以任意修改
//修改引脚定义后，需要对应修改oled.c中OLED_Init_GPIO函数里面引脚初始化

//定义IIC从设备地址
#define IIC_SLAVE_ADDR 0x78


//--------------IIC总线引脚定义-----------------------
#define OLED_SDA       GPIO_Pin_15  //OLED屏IIC数据信号
#define OLED_SCL       GPIO_Pin_13  //OLED屏IIC时钟信号

//--------------IIC端口操作定义---------------------
#define	OLED_SDA_SET()  	GPIO_SetBits(GPIOB,OLED_SDA) 
#define	OLED_SDA_CLR()  	GPIO_ResetBits(GPIOB,OLED_SDA) 
  
#define	OLED_SCL_SET()  	GPIO_SetBits(GPIOB,OLED_SCL)    
#define	OLED_SCL_CLR()  	GPIO_ResetBits(GPIOB,OLED_SCL)    

//IIC操作函数
void IIC_Start(void);
void IIC_Stop(void);
void IIC_Wait_Ack(void);
void Write_IIC_Byte(u8 IIC_Byte);
void Write_IIC_Command(u8 IIC_Command);
void Write_IIC_Data(u8 IIC_Data);

#endif

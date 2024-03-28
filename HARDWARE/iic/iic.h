#ifndef _IIC_H_
#define _IIC_H_
#include "sys.h"

//�����Գ���ʹ�õ������ģ��IIC�ӿ�����
//IIC���������Ŷ����ʱ�����Ŷ��嶼���������޸�
//�޸����Ŷ������Ҫ��Ӧ�޸�oled.c��OLED_Init_GPIO�����������ų�ʼ��

//����IIC���豸��ַ
#define IIC_SLAVE_ADDR 0x78


//--------------IIC�������Ŷ���-----------------------
#define OLED_SDA       GPIO_Pin_15  //OLED��IIC�����ź�
#define OLED_SCL       GPIO_Pin_13  //OLED��IICʱ���ź�

//--------------IIC�˿ڲ�������---------------------
#define	OLED_SDA_SET()  	GPIO_SetBits(GPIOB,OLED_SDA) 
#define	OLED_SDA_CLR()  	GPIO_ResetBits(GPIOB,OLED_SDA) 
  
#define	OLED_SCL_SET()  	GPIO_SetBits(GPIOB,OLED_SCL)    
#define	OLED_SCL_CLR()  	GPIO_ResetBits(GPIOB,OLED_SCL)    

//IIC��������
void IIC_Start(void);
void IIC_Stop(void);
void IIC_Wait_Ack(void);
void Write_IIC_Byte(u8 IIC_Byte);
void Write_IIC_Command(u8 IIC_Command);
void Write_IIC_Data(u8 IIC_Data);

#endif

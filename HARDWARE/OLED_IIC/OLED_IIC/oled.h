#ifndef  __OLED_H
#define  __OLED_H
#include "sys.h"

#define OLED_SCL PBout(6)
#define OLED_SDA PBout(7) 

#define high 1
#define low 0
#define X_WIDTH 	128
#define Y_WIDTH 	64
#define XLevelL		   0x02
#define XLevelH		   0x10
#define YLevel       0xB0
#define Brightness 196 //0~255��������

#define OLED_CMD     0	//д����
#define OLED_DATA    1	//д���� 


void OLED_GPIO_Init(void);
void OLED_IIC_Start(void);// -- ����I2C����
void OLED_IIC_Stop(void);// -- �ر�I2C����
void OLED_Write_IIC_Byte(unsigned char IIC_Byte);// -- ͨ��I2C����дһ��byte������
void OLED_WrDat(unsigned char dat);// -- ��OLED��д����
void OLED_WrCmd(unsigned char cmd);// -- ��OLED��д����
void OLED_Set_Pos(unsigned char x, unsigned char y);// -- ������ʾ����
void OLED_Fill(unsigned char bmp_dat);// -- ȫ����ʾ(��ʾBMPͼƬʱ�Ż��õ��˹���)
void OLED_CLS(void);// -- ��λ/����
void OLED_ON(void);
void OLED_OFF(void);
void OLED_Init(void);// -- OLED����ʼ�����򣬴˺���Ӧ�ڲ�����Ļ֮ǰ���ȵ���
void OLED_P6x8Str(unsigned char x,unsigned char y,unsigned char ch[],unsigned char against);// -- 6x8������������ʾASCII�����С���У���̫����
void OLED_P8x16Str(unsigned char x,unsigned char y,unsigned char ch[],unsigned char against);// -- 8x16������������ʾASCII�룬�ǳ�����
void OLED_Show6x8(unsigned char x,unsigned char y,unsigned int N,unsigned char against);
void OLED_Show8x16(unsigned char x,unsigned char y,unsigned int N,unsigned char against);
void OLED_Show16x16(unsigned char x,unsigned char y,unsigned int N,unsigned char against);// -- 16x16������������ʾ���ֵ���С���У������ø������塢�Ӵ֡���б���»��ߵ�
void Oled_Printf_U16(unsigned char x,unsigned char y,unsigned int num,unsigned char TextSize);
void Oled_Printf_Float(unsigned char x,unsigned char y,float num,unsigned char TextSize);
void OLED_Show1x1(unsigned char x,unsigned char y,unsigned int N,unsigned char against);

void OLED_Set_Pixel(unsigned char x, unsigned char y,unsigned char color);
void OLED_Display(void);                                  //��ʾ
void DrawLine(u8 x1, u8 y1, u8 x2, u8 y2,u8 color);      //��ֱ��
void DrawRectangle(u8 x1, u8 y1, u8 x2, u8 y2,u8 color);   //��������
void DrawPoint(u8 x,u8 y,u8 color);  //����
static void _draw_circle_8(u8 xc, u8 yc, u8 x, u8 y, u8 color);
void DrawCircle(u8 xc, u8 yc, u8 color, u8 r);// ��Բ
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
#endif

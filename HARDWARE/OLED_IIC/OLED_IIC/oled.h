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
#define Brightness 196 //0~255设置亮度

#define OLED_CMD     0	//写命令
#define OLED_DATA    1	//写数据 


void OLED_GPIO_Init(void);
void OLED_IIC_Start(void);// -- 开启I2C总线
void OLED_IIC_Stop(void);// -- 关闭I2C总线
void OLED_Write_IIC_Byte(unsigned char IIC_Byte);// -- 通过I2C总线写一个byte的数据
void OLED_WrDat(unsigned char dat);// -- 向OLED屏写数据
void OLED_WrCmd(unsigned char cmd);// -- 向OLED屏写命令
void OLED_Set_Pos(unsigned char x, unsigned char y);// -- 设置显示坐标
void OLED_Fill(unsigned char bmp_dat);// -- 全屏显示(显示BMP图片时才会用到此功能)
void OLED_CLS(void);// -- 复位/清屏
void OLED_ON(void);
void OLED_OFF(void);
void OLED_Init(void);// -- OLED屏初始化程序，此函数应在操作屏幕之前最先调用
void OLED_P6x8Str(unsigned char x,unsigned char y,unsigned char ch[],unsigned char against);// -- 6x8点整，用于显示ASCII码的最小阵列，不太清晰
void OLED_P8x16Str(unsigned char x,unsigned char y,unsigned char ch[],unsigned char against);// -- 8x16点整，用于显示ASCII码，非常清晰
void OLED_Show6x8(unsigned char x,unsigned char y,unsigned int N,unsigned char against);
void OLED_Show8x16(unsigned char x,unsigned char y,unsigned int N,unsigned char against);
void OLED_Show16x16(unsigned char x,unsigned char y,unsigned int N,unsigned char against);// -- 16x16点整，用于显示汉字的最小阵列，可设置各种字体、加粗、倾斜、下划线等
void Oled_Printf_U16(unsigned char x,unsigned char y,unsigned int num,unsigned char TextSize);
void Oled_Printf_Float(unsigned char x,unsigned char y,float num,unsigned char TextSize);
void OLED_Show1x1(unsigned char x,unsigned char y,unsigned int N,unsigned char against);

void OLED_Set_Pixel(unsigned char x, unsigned char y,unsigned char color);
void OLED_Display(void);                                  //显示
void DrawLine(u8 x1, u8 y1, u8 x2, u8 y2,u8 color);      //画直线
void DrawRectangle(u8 x1, u8 y1, u8 x2, u8 y2,u8 color);   //画正方形
void DrawPoint(u8 x,u8 y,u8 color);  //画点
static void _draw_circle_8(u8 xc, u8 yc, u8 x, u8 y, u8 color);
void DrawCircle(u8 xc, u8 yc, u8 color, u8 r);// 画圆
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
#endif

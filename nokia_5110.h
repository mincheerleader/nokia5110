#ifndef __NOKIA_5110_H__
#define __NOKIA_5110_H__

#include "stm32f10x.h"

#define	LCD_GPIO_CLK				RCC_APB2Periph_GPIOA		//LCD ±÷”


#define LCD_SCLK_Pin				GPIO_Pin_0
#define LCD_SCLK_GPIO_PORT  GPIOA

#define LCD_SDIN_Pin				GPIO_Pin_1
#define LCD_SDIN_GPIO_PORT  GPIOA

#define LCD_DC_Pin					GPIO_Pin_2
#define LCD_DC_GPIO_PORT  	GPIOA

#define LCD_CE_Pin					GPIO_Pin_3
#define LCD_CE_GPIO_PORT  	GPIOA

#define LCD_RST_Pin					GPIO_Pin_4
#define LCD_RST_GPIO_PORT  	GPIOA

#define LCD_SCLK_H()		GPIO_SetBits(GPIOA,GPIO_Pin_0);
#define LCD_SCLK_L()		GPIO_ResetBits(GPIOA,GPIO_Pin_0);

#define LCD_SDIN_H()		GPIO_SetBits(GPIOA,GPIO_Pin_1);
#define LCD_SDIN_L()		GPIO_ResetBits(GPIOA,GPIO_Pin_1);

#define LCD_DC_H()			GPIO_SetBits(GPIOA,GPIO_Pin_2);
#define LCD_DC_L()			GPIO_ResetBits(GPIOA,GPIO_Pin_2);

#define LCD_CE_H()			GPIO_SetBits(GPIOA,GPIO_Pin_3);
#define LCD_CE_L()			GPIO_ResetBits(GPIOA,GPIO_Pin_3);

#define LCD_RST_H()			GPIO_SetBits(GPIOA,GPIO_Pin_4);
#define LCD_RST_L()			GPIO_ResetBits(GPIOA,GPIO_Pin_4);

void LCD_init(void);
void LCD_GPIO_Init(void );
void LCD_clear(void);
void LCD_move_chinese_string(unsigned char X, unsigned char Y, unsigned char T); 
void LCD_write_english_string(unsigned char X,unsigned char Y,char *s);
void LCD_write_chinese_string(unsigned char X, unsigned char Y,
                   unsigned char ch_with,unsigned char num,
                   unsigned char line,unsigned char row);
void chinese_string(unsigned char X, unsigned char Y, unsigned char T);                 
void LCD_write_char(unsigned char c);
void LCD_draw_bmp_pixel(unsigned char X,unsigned char Y,unsigned char *map,
                  unsigned char Pix_x,unsigned char Pix_y);
void LCD_write_byte(unsigned char dat, unsigned char dc);
void LCD_set_XY(unsigned char X, unsigned char Y);
void delay_1us(void);                 

#endif
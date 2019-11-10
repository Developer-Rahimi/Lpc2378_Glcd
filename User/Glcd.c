#include "glcd.h" 
#include "font5x8.h"

#include <lpc23xx.h>
#include <string.h>

void shift(unsigned char x)
{
	unsigned char i;
	for(i=0;i<8;i++)
	{
		if( x & (0x01<<i))
		{
			DataSet |= 1<<(i+DB0);
		}
		else
		{
			DataClr |= 1<<(i+DB0);		
		}
	}
}

void glcd_write(unsigned char c)
{
	shift(c);
	GLCD_PULSE();
}
void delay_small()
{
	unsigned char counter;
	for(counter=0;counter<2;counter++);
}
void GLCD_PULSE()
{
	DataSet|=1<<EN;
	delay_small();
	DataClr|=1<<EN;
}

void CHIP_LEFT()
{
	DataSet|=1<<CS1;
	delay_small();
	DataClr|=1<<CS2;
}
void CHIP_RIGHT()
{
	DataSet|=1<<CS2;
	delay_small();
	DataClr|=1<<CS1;
}

void glcd_init(void)
{
	DataDir|=(1<<RST)|(1<<CS1)|(1<<CS2)|(1<<EN)|(1<<RS)|(1<<RW)|(0xFF<<DB0);
	DataSet|=(1<<RST)|(1<<CS1)|(1<<CS2);
	glcd_write(0x3F);			//display on/off
	
}


void glcd_gotox(unsigned char c)
{
	DataClr|=1<<RS;
	glcd_write(c+0xB8);
	DataSet|=1<<RS;
}

void glcd_gotoy(unsigned char c)
{
	DataClr|=1<<RS;
	glcd_write(c+0x40);
	DataSet|=1<<RS;
}

void glcd_gotoz(unsigned char c)
{
	DataClr|=1<<RS;
	glcd_write(c+0xC0);
	DataSet|=1<<RS;
}

void glcd_clear(void)
{
	char i,j;
	DataClr|=(1<<CS1)|(1<<CS2);
	glcd_gotoy(0);
	glcd_gotoz(0);
	for(i=0;i<8;i++)
	{
		glcd_gotox(i);
		glcd_gotoy(0);
		glcd_gotoz(0);
		for(j=0;j<=63;j++)
		{
			delay_small();
			glcd_write(0x00);
		}
	}
}
void glcd_fill(void)
{
	char i,j;
	DataClr|=(1<<CS1)|(1<<CS2);
	glcd_gotoy(0);
	//glcd_gotoz(0);
	for(i=0;i<8;i++)
	{
		glcd_gotox(i);
		glcd_gotoy(0);
		//glcd_gotoz(0);
		for(j=0;j<=128;j++)
		{
			if(j<64){
			CHIP_LEFT();
			glcd_gotox(i);
			glcd_gotoy(j);
			}
			else {
			CHIP_RIGHT();
			glcd_gotox(i);
			glcd_gotoy(j-64);
			}
			
			delay_small();
			glcd_write(0x00);
		}
	}
}
void WriteChar(int x,int y,char data){
			int i=0;
			for(i=0;i<8;i++){
  			if(y+i<64){
			CHIP_LEFT();
			glcd_gotox(x);
			glcd_gotoy(y+i);
			}
			else {
			CHIP_RIGHT();
			glcd_gotox(x);
			glcd_gotoy(y-64+i);
			}
			   glcd_write(font8[data][i]);
			}	   
}
void WriteString(int x,int y,char *data,int size){ /*sizeof(data)*/
			int i=0;
			for(i=0;i<size;i++){
  			   WriteChar(x,(i*8)+y,data[i]);
			}	   
}				
void glcd_display(const char *image)
{
	unsigned int i,j;
		for(i=0;i<8;i++)
		{
			CHIP_LEFT();
			glcd_gotox(i);
			glcd_gotoy(0);
			glcd_gotoz(0);
			for(j=0;j<=63;j++)
			{			
				glcd_write((image[128*i+j]));
			}
			CHIP_RIGHT();
			glcd_gotox(i);
			glcd_gotoy(0);
			glcd_gotoz(0);
			for(j=0;j<=63;j++)
			{
				glcd_write((image[128*i+j+64]));
			}		
		}
}

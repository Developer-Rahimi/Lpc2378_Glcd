#ifndef _GLCD_H
#define	_GLCD_H

//Connection Diagram
#define CS1 13
#define CS2 14
#define RS 12 
#define RW 11
#define EN 10
#define RST 15
#define DB0 0
#define DataDir FIO4DIR
#define DataPin FIO4PIN
#define DataSet FIO4SET
#define DataClr FIO4CLR

//Function Prototype   
extern void glcd_init(void);		//Initialize the Graphical LCD Based on KS0108 Controller
extern void glcd_write(unsigned char c);	//Write to Graphical LCD
extern void glcd_gotox(unsigned char c);	//Go to the Page Specified by the paramenter
extern void glcd_gotoy(unsigned char c);	//Go to the column Specified by the Paramenter
extern void glcd_gotoz(unsigned char c);	//Go to the Line Specified by the Parameter
extern void glcd_clear(void);	//Clear the Graphical LCD
extern void glcd_fill(void);	//Clear the Graphical LCD
extern void WriteChar(int x,int y,char data);	//Clear the Graphical LCD
extern void WriteString(int x,int y,char *data,int size);	//Clear the Graphical LCD
extern void GLCD_PULSE(void);	//Send Pulse to the Graphical LCD
extern void CHIP_LEFT(void);	//Select the Left COntroller
extern void CHIP_RIGHT(void);	//Select the Right Controller
extern void delay_small(void);//Give a small delay for Enable high and low for GLCD_EN pin
extern void glcd_display(const char *);//Shows the image on Graphical LCD Screen
extern void shift(unsigned char);
extern void writestring(char str[],int x,int y);
extern void putIt(int c,int x,int y);
extern void rect(int x1,int x2,int y1,int y2) ;
#endif

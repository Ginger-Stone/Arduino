#include <TouchScreen.h> //Allow touch recog
#include "Adafruit_TFTLCD.h"
#include "Adafruit_GFX.h" // Hardware-specific library
#include <MCUFRIEND_kbv.h>


//pins to control the screen
#define YP A1  
#define YM 6
#define XM A2
#define XP 7

#define  WHITE   0x0000
#define YELLOW    0x001F
#define RED     0xF00
#define MAGENTA  0x07E0
#define CYAN    0x07FF
#define GREEN 0xF81F
#define BLUE  0xFFE0
#define BLACK   0xFFFF

// work in line numbers.  Font height in ht
int16_t ht = 16, top = 3, line, lines = 15, scroll;

//instance of the library
MCUFRIEND_kbv tft;

int i;
  void circle(){
  tft.drawCircle(150,260,25,RED);
tft.fillCircle(150,260,22,BLACK);
delay(100);
tft.fillCircle(150,260,19,RED);
delay(100);
tft.fillCircle(150,260,16,BLACK);
  }

    void circle1(){
  tft.drawCircle(100,260,25,RED);
tft.fillCircle(100,260,22,BLACK);
delay(100);
tft.fillCircle(100,260,19,YELLOW);
delay(100);
tft.fillCircle(100,260,16,BLUE);
  }

      void circle2(){
  tft.drawCircle(50,260,25,RED);
tft.fillCircle(50,260,22,BLACK);
delay(100);
tft.fillCircle(50,260,19,YELLOW);
delay(100);
tft.fillCircle(50,260,16,BLUE);
  }
  
void setup() {
  // put your setup code here, to run once:
 tft.reset();
tft.begin();
uint16_t id = tft.readID();
tft.fillScreen(GREEN);
tft.setTextSize(2);
tft.setRotation(90);
tft.println("CEDARLAB TECNICS");
tft.println("by Dee.");
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=1;i<4;i++)
{
  circle();
}
tft.println("Hello Dee.");
for(i=4; i<8;i++)
{
circle1();
tft.println("You Are Awesome.");
}
for(i=8;i<12;i++)
{
  circle2();
}
tft.println("Yes, You are");
}

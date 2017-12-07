#include <Adafruit_GFX.h>
#include <MCUFRIEND_kbv.h>


#define LCD_CS A3 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0
#define LCD_RESET A4 

// Color definitions
#define BLACK 0x0000
#define BLUE 0x001F
#define RED  0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF

MCUFRIEND_kbv tft;

void setup() {
  // put your setup code here, to run once:
  tft.begin(9600);
tft.fillScreen(BLUE);
}

void loop() {
  // put your main code here, to run repeatedly:

}

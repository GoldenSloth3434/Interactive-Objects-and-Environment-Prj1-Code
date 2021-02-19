// testshapes demo for Adafruit RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 16x32 RGB LED matrix:
// http://www.adafruit.com/products/420

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

#include <RGBmatrixPanel.h>

// Most of the signal pins are configurable, but the CLK pin has some
// special constraints.  On 8-bit AVR boards it must be on PORTB...
// Pin 8 works on the Arduino Uno & compatibles (e.g. Adafruit Metro),
// Pin 11 works on the Arduino Mega.  On 32-bit SAMD boards it must be
// on the same PORT as the RGB data pins (D2-D7)...
// Pin 8 works on the Adafruit Metro M0 or Arduino Zero,
// Pin A4 works on the Adafruit Metro M4 (if using the Adafruit RGB
// Matrix Shield, cut trace between CLK pads and run a wire to A4).

#define CLK  8   // USE THIS ON ARDUINO UNO, ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
//#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2

RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);

void setup() {
//IT ALL STARTS BELOW HERE VVVVVVVVVVV
  matrix.begin();

//NOTE TO SELF 
//DESPITE BEING A 16x32 MATRIX, IT COUNTS THE VERY FIRST LED AS 0,0 NOT 1,1
//MEANING THE 4 CORNERS ARE
//TOP LEFT
//matrix.drawPixel(0,0, matrix.Color333(0,0,7));
//TOP RIGHT
//matrix.drawPixel(31,0, matrix.Color333(0,0,7));
//BOTTOM LEFT
//matrix.drawPixel(0,15, matrix.Color333(0,0,7));
//BOTTOM RIGHT
//matrix.drawPixel(31,15, matrix.Color333(0,0,7));

//matrix.drawLine(13, 3, 17, 3, matrix.Color333(7, 7, 7));

//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE

//delay(500);
//matrix.fillScreen(matrix.Color333(0, 0, 0));

////Start Here
////TOP LEFT
//matrix.drawPixel(0,0, matrix.Color333(7,0,0));
////TOP RIGHT
//matrix.drawPixel(31,0, matrix.Color333(0,7,0));
////BOTTOM LEFT
//matrix.drawPixel(0,15, matrix.Color333(0,0,7));
////BOTTOM RIGHT
//matrix.drawPixel(31,15, matrix.Color333(7,7,7));

delay(750);
matrix.fillScreen(matrix.Color333(0, 0, 0));


//The way the line function works is it has 4 values. The matrix will display a line that starts at the first coordinate, (x,x) and end at the second coordinate(y,y(
//matrix.drawLine(14, 3, 14, 7, matrix.Color333(7, 7, 7));
//first value is X (Left and right)
//second value is Y (Up and down)

//THIS IS HOW YOU DRAW A SINGLE PIXEL
//matrix.drawPixel(14, 10, matrix.Color333(7, 7, 7));

//matrix.drawPixel(15, 5, matrix.Color333(7, 7, 7));

//THIS IS HOW YOU DELAY!!!!!!!!
//  delay(3000);

// fill the screen with black
// matrix.fillScreen(matrix.Color333(0, 0, 0));
 
//  // draw some text! DRAW SOME TEXT!
//  matrix.setCursor(1, 0);  // start at top left, with one pixel of spacing
//  matrix.setTextSize(1);   // size 1 == 8 pixels high
//
 
//   print each letter with a rainbow color
//  matrix.setTextColor(matrix.Color333(0,0,0));
//  matrix.print('O');

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 1

  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('d');
  
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('d');

  delay(3000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
matrix.setCursor(1, 0);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MESSAGE 2
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('S');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('t');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('n');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('d');

  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('u');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('i');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('u');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('p');
  matrix.setTextColor(matrix.Color333(7,7,7));
  matrix.print('!');
  
  matrix.setTextColor(matrix.Color333(0,7,7));
  matrix.print('*');
  matrix.setTextColor(matrix.Color333(0,4,7));
  matrix.print('R');
  matrix.setTextColor(matrix.Color333(0,0,7));
  matrix.print('G');
  matrix.setTextColor(matrix.Color333(4,0,7));
  matrix.print('B');
  matrix.setTextColor(matrix.Color333(7,0,4));
  matrix.print('*');
  
  delay(3000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 1
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 13, 12, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 13, 19, 15, matrix.Color333(7, 7, 7));

  delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 2
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(8, 13, 23, 13, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 12, 9, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 12, 22, 14, matrix.Color333(7, 7, 7));

  delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 3 FIRST STRETCH FRAME
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 4 UP
//HEAD
matrix.drawLine(13, 2, 18, 2, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 3, 12, 8, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,9, matrix.Color333(7,7,7));
matrix.drawPixel(18,9, matrix.Color333(7,7,7));
matrix.drawLine(19, 3, 19, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 10, 17, 10, matrix.Color333(7, 7, 7));

//FACE
matrix.drawPixel(14,4, matrix.Color333(7,7,7));
matrix.drawPixel(17,4, matrix.Color333(7,7,7));
matrix.drawPixel(14,6, matrix.Color333(7,7,7));
matrix.drawPixel(17,6, matrix.Color333(7,7,7));
matrix.drawPixel(15,7, matrix.Color333(7,7,7));
matrix.drawPixel(16,7, matrix.Color333(7,7,7));

//BODY
matrix.drawLine(15, 11, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 11, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 12, 10, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(10, 7, 9, 8, matrix.Color333(7, 7, 7));

matrix.drawLine(17, 12, 21, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(21, 7, 22, 8, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 5 DOWN
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(750);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 6 UP
//HEAD
matrix.drawLine(13, 2, 18, 2, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 3, 12, 8, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,9, matrix.Color333(7,7,7));
matrix.drawPixel(18,9, matrix.Color333(7,7,7));
matrix.drawLine(19, 3, 19, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 10, 17, 10, matrix.Color333(7, 7, 7));

//FACE
matrix.drawPixel(14,4, matrix.Color333(7,7,7));
matrix.drawPixel(17,4, matrix.Color333(7,7,7));
matrix.drawPixel(14,6, matrix.Color333(7,7,7));
matrix.drawPixel(17,6, matrix.Color333(7,7,7));
matrix.drawPixel(15,7, matrix.Color333(7,7,7));
matrix.drawPixel(16,7, matrix.Color333(7,7,7));

//BODY
matrix.drawLine(15, 11, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 11, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 12, 10, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(10, 7, 9, 8, matrix.Color333(7, 7, 7));

matrix.drawLine(17, 12, 21, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(21, 7, 22, 8, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


 //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 7 DOWN
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(750);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 8 UP
//HEAD
matrix.drawLine(13, 2, 18, 2, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 3, 12, 8, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,9, matrix.Color333(7,7,7));
matrix.drawPixel(18,9, matrix.Color333(7,7,7));
matrix.drawLine(19, 3, 19, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 10, 17, 10, matrix.Color333(7, 7, 7));

//FACE
matrix.drawPixel(14,4, matrix.Color333(7,7,7));
matrix.drawPixel(17,4, matrix.Color333(7,7,7));
matrix.drawPixel(14,6, matrix.Color333(7,7,7));
matrix.drawPixel(17,6, matrix.Color333(7,7,7));
matrix.drawPixel(15,7, matrix.Color333(7,7,7));
matrix.drawPixel(16,7, matrix.Color333(7,7,7));

//BODY
matrix.drawLine(15, 11, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 11, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 12, 10, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(10, 7, 9, 8, matrix.Color333(7, 7, 7));

matrix.drawLine(17, 12, 21, 8, matrix.Color333(7, 7, 7));
matrix.drawLine(21, 7, 22, 8, matrix.Color333(7, 7, 7));

delay(1000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 9 DOWN
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawPixel(14,13, matrix.Color333(7,7,7));
matrix.drawLine(13, 13, 9, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 8, 8, 9, matrix.Color333(7, 7, 7));

matrix.drawPixel(17,13, matrix.Color333(7,7,7));
matrix.drawLine(18, 13, 22, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 8, 23, 9, matrix.Color333(7, 7, 7));

delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 10
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(8, 13, 23, 13, matrix.Color333(7, 7, 7));
matrix.drawLine(9, 12, 9, 14, matrix.Color333(7, 7, 7));
matrix.drawLine(22, 12, 22, 14, matrix.Color333(7, 7, 7));

  delay(500);
  matrix.fillScreen(matrix.Color333(0, 0, 0));


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STRETCH ANIMATION 11
//HEAD
matrix.drawLine(13, 3, 18, 3, matrix.Color333(7, 7, 7));
matrix.drawLine(12, 4, 12, 9, matrix.Color333(7, 7, 7));
matrix.drawPixel(13,10, matrix.Color333(7,7,7));
matrix.drawPixel(18,10, matrix.Color333(7,7,7));
matrix.drawLine(19, 4, 19, 9, matrix.Color333(7, 7, 7));
matrix.drawLine(14, 11, 17, 11, matrix.Color333(7, 7, 7));

//FACE
matrix.drawLine(14, 5, 14, 6, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 5, 17, 6, matrix.Color333(7, 7, 7));
matrix.drawPixel(14,8, matrix.Color333(7,7,7));
matrix.drawPixel(17,8, matrix.Color333(7,7,7));
matrix.drawLine(15, 9, 16, 9, matrix.Color333(7, 7, 7));

//BODY
matrix.drawLine(15, 12, 15, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(16, 12, 16, 15, matrix.Color333(7, 7, 7));

//ARMS
matrix.drawLine(14, 13, 12, 15, matrix.Color333(7, 7, 7));
matrix.drawLine(17, 13, 19, 15, matrix.Color333(7, 7, 7));

  delay(500);
  
}
void loop() {
  // Do nothing -- image doesn't change
}

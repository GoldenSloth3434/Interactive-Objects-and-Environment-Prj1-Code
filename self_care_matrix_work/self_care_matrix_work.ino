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
  matrix.setTextSize(1);    // size 1 == 8 pixels high

  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('R');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('e');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('l');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('a');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('x');

  delay(4000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 1, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 2, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 3, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 4, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 5, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 7
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 6, 7));
  delay(1500);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 8
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(1500);


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 1, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 2, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 3, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 4, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 5, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 7
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 6, 7));
  delay(1500);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 8
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(1500);


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 1, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 2, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 3, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 4, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 5, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 7
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 6, 7));
  delay(1500);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 8
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(1500);


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 1, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 2, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 3, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 4, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 5, 7));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 7
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 6, 7));
  delay(1500);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 8
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 7, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 6
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 6, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 5
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 5, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 4
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 4, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 3
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 3, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 2
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 2, matrix.Color333(0, 0, 0));
  delay(571);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Breathe 1
//CIRCLE VALUES
//VALUE 1= X POSITION IE HORIZONTAL
//VALUE 2= Y POSITION IE VERTICLE
//VALUE 3= SIZE OF CIRCLE
  matrix.drawCircle(15, 8, 1, matrix.Color333(0, 0, 7));
  delay(1500);
matrix.fillScreen(matrix.Color333(0, 0, 0));

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Message 2
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.setCursor(1, 0);

  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('G');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('d');
  matrix.setTextColor(matrix.Color333(0,0,0));
  matrix.print('o');
 
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('W');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('o');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('r');
  matrix.setTextColor(matrix.Color333(0,3,5));
  matrix.print('k');


  delay(4000);
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}
void loop() {
  // Do nothing -- image doesn't change
}

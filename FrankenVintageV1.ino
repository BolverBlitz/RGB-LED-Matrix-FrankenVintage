// colorwheel demo for Adafruit RGBmatrixPanel library.
// Renders a nice circle of hues on our 32x32 RGB LED matrix:
// http://www.adafruit.com/products/607

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

// If your 32x32 matrix has the SINGLE HEADER input,
// use this pinout:
#define CLK 11  // MUST be on PORTB! (Use pin 11 on Mega)
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3
#define Boost 0
// If your matrix has the DOUBLE HEADER input, use:
//#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
//#define LAT 9
//#define OE  10
//#define A   A3
//#define B   A2
//#define C   A1
//#define D   A0
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false,64);

void FankenLogo(byte PunktX,byte PunktY, byte FarbeObenR, byte FarbeObenG, byte FarbeObenB, byte FarbeUntenR, byte FarbeUntenG, byte FarbeUntenB, byte FarbeFrameR, byte FarbeFrameG, byte FarbeFrameB){
  matrix.drawLine(PunktX+1, PunktY+1, PunktX+13, PunktY+1, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+1, PunktY+2, PunktX+13, PunktY+2, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+1, PunktY+3, PunktX+1, PunktY+5, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+2, PunktY+3, PunktX+2, PunktY+4, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+4, PunktY+3, PunktX+4, PunktY+5, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+1, PunktY+3, PunktX+1, PunktY+6, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+5, PunktY+3, PunktX+5, PunktY+6, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+6, PunktY+3, PunktX+6, PunktY+4, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+8, PunktY+3, PunktX+8, PunktY+4, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+9, PunktY+3, PunktX+9, PunktY+6, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+10, PunktY+3, PunktX+10, PunktY+4, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+12, PunktY+3, PunktX+12, PunktY+4, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));
  matrix.drawLine(PunktX+13, PunktY+3, PunktX+13, PunktY+6, matrix.Color333(FarbeObenR, FarbeObenG, FarbeObenB));

  matrix.drawLine(PunktX+1, PunktY+7, PunktX+1, PunktY+13, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+2, PunktY+5, PunktX+2, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+3, PunktY+3, PunktX+3, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+4, PunktY+5, PunktX+4, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+5, PunktY+7, PunktX+5, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+6, PunktY+5, PunktX+6, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+7, PunktY+3, PunktX+7, PunktY+16, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+8, PunktY+5, PunktX+8, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+9, PunktY+7, PunktX+9, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+10, PunktY+5, PunktX+10, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+11, PunktY+3, PunktX+11, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+12, PunktY+5, PunktX+12, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  matrix.drawLine(PunktX+13, PunktY+7, PunktX+13, PunktY+13, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  
  matrix.drawLine(PunktX, PunktY, PunktX+14, PunktY, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawLine(PunktX, PunktY+1, PunktX, PunktY+13, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawLine(PunktX+14, PunktY+1, PunktX+14, PunktY+13, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+1, PunktY+14, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  matrix.drawPixel(PunktX+2, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+3, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+4, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  matrix.drawPixel(PunktX+5, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+6, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+7, PunktY+17, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+8, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  matrix.drawPixel(PunktX+9, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+10, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+11, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  matrix.drawPixel(PunktX+12, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  matrix.drawPixel(PunktX+13, PunktY+14, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
  }

void setup() {


  matrix.begin();
  matrix.setTextWrap(false);
        // draw some text!
      matrix.setTextSize(1);   


     
      matrix.setCursor(2, 0); 
      matrix.setTextColor(matrix.Color333(7,0,0));

      
      matrix.print('F');
      matrix.print('r');
      matrix.print('a');
      matrix.print('n');
      matrix.print('k');
      matrix.print('e'); 
      matrix.print('n');
      
     /* matrix.setCursor(2, 9); 
      matrix.setTextColor(matrix.Color333(4,4,4));
      matrix.print('V');
      matrix.print('i');
      matrix.print('n');
      matrix.print('t');
      matrix.print('a');
      matrix.print('g');
      matrix.print('e');

      */FankenLogo(44,1,7,0,0,4,4,4,0,2,4);
}

void Bus(byte StartX, byte StartY, byte OffsetX, byte OffsetY, byte Speed, byte r, byte g, byte b, byte rr, byte rg, byte rb){
  matrix.setTextColor(matrix.Color333(4,4,4));
  
  
  if (OffsetX == 10) {
    matrix.setCursor(2, 14);
    matrix.print('V');
  }
  if (OffsetX == 15) {
    matrix.setCursor(8, 14);
    matrix.print('i');
  }
  if (OffsetX == 21) {
    matrix.setCursor(14, 14);
    matrix.print('n');
  }
  if (OffsetX == 27) {
    matrix.setCursor(20, 14);
    matrix.print('t');
  }
  if (OffsetX == 33) {
    matrix.setCursor(26, 14);
    matrix.print('a');
  }
  if (OffsetX == 39) {
    matrix.setCursor(31, 14);
    matrix.print('g');
  }
  if (OffsetX == 45) {
    matrix.setCursor(36, 14);
    matrix.print('e');
  }
  byte PunktX = 44;
  byte PunktY = 1;
  byte FarbeFrameR = 0;
  byte FarbeFrameG = 2;
  byte FarbeFrameB = 4;
  byte FarbeUntenR = 4;
  byte FarbeUntenG = 4;
  byte FarbeUntenB = 4;
  if (OffsetX == 68) {
    matrix.drawLine(PunktX, PunktY+1, PunktX, PunktY+13, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawPixel(PunktX+1, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 69) {
    matrix.drawPixel(PunktX+2, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+1, PunktY+7, PunktX+1, PunktY+13, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
  }
  if (OffsetX == 70) {
    matrix.drawPixel(PunktX+3, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+2, PunktY+5, PunktX+2, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+1, PunktY+7, PunktX+1, PunktY+13, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+1, PunktY+14, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+1) {
    matrix.drawPixel(PunktX+4, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+3, PunktY+3, PunktX+3, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+2, PunktY+5, PunktX+2, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+2, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+2) {
    matrix.drawPixel(PunktX+5, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+4, PunktY+5, PunktX+4, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+3, PunktY+3, PunktX+3, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+3, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+3) {
    matrix.drawPixel(PunktX+6, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+5, PunktY+7, PunktX+5, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+4, PunktY+5, PunktX+4, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+4, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+4) {
    matrix.drawPixel(PunktX+8, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+6, PunktY+5, PunktX+6, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+5, PunktY+7, PunktX+5, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+5, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+5) {
    matrix.drawPixel(PunktX+9, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+7, PunktY+3, PunktX+7, PunktY+16, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+6, PunktY+5, PunktX+6, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+6, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+6) {
    matrix.drawPixel(PunktX+10, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+8, PunktY+5, PunktX+8, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+7, PunktY+3, PunktX+7, PunktY+16, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+7, PunktY+17, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+7) {
    matrix.drawPixel(PunktX+11, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+9, PunktY+7, PunktX+9, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+8, PunktY+5, PunktX+8, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+8, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+8) {
    matrix.drawPixel(PunktX+12, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+10, PunktY+5, PunktX+10, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+9, PunktY+7, PunktX+9, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+9, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+9) {
    matrix.drawPixel(PunktX+13, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+11, PunktY+3, PunktX+11, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+10, PunktY+5, PunktX+10, PunktY+15, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+10, PunktY+16, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+10) {
    matrix.drawPixel(PunktX+14, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+12, PunktY+5, PunktX+12, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+11, PunktY+3, PunktX+11, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+11, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+11) {
    matrix.drawPixel(PunktX+15, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+13, PunktY+7, PunktX+13, PunktY+13, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawLine(PunktX+12, PunktY+5, PunktX+12, PunktY+14, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+12, PunktY+15, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  if (OffsetX == 70+12) {
    matrix.drawPixel(PunktX+16, PunktY+11, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
    matrix.drawLine(PunktX+13, PunktY+7, PunktX+13, PunktY+13, matrix.Color333(FarbeUntenR, FarbeUntenG, FarbeUntenB));
    matrix.drawPixel(PunktX+13, PunktY+14, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB));
    matrix.drawLine(PunktX+14, PunktY+1, PunktX+14, PunktY+13, matrix.Color333(FarbeFrameR, FarbeFrameG, FarbeFrameB)); 
  }
  
  if (OffsetX >= 0) {
    matrix.drawPixel(StartX+OffsetX-1, StartY+OffsetY+11, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 1) {
    matrix.drawLine(StartX+OffsetX-2, StartY+OffsetY+10,StartX+OffsetX-2, StartY+OffsetY+6, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 2) {
    matrix.drawLine(StartX+OffsetX-3, StartY+OffsetY+5,StartX+OffsetX-3, StartY+OffsetY+3, matrix.Color333(r,g,b));
    matrix.drawPixel(StartX+OffsetX-3, StartY+OffsetY+11, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 3) {
    matrix.drawPixel(StartX+OffsetX-4, StartY+OffsetY+2, matrix.Color333(r,g,b));
    matrix.drawPixel(StartX+OffsetX-4, StartY+OffsetY+12, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 4) {
    matrix.drawPixel(StartX+OffsetX-5, StartY+OffsetY+1, matrix.Color333(r,g,b));
    matrix.drawPixel(StartX+OffsetX-5, StartY+OffsetY+13, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 6) {
    matrix.drawPixel(StartX+OffsetX-7, StartY+OffsetY+12, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 7) {
    matrix.drawPixel(StartX+OffsetX-7, StartY+OffsetY+11, matrix.Color333(r,g,b));
  }
  
  if (OffsetX >= 18) {
    matrix.drawPixel(StartX+OffsetX-19, StartY+OffsetY+12, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 19) {
    matrix.drawPixel(StartX+OffsetX-20, StartY+OffsetY+13, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 21) {
    matrix.drawPixel(StartX+OffsetX-22, StartY+OffsetY+12, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 22) {
    matrix.drawPixel(StartX+OffsetX-23, StartY+OffsetY+11, matrix.Color333(r,g,b));
    matrix.drawLine(StartX+OffsetX-23, StartY+OffsetY+2,StartX+OffsetX-23, StartY+OffsetY+5, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 23) {
    matrix.drawLine(StartX+OffsetX-24, StartY+OffsetY+6,StartX+OffsetX-24, StartY+OffsetY+10, matrix.Color333(r,g,b));
  }

  delay(Speed);
matrix.setTextColor(matrix.Color333(0,0,0));
  if (OffsetX >= 1){
     matrix.drawLine(StartX+OffsetX-2, StartY+OffsetY+10,StartX+OffsetX-2, StartY+OffsetY+6, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 2){
     matrix.drawLine(StartX+OffsetX-3, StartY+OffsetY+5,StartX+OffsetX-3, StartY+OffsetY+3, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-3, StartY+OffsetY+11, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 3){
     matrix.drawPixel(StartX+OffsetX-4, StartY+OffsetY+2, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-4, StartY+OffsetY+12, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 5){
     matrix.drawPixel(StartX+OffsetX-6, StartY+OffsetY+13, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 6){
     matrix.drawPixel(StartX+OffsetX-7, StartY+OffsetY+12, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 17){
     matrix.drawPixel(StartX+OffsetX-18, StartY+OffsetY+11, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 18){
     matrix.drawPixel(StartX+OffsetX-19, StartY+OffsetY+12, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 20){
     matrix.drawPixel(StartX+OffsetX-21, StartY+OffsetY+13, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 21){
     matrix.drawPixel(StartX+OffsetX-22, StartY+OffsetY+1, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-22, StartY+OffsetY+12, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 22){
     matrix.drawLine(StartX+OffsetX-23, StartY+OffsetY+2,StartX+OffsetX-23, StartY+OffsetY+5, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 23){
     matrix.drawLine(StartX+OffsetX-24, StartY+OffsetY+6,StartX+OffsetX-24, StartY+OffsetY+10, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 24){
     matrix.drawPixel(StartX+OffsetX-25, StartY+OffsetY+11, matrix.Color333(0,0,0));
  }
}

void Kafer(byte StartX, byte StartY, byte OffsetX, byte OffsetY, byte Speed, byte r, byte g, byte b, byte rr, byte rg, byte rb) {
  if (OffsetX >= 0){
     matrix.drawPixel(StartX+OffsetX-1, StartY+OffsetY+6, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 1){
     matrix.drawPixel(StartX+OffsetX-2, StartY+OffsetY+5, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 2){
     matrix.drawPixel(StartX+OffsetX-3, StartY+OffsetY+6, matrix.Color333(rr,rg,rb));
     matrix.drawPixel(StartX+OffsetX-3, StartY+OffsetY+4, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 3){
     matrix.drawPixel(StartX+OffsetX-4, StartY+OffsetY+7, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 5){
     matrix.drawPixel(StartX+OffsetX-6, StartY+OffsetY+6, matrix.Color333(rr,rg,rb));
     matrix.drawPixel(StartX+OffsetX-6, StartY+OffsetY+2, matrix.Color333(r,g,b));
     matrix.drawPixel(StartX+OffsetX-6, StartY+OffsetY+3, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 6){
     matrix.drawPixel(StartX+OffsetX-7, StartY+OffsetY+5, matrix.Color333(r,g,b));
     matrix.drawPixel(StartX+OffsetX-7, StartY+OffsetY+1, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 12){
     matrix.drawPixel(StartX+OffsetX-13, StartY+OffsetY+6, matrix.Color333(rr,rg,rb));
  }
  if (OffsetX >= 13){
     matrix.drawPixel(StartX+OffsetX-14, StartY+OffsetY+7, matrix.Color333(rr,rg,rb));
     matrix.drawPixel(StartX+OffsetX-14, StartY+OffsetY+2, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 15){
     matrix.drawPixel(StartX+OffsetX-16, StartY+OffsetY+6, matrix.Color333(rr,rg,rb));
     matrix.drawPixel(StartX+OffsetX-16, StartY+OffsetY+3, matrix.Color333(r,g,b));
  }
  if (OffsetX >= 16){
     matrix.drawPixel(StartX+OffsetX-17, StartY+OffsetY+5, matrix.Color333(r,g,b));
     matrix.drawPixel(StartX+OffsetX-17, StartY+OffsetY+4, matrix.Color333(r,g,b));
  }

  
  delay(Speed);

  
 if (OffsetX >= 0){
     matrix.drawPixel(StartX+OffsetX-1, StartY+OffsetY+6, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 1){
     matrix.drawPixel(StartX+OffsetX-2, StartY+OffsetY+5, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 2){
     matrix.drawPixel(StartX+OffsetX-3, StartY+OffsetY+6, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 4){
     matrix.drawPixel(StartX+OffsetX-5, StartY+OffsetY+7, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-5, StartY+OffsetY+4, matrix.Color333(0,0,0));
  }
  if (OffsetX >= 5){
     matrix.drawPixel(StartX+OffsetX-6, StartY+OffsetY+6, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-6, StartY+OffsetY+2, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-6, StartY+OffsetY+3, matrix.Color333(0,0,0));
  }
  if (OffsetX >=11){
     matrix.drawPixel(StartX+OffsetX-12, StartY+OffsetY+5, matrix.Color333(0,0,0));
  }
  if (OffsetX >=12){
     matrix.drawPixel(StartX+OffsetX-13, StartY+OffsetY+1, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-13, StartY+OffsetY+6, matrix.Color333(0,0,0));
  }
  if (OffsetX >=14){
     matrix.drawPixel(StartX+OffsetX-15, StartY+OffsetY+2, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-15, StartY+OffsetY+7, matrix.Color333(0,0,0));
  }
  if (OffsetX >=15){
     matrix.drawPixel(StartX+OffsetX-16, StartY+OffsetY+3, matrix.Color333(0,0,0));
     matrix.drawPixel(StartX+OffsetX-16, StartY+OffsetY+6, matrix.Color333(0,0,0));
  }
  if (OffsetX >=16){
     matrix.drawPixel(StartX+OffsetX-17, StartY+OffsetY+4, matrix.Color333(0,0,0));
  }
  if (OffsetX >=17){
     matrix.drawPixel(StartX+OffsetX-18, StartY+OffsetY+5, matrix.Color333(0,0,0));
  }
  
}
uint16_t Wheel(byte WheelPos) {
  if(WheelPos < 8) {
   return matrix.Color333(7 - WheelPos, WheelPos, 0);
  } else if(WheelPos < 16) {
   WheelPos -= 8;
   return matrix.Color333(0, 7-WheelPos, WheelPos);
  } else {
   WheelPos -= 16;
   return matrix.Color333(0, WheelPos, 7 - WheelPos);
  }
}
void loop() {
  for(int i = 0; i <= 64+24; i++) {
    Bus(0,10,i,0,50,4,6,0,0,2,5); 
  //Kafer(byte StartX, byte StartY, byte OffsetX, byte OffsetY, byte Speed, byte r, byte g, byte b, byte rr, byte, rg, byte rb
  }
  /*for(int i = 0; i <= 64+17; i++) {
   Kafer(0,20,i,0,50,2,7,3,3,0,5);
  //Kafer(byte StartX, byte StartY, byte OffsetX, byte OffsetY, byte Speed, byte r, byte g, byte b, byte rr, byte, rg, byte rb
  }*/
}





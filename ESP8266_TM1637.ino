/**
 * 09/2017
 * test 4-digit display with TM1637
 */

#include <TM1637Display.h>

const int CLK = D6; //Set the CLK pin connection to the display
const int DIO = D5; //Set the DIO pin connection to the display

int counter;

TM1637Display display(CLK, DIO); //set up the 4-Digit Display.

void setup()
{
  display.setBrightness(0x0a); //set the diplay to maximum brightness
  counter = 0;
}


void loop()
{
  counter = counter >= 9999 ? 0 : counter + 1;
  display.showNumberDec(counter);
  // display.setBrightness(counter % 2 ? 0 : 0x0a); // alternate display brightness
  // delay(1000);
}


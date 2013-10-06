// Do not remove the include below
#include "yabp-arduino-uno.h"

int led = 13;

//The setup function is called once at startup of the sketch
void setup()
{
	 pinMode(led, OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{
	 digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
	  delay(1000);               // wait for a second
	  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
	  delay(10);               // wait for a second
}




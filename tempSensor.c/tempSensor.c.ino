#include <Arduino.h>
#include "dht11.cpp"

dht11 myDHT11;

void setup() 
{
  // put your setup code here, to run once:
	Serial.begin(9600);
	Serial.println("Welcome to use!");
}

void loop() {
  // put your main code here, to run repeatedly:
	myDHT11.dht11::read(2);
	Serial.print("HUMI = ");
	Serial.print(myDHT11.HUMI_Buffer_Int);
	Serial.println(" %RH");

	Serial.print("TEMP = ");
	Serial.print(myDHT11.TEM_BUFFER_Int);
	Serial.println(" C");
	delay(1000);
}

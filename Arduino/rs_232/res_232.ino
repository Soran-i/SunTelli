#include <SoftwareSerial.h>

SoftwareSerial ardSerial(7, 6); //232_TX, 232_RX

void setup() {
	// Open serial communications and wait for the port to open
	Serial.begin(9600);

	Serial.println("Hello there");

	Serial.begin(9600);

	Serial.println("Hello again");
}

void loop() {
	if (ardSerial.available())
		Serial.write(ardSerial.read());
	if (Serial.available())
		ardSerial.write(Serial.read());
}

/*#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRB = 0xFF;
	while (1)
	{
	  PORTB ^= 0xFF;
	_delay_ms(1000);
	}
	return 0;
}*/

#include <Arduino.h>

void setup()
{
	pinMode(13, OUTPUT);
}

void loop()
{
	digitalWrite(13, LOW);
	delay(1000);
	digitalWrite(13, HIGH);
	delay(1000);
}

////////////////////////
#define F_CPU 1000000L
#include <avr/io.h>
#include <avr/delay.h>
#include <usi_i2c_slave.h>
int main(void)
{
DDRB = 0xFF; // PORTB is output, all pins
PORTB = 0x00; // Make pins low to start

for (;;) {
PORTB ^= 0xFF; // invert all the pins
_delay_ms(100); // wait some time
}
return 0;
}
////////////////////////

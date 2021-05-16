#include "usart.h"
#include <stdint.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include "../pin_cont/pin.h"
#include "../Timer_0/timer0.h"

int main ()
{
	usartInit(9600);

	while(1)
	{


	}
	return 0;
}

#include "main.h"
#include <stdio.h>

/**
* jack_bauer - prints ebery minute of the day
*
*Return: void
*/
void jack_bauer(void)

{
int hour;
int minute;

hour = 0;
while (hour < 24)
{
minute = 0;
while (minute < 60)
{
	_putchar('0' + hour / 10);
	_putchar('0' + hour % 10);
	_putchar(':');
	_putchar('0' + minute / 10);
	_putchar('0' + minute % 10);
	_putchar('\n');
	minute++;
}
hour++;
}
}


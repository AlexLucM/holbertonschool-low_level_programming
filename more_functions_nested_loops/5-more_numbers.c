#include "main.h"
#include <stdio.h>

/**
* more_numbers - print 10 times numbers from 0 to 14
*
* Return: void
*/
void more_numbers(void)

{
int line;
for (line = 0; line < 10; line++)
{
int n;
	for (n = 0; n <= 14; n++)
{
	if (n >= 10)
{
	_putchar((n / 10) + '0');
}
	_putchar((n % 10) + '0');
}
	_putchar('\n');
}
}

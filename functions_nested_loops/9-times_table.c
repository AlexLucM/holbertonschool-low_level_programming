#include "main.h"
#include <stdio.h>

/**
* times_table - prints the 9 time table, starting with 0
*
* Return: void
*/
void times_table(void)

{
int row;
int col;
int result;

row = 0;
while (row <= 9)
{
col = 0;
while (col <= 9)
{
result = row * col;
	if (col > 0)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (result < 10 && col >= 0)
	{
	_putchar(' ');
	}
	else
	{
	_putchar('0' + (result / 10));
	}

	_putchar('0' + (result % 10));
	col++;
}
	_putchar('\n');
	row++;
}
}

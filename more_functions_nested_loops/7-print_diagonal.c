#include "main.h"
#include <stdio.h>

/**
* print_diagonal - draws a diagonal line
*
* @n : number of times the charachter should be printed
*
* Return void
*/
void print_diagonal(int n)

{
	if (n <= 0)
{
	_putchar('\n');
}
	else
{
int line;
int d;
	for (line = 0; line < n; line++)
{
	for (d = 0; d < line; d++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
}

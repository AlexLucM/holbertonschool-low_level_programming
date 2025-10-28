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
	print_diagonal(n - 1);
	for (line = 0; line < n - 1; line++)
{
	_putchar(' ');
}
{
	_putchar('\\');
	_putchar('\n');
}
}
}

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
int i;
	print_diagonal(n - 1);
	for (i = 0; i < n - 1; i++)
{
	_putchar(' ');
}
{
	_putchar('\\');
	_putchar('\n');
}
}
}

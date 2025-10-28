#include "main.h"
#include <stdio.h>

/**
* print_line - draws a straight line in the terminal
*
* @n : charachter that prints the line
*
* Return: void
*/
void print_line(int n)

{

	if (n <= 0)
{
	_putchar('\n');
}
	else
{
	_putchar('_' );
	print_line(n - 1);
}
}

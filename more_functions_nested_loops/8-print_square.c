#include "main.h"
#include <stdio.h>

/**
* print_square - prints a square
*
* @size : is the size of the square
*
* Return: void
*/
void print_square(int size)

{
	if (size <= 0)
{
	_putchar('\n');
}
	else
{
int line;
int side;
	for (line = 0; line < size; line++)
{
	for (side = 0; side < size; side++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}

#include "main.h"
#include <stdio.h>

/**
* print_triangle - prints a triangle
*
* @size : size of the triangle
*
* Return: void
*/
void print_triangle(int size)

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
	for (side = 0; side < size - line - 1; side++)
{
	_putchar(' ');
}
	for (side = 0; side <= line; side++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}

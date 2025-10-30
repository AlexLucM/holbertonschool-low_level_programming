#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the value of two integers
*
* @a : first integer
*
* @b : second integer
*
* Return: void
*/
void swap_int(int *a, int *b)

{
int aa = *a;
*a = *b;
*b = aa;
}

#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of two diagonals
* of a square matrix of integers
*
* @a : square matrix
*
* @size : size of the square
*
* Return: void
*/
void print_diagsums(int *a, int size)

{
int i;
int first_diag_sum = 0;
int secnd_diag_sum = 0;

	for (i = 0; i < size; i++)
{
	first_diag_sum += a[i * size + i];
	secnd_diag_sum += a[i * size + (size - 1 - i)];
}

	printf("%d, %d\n", first_diag_sum, secnd_diag_sum);
}

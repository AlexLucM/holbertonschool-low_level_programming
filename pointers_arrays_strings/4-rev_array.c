#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverse the content of an array of integers
*
* @a : first integer
*
* @n : number of elements of the array
*
* Return: void
*/
void reverse_array(int *a, int n)

{
int start = 0;
int end = n - 1;
int rev;

	while (start < end)
{
	rev = a[start];
	a[start] = a[end];
	a[end] = rev;

	start++;
	end--;
}
}

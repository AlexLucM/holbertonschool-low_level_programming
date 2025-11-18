#include "main.h"

/**
* check_sqrt - checks if a number is the square root
*
* @n : number to check the square root of
*
* @search : current search
*
* Return: square root if found and -1 otherwise
*/
int check_sqrt(int n, int search)

{
	if (search * search == n)
	return (search);
	if (search * search > n)
	return (-1);
	return (check_sqrt(n, search + 1));
}

/**
* _sqrt_recursion - returns the natural square root of n
*
* @n : number to calculate the square root of
*
* Return: the natural square root of a number or -1 if
* n has no natural square root
*/
int _sqrt_recursion(int n)

{
	if (n < 0)
	return (-1);
	return (check_sqrt(n, 0));
}

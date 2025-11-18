#include "main.h"

/**
* check_prime - checks if a number is a prime number
*
* @n : number to check
*
* @div : diviser
*
* Return: 1 if found, 0 otherwise
*/
int check_prime(int n, int div)

{
	if (div * div > n)
	return (1);
	if (n % div == 0)
	return (0);
	return (check_prime(n, div + 1));
}

/**
* is_prime_number - check if the input integer is a prime number
*
* @n : integer to check
*
* Return: 1 if the input integer is a prime number, return 0 otherwise
*/
int is_prime_number(int n)

{
	if (n <= 1)
	return (0);
	return (check_prime(n, 2));
}

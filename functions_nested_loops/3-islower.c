#include "main.h"
#include <stdio.h>

/**
* _islower(int c) - checks for lower case characters
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	return (1);
 	else
	return (0);
}

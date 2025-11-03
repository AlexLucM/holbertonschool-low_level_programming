#include "main.h"
#include <stdio.h>

/**
* _atoi - converts a string to an integer
*
* @s : string to convert
*
* Return: Always 0 (Success)
*/
int _atoi(char *s)

{
int i = 0;
int sign = 1;
int result = 0;
int digit = 0;

	while (s[i] != '\0')
{
	if (s[i] == '-')
	sign *= -1;
	else if (s[i] == '+')
	;
	else if (s[i] >= '0' && s[i] <= '9')
{
	digit = 1;
	result = result * 10 + (s[i] - '0');
}
	else if (digit)
	break;

	i++;
}
	return (result * sign);
}

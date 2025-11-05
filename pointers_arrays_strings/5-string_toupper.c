#include "main.h"
#include <stdio.h>

/**
* string_toupper - changes all lowercase letter of a string to upper
*
* @str : string to check
*
* Return: Always 0
*/
char *string_toupper(char *str)

{
int i = 0;
char *p = str;
	while (str[i] != '\0')
{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
	i++;
}
	return (p);
}

#include "main.h"
#include <stdio.h>

/**
* cap_string - capitalize all words of a string
*
* @str : string to check
*
* Return: pointer to str
*/
char *cap_string(char *str)

{
int i = 0;
int put_cap = 1;

	while (str[i] != '\0')
{
	if (put_cap && str[i] >= 'a' && str[i] <= 'z')
{
	str[i] = str[i] - 32;
	put_cap = 0;
}
	else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}')
{
	put_cap = 1;
}
	else
{
	put_cap = 0;
}
	i++;
}
	str[i] = '\0';
	return (str);
}

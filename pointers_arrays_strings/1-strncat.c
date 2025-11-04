#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenates two strings using at most n bytes
*
* @dest : first string
*
* @src : second string
*
* @n : integer of bytes
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)

{
	char *og = dest;
	int i = 0;

	while (*dest != '\0')
{
	dest++;
}
	while (*src != '\0' && i < n)
{
	*dest = *src;
	src++;
	dest++;
	i++;
}
	*dest = '\0';
	return (og);
}

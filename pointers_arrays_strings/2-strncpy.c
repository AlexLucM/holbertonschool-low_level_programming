#include "main.h"
#include <stdio.h>

/**
* _strncpy - copies a string
*
* @dest : first string
*
* @src : second string
*
* @n : characters to copy
*
* Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)

{
char *og = dest;
int i = 0;

	while (*src != '\0' && i < n)
{
	*dest = *src;
	src++;
	dest++;
	i++;
}
	while (i < n)
{
	*dest = '\0';
	dest++;
	i++;
}
	return (og);
}

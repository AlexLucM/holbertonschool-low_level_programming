#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenates two strings (joins them)
*
* @dest : first string
*
* @src : second string
*
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)

{
	char *og = dest;
	while (*dest != '\0')
{
	dest++;
}
	while (*src != '\0')
{
	*dest = *src;
	src++;
	dest++;
}
	*dest = '\0';
	return (og);
}

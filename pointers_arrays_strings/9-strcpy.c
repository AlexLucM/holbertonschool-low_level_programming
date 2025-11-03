#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed by src to the buffer pointed by dest
*
* @dest : points to buffer
*
* @src : points to string
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)

{
char *ret = dest;
	while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';
	return (ret);
}

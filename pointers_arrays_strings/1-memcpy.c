#include "main.h"
#include <stdio.h>

/**
* _memcpy - copies memory area
*
* @dest : first memory area
*
* @src : second memory area
*
* @n : amount of bytes
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)

{
        char *og = dest;
        unsigned int i = 0;

        while (i < n)
{
        *dest = *src;
	dest++;
	src++;
	i++;
}
	return (og);
}

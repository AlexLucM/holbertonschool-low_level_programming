#include "main.h"
#include <stdio.h>

/**
* _strlen - calculate the length of a string
*
* @s : characters
*
* Return: length of the string
*/
int _strlen(char *s)

{
int len = 0;
	while (s[len] != '\0')
{
	len++;
}
	return (len);
}

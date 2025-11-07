#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
*
* @s : string to check
*
* @accept : substring
*
* Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)

{
	unsigned int search = 0;
	int i = 0;
	int j;
	int found;

	while (s[i] != '\0')
{
	found = 0;
	j = 0;

	while (accept[j] != '\0')
{
	if (s[i] == accept[j])
{
	found = 1;
	break;
}
	j++;
}

	if (found == 0)
	break;

	search++;
	i++;
}
	return (search);
}

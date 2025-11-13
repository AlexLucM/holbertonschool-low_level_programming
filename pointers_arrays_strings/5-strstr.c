#include "main.h"
#include <stdio.h>

/**
* _strstr - finds the first occurence of the substring needle in
* the string haysack. (\0) are not compared.
*
* @haystack : string to ckeck
*
* @needle : string to compare with
*
* Return: a pointer to the beginning of the located substring
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)

{
int i = 0;
int j;
char *og = needle;

	while (haystack[i] != '\0')
{
	j = 0;

	while (needle[j] != '\0')
{
	if (haystack[i] == needle[j])
{
	return (og);
}
	j++;
}
	i++;
}
	return (NULL);
}

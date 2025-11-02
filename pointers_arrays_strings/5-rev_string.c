#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
*
* @s : charachter to reverse
*
* Return: void
*/
void rev_string(char *s)

{
int i = 0;
int len = 0;
char rev;

	while (s[len] != '\0')
	len++;

	while (i < len / 2)
{
	rev = s[i];
	s[i] = s[len - 1 - i];
	s[len - 1 - i] = rev;
	i++;
}
}


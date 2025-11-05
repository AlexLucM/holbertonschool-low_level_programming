#include "main.h"
#include <stdio.h>

/**
* leet - encodes a string into 1337
*
* @str : string to encode
*
* Return: Always 0
*/
char *leet(char *str)

{
int i = 0;
char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

while (str[i] != '\0')
{
int j = 0;

	while (letters[j] != '\0')
{
	if (str[i] == letters[j])
{
	str[i] = numbers[j];
	break;
}
	j++;
}
	i++;
}
	return (str);
}

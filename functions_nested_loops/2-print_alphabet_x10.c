#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10 - prints alphabet in lowwer case x10 with new line
*
* Return: Nothing
*/
void print_alphabet_x10(void)

{
int n;
char letter;
n = 0;
while (n < 10)

{
	letter = 'a';
	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
	n++;
}
}

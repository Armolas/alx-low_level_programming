#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the last half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, j = 0;

	if ((_strlen(str) % 2) != 0)
	{
		j++;
	}
	for (i = ((_strlen(str) + j) / 2) ; i < _strlen(str) ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts_half - prints half of a string to standard output
 * @str: the string
 */
void puts_half(char *str)
{
	int i, j;

	for (j = 0 ; str[j] != '\0' ; j++)
		;
	for (i = (j - 1) / 2 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

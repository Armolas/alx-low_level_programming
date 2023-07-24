#include "main.h"
/**
 * puts2 - prints every other char of
 * a string to standard output
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 != 1)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}

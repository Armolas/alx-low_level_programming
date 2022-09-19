#include "main.h"

/**
 * _puts - prints a string to the buffer followed by a buffer
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

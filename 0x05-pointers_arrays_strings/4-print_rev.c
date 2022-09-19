#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int a, b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{}
	a--;
	for (b = a ; b >= 0 ; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

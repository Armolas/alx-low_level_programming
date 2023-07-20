#include "main.h"
/**
 * print_line - prints a line
 * @n: length of line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		return;
	for (i = 0 ; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}

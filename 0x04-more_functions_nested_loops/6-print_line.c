#include "main.h"

/**
 * print_line - prints line to the buffer
 * @n: number of lines
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

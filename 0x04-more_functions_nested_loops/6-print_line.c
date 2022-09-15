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

	for (i = 0 ; i <= n ; i++)
	{
		if (n == 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

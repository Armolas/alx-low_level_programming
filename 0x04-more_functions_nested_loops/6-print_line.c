#include "main.h"

/**
 * print_line - prints line to the buffer
 * @n: number of lines
 *
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n == 0)
		{
			continue;
		}
		else
		{
			_putchar('_');
		}
	i++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: length of line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = i ; j < 0 ; j--)
			{
				if (j == 0)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_triangle - prints a triangle to the buffer
 * @size: size of the triangle
 *
 * Return:void
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (b = size - 1 ; b > 0 ; j--)
			{
				-putchar(' ');
			}
			for (c = 0 ; c < a ; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

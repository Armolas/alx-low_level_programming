#include "main.h"

/**
* print_number - prints an integer to stdout
* @n: integer to print
*/
void print_number(int n)
{
	unsigned int abs;
	unsigned int numCount;
	int mult = 1;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	numCount = n;

	while (numCount > 0)
	{
		numCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		mult *= 10;
	for (i = 0; i < c; i++)
	{
		_putchar((abs / mult) + '0');
		abs = abs % mult;
		mult /= 10;
	}
}

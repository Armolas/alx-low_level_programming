#include "main.h"
/**
 * print_binary - prints a number in binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n < 1)
	{
		_putchar('0');
		return;
	}
	if (n >> 1 != 0)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}

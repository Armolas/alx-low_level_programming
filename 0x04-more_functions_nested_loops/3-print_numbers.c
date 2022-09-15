#include "main.h"

/**
 * print_numbers - function to print 0 through 9
 *
 *Return: void
 */
void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
	_putchar(num);
	num++;
	}
	_putchar('\n');
}

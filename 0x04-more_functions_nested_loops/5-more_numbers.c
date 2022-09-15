#include "main.h"

/**
 * more_numbers - prints out the digits 0 to 14, 10 times
 *
 * Return (void)
 */
void more_numbers(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
	int i;

	for (i = 0 ; i <= 14 ; i++)
	{
	_putchar('0' + i);
	}
	_putchar('\n');
	}
	_putchar('\n');
}

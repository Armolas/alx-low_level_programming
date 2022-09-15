#include "main.h"

/**
 * more_numbers - prints out the digits 0 to 14, 10 times
 *
 * Return (void)
 */
void more_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
	int i = 0;

	while (i <= 14)
	{
	_putchar(i + '0');
	i++;
	}
	_putchar('\n');
	j++;
	}
	_putchar('\n');
}

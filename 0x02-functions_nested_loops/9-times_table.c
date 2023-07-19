#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a;
	int i;
	int res;

	for (a = 0 ; (a < 10) ; a++)
	{
		for (i = 0 ; (i < 10) ; i++)
		{
			res = (a * i);
			if (i == 0)
			{
				_putchar(res + '0');
			}
			else if (res < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

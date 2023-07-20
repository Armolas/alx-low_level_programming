#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: the number
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int i;
	int res;
		    
	if (n > 15 || n < 0)
		return (0);
	for (a = 0 ; (a <= n) ; a++)
	{
		for (i = 0 ; (i <= n) ; i++)
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

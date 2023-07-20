#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: the number to be printed
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int i;
	int res;

	if (n > 15 || n < 0)
		return;
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
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res < 100 && res > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(res);
			}
		}
		_putchar('\n');
	}
}

/**
 * print_number - prints a number
 * @num: number to print
 */
void print_number(int num)
{
	unsigned int number;

	if (num < 0)
	{
		number = -num;
		_putchar('-');
	}
	else
	{
		number = num;
	}

	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar('0' + (number % 10));
}

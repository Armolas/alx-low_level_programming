#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number whose last digit will be printed
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	_putchar(i + '0');
	return (i);
}

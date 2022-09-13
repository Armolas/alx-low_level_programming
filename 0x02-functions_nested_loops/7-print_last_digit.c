#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be checked
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}

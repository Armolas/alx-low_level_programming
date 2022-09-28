#include "main.h"

/**
 * factorial - prints the factorial of n
 * @n: the number
 *
 * Return: factorial of an buf if n is less
 * than 0 returns -1
 */
int factorial(int n)
{
	if  (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

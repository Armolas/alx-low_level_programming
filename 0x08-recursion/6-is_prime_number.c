#include "main.h"

/**
 * pcheck - checks a prime number
 * @a: checker
 * @b: number to check
 *
 * Return: 1 or 0
 */
int pcheck(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (pcheck(a + 1, b));
}

/**
 * is_prime_number - checks for a prime number
 * @n: number to check
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (pcheck(2, n)):
}

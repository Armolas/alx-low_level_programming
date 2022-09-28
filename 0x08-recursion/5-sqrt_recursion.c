#include "main.h"

/**
 * guess - guesses the square root
 * @a: guess
 * @b: number
 *
 * Return: square root of b
 */
int guess(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (guess(a + 1, b));
}

/**
 * _sqrt_recursion - prints the natural square root of a number.
 * @n: the number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (guess(1, n)):
}

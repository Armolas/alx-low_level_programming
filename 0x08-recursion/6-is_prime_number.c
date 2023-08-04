#include "main.h"
/**
 * guessPrime - guesses a prime number
 * @num: first argument
 * @i: second argument
 * Return: 0 or 1
 */
int guessPrime(int num, int i)
{
	if (num % i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else
		return (guessPrime(num, i - 1));
}
/**
 * is_prime_number - checks if n is a prime number
 * @n: an integer
 * Return: 1 for prime number else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (guessPrime(n, n - 1));
}

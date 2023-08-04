#include "main.h"
/**
 * guess - guesses the square root of an int
 * @num: first argument
 * @i: second argument
 * Return: the square root of num
 */
int guess(int num, int i)
{
	if (i * i == num)
		return (i);
	else if (num / 2 < i)
		return (-1);
	else
		return (guess(num, i + 1));
}
/**
 * _sqrt_recursion - returns the square root of n
 * @n: the number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (n, 1);
}

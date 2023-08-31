#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string containing binary value
 * Return: converted unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0, k;
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (i = 0 ; b[i] != '\0' ; i++)
		;
	for (k = i - 1 ; k >= 0 ; k--)
	{
		if (b[k] == '1')
			dec += (1 * power(2, j));
		else if (b[k] == '0')
			dec += (0 * power(2, j));
		else
			return (0);
		j++;
	}
	return (dec);
}

/**
 * power - returns m raised to the power of n
 * @m: integer
 * @n: integer
 * Return: m power n
 */
int power(int m, int n)
{
	if (n == 0)
		return (1);
	return (m * power(m, n - 1));
}

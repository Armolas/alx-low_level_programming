#include "main.h"
/**
 * flip_bits - returns the number of flip to move from m to n
 * @m: first integer
 * @n: second integer
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f, count = 0;

	f = m ^ n;
	while (f > 0)
	{
		if ((f & 1) == 1)
			count++;
		f = f >> 1;
	}
	return (count);
}

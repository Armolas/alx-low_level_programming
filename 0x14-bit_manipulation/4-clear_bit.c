#include "main.h"
/**
 * clear_bit - clears a bit at a particular index
 * @n: number to clear bit at
 * @index: bit index to clear
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 20)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}

#include "main.h"
/**
 * set_bit - sets a bit at a particular index
 * @n: number to set bit at
 * @index: bit index to set
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 20)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}

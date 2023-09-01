#include "main.h"
/**
 * get_bit - gets a bit at a particular index
 * @n: number to get bit from
 * @index: bit index to get
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;
	return (bit);
}

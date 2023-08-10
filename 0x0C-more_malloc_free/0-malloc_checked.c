#include "main.h"
/**
 * malloc_checked - allocates a space in memory
 * @b: number of bytes
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (!mem)
		exit(98);
	return (mem);
}
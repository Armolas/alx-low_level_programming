#include "main.h"
/**
 * _calloc - creates a memory for an array
 * @nmemb: number of elements
 * @size: size of array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *mem;
	char *ptr;

	if (nmemb == 0 || size == 0)
		exit(0);
	mem = malloc(nmemb * size);
	ptr = mem;
	if (!mem)
		exit(0);
	for (i = 0 ; i < nmemb * size ; i++)
	{
		ptr[i] = 0;
	}
	return (mem);
}

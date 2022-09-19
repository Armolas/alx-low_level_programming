#include "main.h"

/**
 * swap_int - swaps two integer variables
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *b;
	j = *a;
	*a = i;
	*b = j;
}

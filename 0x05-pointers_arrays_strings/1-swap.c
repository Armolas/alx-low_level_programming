#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*a = j;
	*b = i;
}

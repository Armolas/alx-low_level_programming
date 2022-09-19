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
	*a = &b;
	*b = &a;
}

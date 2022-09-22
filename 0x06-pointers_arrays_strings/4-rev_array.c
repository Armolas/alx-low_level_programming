#include "main.h"

/**
 * reverse_array - reverses the elements of an int array
 * @a: array name and pointer
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	for (i = 0 ; i < n ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}

#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer in an array
 * @array: the array
 * @size: array size
 * @cmp: function pointer for comparison
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array)
		return (NULL);
	if (!cmp)
		return (NULL);
	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

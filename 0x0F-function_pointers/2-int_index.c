#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0 ; i < size ; i++)
		{
			s = cmp(array[i]);
			if (s != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}

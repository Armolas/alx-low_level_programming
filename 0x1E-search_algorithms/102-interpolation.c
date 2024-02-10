#include "search_algos.h"
/**
* interpolation_search - searches for a value in a sorted array
* of integers using the Interpolation search algorithm
* @array: the array to be searched
* @size: size of the array
* @value: the value to search for in array
* Return: the index of the value or -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	pos = 0;
	while (pos < size && (int)pos >= 0)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}

#include "search_algos.h"
/**
 * binarysearch - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: the array to search
 * @size: size of the array
 * @value: the value to search for
 * @low: lowerbound
 * @high: higherbound
 * Return: index of the value
*/
int binarysearch(int *array, size_t size, int value, int low, int high)
{
	int m, i;

	m = size;
	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		m = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low ; i < high ; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[m] < value)
			low = m + 1;
		else if (array[m] > value)
			high = m - 1;
		else
			return (m);
	}
	return (-1);
}
/**
* exponential_search - searches for a value in a sorted array
* of integers using the Exponential search algorithm
* @array: the array to be searched
* @size: the size of the array
* @value: the value to find in the array
* Return: the index of the value or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t range, high;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
	{
		return (0);
	}
	range = 1;
	while (range < size && array[range] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", range, array[range]);
		range *= 2;
	}
	if (range >= size)
	{
		high = size - 1;
	}
	else
	{
		high = range;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", range / 2, high);
	return (binarysearch(array, (range / 2), value, range / 2, high));
}

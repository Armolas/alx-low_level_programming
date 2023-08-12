#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (!arr)
		exit(0);
	for (i = 0 ; i < (max - min + 1) ; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the
 *two diagonals of a square matrix of integers
 *@a: matrix
 *@size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumA = 0;
	int sumB = 0;

	for (i = 0 ; i < size ; i++)
	{
		sumB += a[(i * size) + i];
		sumA += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", sumB, sumA);
}

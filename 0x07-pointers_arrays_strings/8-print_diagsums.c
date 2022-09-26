#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the
 *two diagonals of a square matrix of integers
 *@a: matrix
 *@size: matrix size
 */
void print_diagsums(int (*a)[size][size], int size)
{
	int i, j;
	int sumA = 0;
	int sumB = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = size - (i + 1) ; j >= 0 ; j--)
		{
			sumA = sumA + a[i][j];
			sumB = sumB + a[i][i];
			break;
		}
	}
	printf("%d, %d", sumB, sumA);
}

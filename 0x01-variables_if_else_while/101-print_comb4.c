#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48 ; (i < 58) ; i++)
	{
		for (j = 48 ; (j < 58) ; j++)
		{
			for (k = 48 ; (k < 58) ; k++)
			{
				if ((j == i || j == k) || (i > j || j > k))
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

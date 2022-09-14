#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always o.
 */
int main(void)
{
	int counter = 2;

	double a = 1;
	double b = a + 1;
	double c = a + b;

	printf("%.0lf, ", a);
	printf("%.0lf, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.0lf", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

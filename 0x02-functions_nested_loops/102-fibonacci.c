#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum;

	for (i = 0 ; (i < 50) ; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

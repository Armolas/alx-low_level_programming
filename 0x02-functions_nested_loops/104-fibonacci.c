#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int sum;

	for (i = 0 ; (i < 98) ; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;
		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

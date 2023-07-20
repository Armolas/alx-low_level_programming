#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum;
	unsigned long sum_1 = 0;

	while (1)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum < 4000000 && sum % 2 == 0)
		{
			sum_1 += sum;
		}
		else if (sum < 4000000)
			continue;
		else
			break;
	}
	printf("%lu\n", sum_1);
	return (0);
}

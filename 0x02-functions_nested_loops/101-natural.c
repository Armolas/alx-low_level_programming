#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int i;

	for (i = 0 ; (i < 1024) ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			a += i;
	}
	printf("%d\n", a);
	return (0);
}

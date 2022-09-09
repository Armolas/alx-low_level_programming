#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	for (; num <= 9 ; num++)
	{
	putchar('0' + num);
	if (num != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	return (0);
}

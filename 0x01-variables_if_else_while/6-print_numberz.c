#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fig = 0;

	while (fig <= 9)
	{
	putchar('0' + fig);
	fig++;
	}
	putchar('\n');
	return (0);
}

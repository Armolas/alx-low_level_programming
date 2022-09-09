#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'a';

	for (low; low <= 'z'; low++)
	{
	if (low == 'e' || low == 'q')
	{
	continue;
	}
	putchar(low);
	}
	putchar('\n');
	return (0);
}

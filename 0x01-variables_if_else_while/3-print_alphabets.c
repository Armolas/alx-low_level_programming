#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'a';
	char cap = 'A';

	while (low <= 'z')
	{
	putchar(low);
	low++;
	}
	while (cap <= 'Z')
	{
	putchar(cap);
	cap++;
	}
	putchar('\n');
	return (0);
}

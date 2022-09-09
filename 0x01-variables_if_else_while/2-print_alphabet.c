#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
	putchar(al);
	al++;
	}
	putchar('\n');
	return (0);
}

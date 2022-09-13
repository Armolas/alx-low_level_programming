#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Return: Always 0
 */
int main(void)
{
/**
 * print_alphabet_x10 - prints all lowercase letters 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	i++;
	}
}

/**
 * print_alphabet - function to print all lower case alphabets
 *
 *Return: void
 */
void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
	putchar(low);
	low++;
	}
	putchar('\n');
}
	return (0);
}

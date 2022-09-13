#include <stdio.h>

/*Prototype fot the print alphabet function*/
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
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

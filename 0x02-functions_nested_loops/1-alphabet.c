#include "main.h"

/**
 * print_alphabet - function to print all lower case alphabets
 *
 *Return: void
 */
void print_alphabet(void)
{
	int low = 97;

	while (low <= 122)
	{
	_putchar(low);
	low++;
	}
	_putchar('\n');
}

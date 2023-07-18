#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char n[] = "_putchar";
	int i;

	for (i = 0 ; (i < 8) ; i++)
		_putchar(n[i]);
	_putchar('\n');
	return (0);
}

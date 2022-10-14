#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: numer of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list ap;


	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
		{
			for (j = 0 ; separator[j] ; j++)
				putchar(separator[j]);
		}
	}
	printf("\n");
	va_end(ap);
}

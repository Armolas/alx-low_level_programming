#include "variadic_functions.h"
/**
 * print_numbers - prints all int parameters
 * @separator: parameter divider
 * @n: number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}

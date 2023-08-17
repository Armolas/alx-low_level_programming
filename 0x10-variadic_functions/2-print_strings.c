#include "variadic_functions.h"
/**
 * print_strings - prints all string parameters
 * @separator: parameter divider
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0 ; i < n ; i++)
	{
		if (va_arg(arg_list, char *))
			printf("%s", va_arg(arg_list, char *));
		else
			printf("nil");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}

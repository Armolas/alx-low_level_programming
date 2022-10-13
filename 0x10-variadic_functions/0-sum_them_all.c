#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up a list of arguments
 * @n: number of arguments to add
 *
 * Return: sumof arguments or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	unsigned int i;
	unsigned int sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - prints a character
 * @c: the character
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_i - prints an integer
 * @i: the integer
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int)):
}
/**
 * print_s - prints a string
 * @s; the string
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_f - prints a float data
 * @f: the float
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list ap;
	char *separator = "";

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++
	}
	va_end(ap);
	printf("\n");
}

#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types to be printed
 */
void print_all(const char * const format, ...)
{
	int i, j = 0;
	char c, *s;
	double f;
	va_list arg_list;

	if (!format)
		return;
	va_start(arg_list, format);
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = (char) va_arg(arg_list, int);
				printf("%c", c);
				break;

			case 'i':
				i = va_arg(arg_list, int);
				printf("%d", i);
				break;

			case 'f':
				f = va_arg(arg_list, double);
				printf("%f", f);
				break;

			case 's':
				s = va_arg(arg_list, char *);
				s ? printf("%s", s) : printf("(nil)");
				break;
		}
		if (format[j + 1] && (format[j] == 'c' || format[j] == 'i' ||
					format[j] == 'f' || format[j] == 's'))
			printf(", ");
		j++;
	}
	printf("\n");
}


#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types to be printed
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0, k = 4;
	char c;
	char *s;
	double f;
	va_list arg_list;

	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
		{
		switch (format[i])
		{
			case 'c':
				c = va_arg(arg_list, int);
				printf("%c", c);
				break;

			case 'i':
				j = va_arg(arg_list, int);
				printf("%d", j);
				break;

			case 'f':
				f = va_arg(arg_list, double);
				printf("%f", f);
				break;

			case 's':
				s = va_arg(arg_list, char *);
				if (s)
					printf("%s", s);
				else
					printf("nil");
		}
		while (i < k - 1)
		{
			printf(", ");
			break;
		}
		}
		i++;
	}
	printf("\n");
}


#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types to be printed
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0, k = 0;
	char c;
	char *s;
	double f;
	va_list arg_list;

	va_start(arg_list, format);
	while (format[i])
	{
		if (k > 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				c = va_arg(arg_list, int);
				printf("%c", c);
				k++;
				break;

			case 'i':
				j = va_arg(arg_list, int);
				printf("%d", j);
				k++;
				break;

			case 'f':
				f = va_arg(arg_list, double);
				printf("%f", f);
				k++;
				break;

			case 's':
				s = va_arg(arg_list, char *);
				if (!s)
					printf("nil");
				printf("%s", s);
				k++;
				break;
		}
		i++;
	}
	printf("\n");
}


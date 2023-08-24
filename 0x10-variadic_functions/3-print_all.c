#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list input;
	char *s;
	int k = 0;
	char *sp = "";

	va_start(input, format);
	if (format)
	{
	while (format[k])
	{
		switch (format[k])
		{
			case 'c':
				printf("%s%c", sp, va_arg(input, int));
				break;
			case 'f':
				printf("%s%f", sp, va_arg(input, double));
				break;
			case 'i':
				printf("%s%d", sp, va_arg(input, int));
				break;
			case 's':
				s = va_arg(input, char*);
				if (s == NULL)
				{
					s = "(nil)";
				}
					printf("%s%s", sp, s);
				break;
			default:
				k++;
				continue;
		}
		sp = ", ";
		k++;
	}
	}
	va_end(input);
	printf("\n");
}

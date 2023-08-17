#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	unsigned int i;
	char *strs;

	va_start(my_strings, n);
	for (i = 0; i < n; i++)
	{
		strs = va_arg(my_strings, char*);
		if (strs == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strs);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(my_strings);
	printf("\n");
}

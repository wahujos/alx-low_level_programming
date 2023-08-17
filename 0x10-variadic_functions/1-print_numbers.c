#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function to print numbers
 * @separator: string to be printed between numbers
 * @n: number of intergers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	int digit;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		digit = va_arg(nums, int);
		printf("%d", digit);
		if (separator != NULL && i < n - 1)
		{
			printf("%c", *separator);
		}
	}
	va_end(nums);
	printf("\n");
}

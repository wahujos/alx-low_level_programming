#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function to sum numbers
 * @n: number of intergers to sum
 * Return: sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_nums;
	unsigned int i;
	int sum = 0;
	int next;

	va_start(my_nums, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		next = va_arg(my_nums, int);
		sum = sum + next;
	}
	va_end(my_nums);
	return (sum);
}

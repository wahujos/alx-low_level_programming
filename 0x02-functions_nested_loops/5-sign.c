#include "main.h"

/**
 *print_sign - Prints the sign of a number
 *@n: number passwd to the function.
 *Return: 1 for positive numbers, -1 for negative numbers and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

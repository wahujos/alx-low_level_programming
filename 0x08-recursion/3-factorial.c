#include <stdio.h>
#include "main.h"

/**
 * factorial - gives the factorial of a given number.
 * @n: integer to check for factorial
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

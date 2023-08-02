#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function returns 1 if prime number 0 otherwise
 * @n: interger
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 1));
	}
}
/**
 * check_prime - checks prime number
 * @num: interger
 * @index: counter
 * Return: 1 if prime 0 if not
 */
int check_prime(int num, int index)
{
	if (num < 2)
	{
		return (0);
	}
	if (num == 2 || num == 3)
	{
		return (1);
	}
	if (num % index == 0)
	{
		return (0);
	}
	if (index <= num / 2)
	{
		return (1);
	}
	return (check_prime(num, index + 1));
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a string
 * Return: converted number or NULL if fails.
 */
unsigned int binary_to_uint(const char *b)
{
	int rem;
	unsigned int number = 0;
	unsigned int power = 1;
	int decimal;

	if (b == NULL)
	{
		return (0);
	}
	decimal = atoi(b);
	while (decimal != 0)
	{
		rem = decimal % 10;
		number = number + (rem * power);
		decimal = decimal / 10;
		power = power * 2;
	}
	return (number);
}

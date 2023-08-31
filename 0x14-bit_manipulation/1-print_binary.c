#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int value passed to the function
 */
void print_binary(unsigned long int n)
{
	int i, value;

	for (i = 31; i >= 0; i--)
	{
		value = n >> i;
		if (value & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

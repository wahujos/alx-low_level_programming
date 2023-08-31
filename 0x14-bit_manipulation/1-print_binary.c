#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int value passed to the function
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if(n == 0)
	{
		_putchar('0');
	}
	i = 1UL << (sizeof(unsigned long int) *8 - 1);

	while (i > 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}

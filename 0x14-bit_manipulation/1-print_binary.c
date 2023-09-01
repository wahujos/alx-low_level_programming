#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int value passed to the function
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int bit_print = 0;
	
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if( n & mask)
		{
			_putchar('1');
			bit_print = 1;
		}
		else if (bit_print)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!bit_print)
	{
		_putchar('0');
	}
}

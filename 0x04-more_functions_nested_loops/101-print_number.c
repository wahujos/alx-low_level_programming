#include "main.h"

/**
 * print_number - Prints interger with the putchar
 *
 * @n: interger passed
 */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}

#include "main.h"

/**
 * print_line - draws line in terminal
 * @n: number of times
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

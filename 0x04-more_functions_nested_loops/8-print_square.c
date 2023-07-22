#include "main.h"

/**
 * print_square - Prints a square using #
 * @size: size of the square to print.
 */
void print_square(int size)
{
	int r;
	int c;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

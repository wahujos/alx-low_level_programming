#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int c;
	for (c = 0; c < 10; c++)
			{
		if (c == 2 || c == 4)
		{
			continue;
		}
		_putchar(c +48);
	}
	_putchar('\n');
}

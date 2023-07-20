#include "main.h"

/**
 * more_numbers - print times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int r;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (r = 0; r < 15; r++)
		{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}

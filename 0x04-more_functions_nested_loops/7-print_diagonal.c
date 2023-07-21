#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i && j > 0)
			{
				_putchar('\\');
			}
			else if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				continue;
			}
		}
	}
}

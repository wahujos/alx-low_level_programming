#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - natural numbers from n to 98
 * @n: number passed to the program
 */
void print_to_98(int n)
{
	int c;

	if (n <= 98)
	{
	for (c = n; c <= 98; c++)
	{
		if (c < 98)
		{
			printf("%d, ", c);
		}
		else
		{
			printf("%d", c);
		}
	}
	}
	else
	{
	for (c = n; c >= 98; c--)
	{
		if (c > 98)
		{
			printf("%d, ", c);
		}
		else
		{
			printf("%d", c);
		}
	}
	}
	printf("\n");
}

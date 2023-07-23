#include "main.h"
#include <stdio.h>

/**
 *print_times_table - Prints the times table
 *@n: we print the n times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int m;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				printf("%d,", m);
			}
			printf("\n");
		}
	}
}


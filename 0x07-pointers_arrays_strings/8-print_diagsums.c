#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to an array.
 * @size: size of the array
 */
void print_diagsums(int *a[], int size)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i == (size - j - 1))
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("%d", sum);
}

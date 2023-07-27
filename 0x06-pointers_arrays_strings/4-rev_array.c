#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverse an array
 * @a: an array of intergers
 * @n: number of elements to swipe
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; ++i)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

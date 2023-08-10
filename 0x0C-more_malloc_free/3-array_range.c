#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of intergers
 * @min: minimum
 * @max: maximum
 * Return: pointer of newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int total;

	if (min > max)
	{
		return (NULL);
	}
	total = (max - min) + 1;
	ptr = malloc(sizeof(int) * total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

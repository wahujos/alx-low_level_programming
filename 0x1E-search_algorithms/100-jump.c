#include "search_algos.h"
/**
 * jump_search - searches in a sorted array using Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int a = 0;
	int b = (int)sqrt(size);

	while ((array[(int)fmin(b, size) - 1]) < value)
	{
		a = b;
		b = b + sqrt(size);
		if (a >= (int)size)
		{
			return (-1);
		}
	}
	while (array[a] < value)
	{
		a = a + 1;
		if (a == fmin(b, size))
		{
			return (-1);
		}
	}
	if (array[a] == value)
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}

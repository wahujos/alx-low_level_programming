#include "search_algos.h"
/**
 * linear_search - linear search algorith
 * @array: a pointer to the array used for the search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, value);
			/*printf("Found %d at index: %d\n", value, i);*/
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}

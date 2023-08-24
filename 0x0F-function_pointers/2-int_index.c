#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an index
 * @array: array passed as argument
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: -1 incase no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

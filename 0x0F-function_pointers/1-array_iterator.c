#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * for each element
 * @array: holds intergers
 * @size: size of array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			action(*(array + i));
		}
	}
}

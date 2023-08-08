#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of characters
 * @size: size of array
 * @c: character passed
 * Return: null if size = 0, Apointer or null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}
	*(array + i) = '\0';
	return (array);
}



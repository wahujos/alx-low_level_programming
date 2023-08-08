#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - 2 dimensional array of intergers
 * @width: width
 * @height: height of array'
 * Return: pointer to 2d array of ints
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}



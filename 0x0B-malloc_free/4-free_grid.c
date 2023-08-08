#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory
 * @grid: pointer to a pinter of int
 * @height: height of a multidimensional array.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

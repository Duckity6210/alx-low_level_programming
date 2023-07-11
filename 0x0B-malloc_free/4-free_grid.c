#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by your alloc_grid function
 * @grid: pointer to pointer
 * @height: height of grid
 * Return always 0
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

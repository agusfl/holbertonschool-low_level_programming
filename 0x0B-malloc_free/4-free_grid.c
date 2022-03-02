#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer to a pointer to a two dimensional array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
}

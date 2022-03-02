#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns of the grid.
 * @height: rows of the grid.
 * Return: pointer to a two dim array or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* validamos que width y height no sean igual a 0 o negativo */
	grid = malloc(height * sizeof(int **));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++) /*en este for hago las filas del grid */
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (h = 0; h < height; h++)
			{
				free(grid[h]);
			}
			/**
			 * Liberamos memoria, porque en el main no se libera,
			 * y como le asignamos memoria con malloc tenemos que
			 * liberarla con free.
			 */
			return (NULL);
		}
		for (w = 0; w < width; w++) 
		/**
		 * En este for hago las columnas del grid, esta dentro del
		 * primer for para poder hacer las columnas.
		 */
		{
			grid[h][w] = 0; /*seteo los valores de grid en 0 */
		}
	}
	return (grid);
}

#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer to a pointer to a two dimensional array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int h;

	free(grid);

	for (h = 0; h < height; h++)
		free(grid[h]);
	/**
	 * Con el free voy recorriendo todo el two dimensional array ya que
	 * indicandole [h] va recorriendo fila a fila pasando por todas las
	 * columnas y lo va liberando.
	 * Y con el free (grid) se libera el puntero.
	 */
}

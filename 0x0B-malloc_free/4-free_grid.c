#include "main.h"

/**
 * free_grid - frees the 2d grid
 * @grid: the grid
 * @height: the grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

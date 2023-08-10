#include "main.h"
/**
 * free_grid - frees a grid
 * @grid: grid to be freed
 * @height: heght of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;
	for (i = 0 ; i < height ; i+=)
	{
		free (grid[i]);
	}
	free (grid);
}

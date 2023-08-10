#include "main."
/**
 * alloc_grid - allocates a grid
 * @width: grid width
 * @height: grid height
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int *));
	if (!grid)
		exit(0);
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (!grid[i])
		{
			for (j = 0 ; j < i ; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

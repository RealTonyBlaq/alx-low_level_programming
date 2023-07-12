#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function frees a 2D array
 * @grid: The array
 * @height: The height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

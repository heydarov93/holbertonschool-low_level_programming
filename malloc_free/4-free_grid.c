#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: pointer to the pointer to the type of an int
 * @height: int height of array
 *
 * Return: Nothiong
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

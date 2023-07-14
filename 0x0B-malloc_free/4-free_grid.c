#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional grid previously created
 * @grid:  grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: void
 *
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

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ee = malloc(sizeof(int *) * height);

	if (ee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ee[x] = malloc(sizeof(int) * width);

		if (ee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ee[x]);

			free(ee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ee[x][y] = 0;
	}

	return (ee);
}


#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - is a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: input 1
 * @height: input 2
 * Return: returns a pointer to a 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * (width));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * (height));
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i]);
			free(grid);

			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}

	}

	return (grid);
}

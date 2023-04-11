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

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		grid[j] = malloc(sizeof(int) * width);
		if (grid[j] == NULL)
		{
			while (j >= 0)
			{
				free(grid[j]);
				j--;
			}
			free(grid);

			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			grid[j][i] = 0;
		}

	}

	return (grid);
}

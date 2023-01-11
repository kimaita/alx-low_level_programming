#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array of integers(0)
 * @width: array dimension
 * @height: array dimension
 *
 * Return: pointer to array or
 *	   NULL on failure or height or width is <= 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(*grid[i]));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j)  = 0;
		}
	}
	return (grid);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees memory
 * from grid
 * @grid: double pointer from main
 * @height: height
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

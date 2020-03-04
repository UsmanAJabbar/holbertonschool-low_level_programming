#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - main function
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int rows;
	int columns;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int *) * height);

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}

	for (rows = 0; rows < height; rows++)
	{
		pointer[rows] = malloc(sizeof(int *) * width);

		if (pointer[rows] == NULL)
		{
			while (rows >= 0)
			{
				free(pointer[rows]);
				rows--;
			}
			free(pointer);
			return (NULL);
		}

		for (columns = 0; columns < width; columns++)
		{
			pointer[rows][columns] = 0;
		}
	}
	return (pointer);
}

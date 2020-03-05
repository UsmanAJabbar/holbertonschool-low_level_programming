#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - prints array ranges
 * in order
 * @min: value
 * @max: value
 * Return: Array | Null
 */

int *array_range(int min, int max)
{
	int *array;
	int range;
	int index;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min + 1; /* total number of arrays to work with */

	array = malloc(sizeof(int) * range);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (index = 0; index <= range; index++)
	{
		array[index] = min++; /* min is an int we can save min++ into *array */
	}
	return (array);
}

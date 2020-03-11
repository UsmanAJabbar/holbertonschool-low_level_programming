#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for a number in
 * the array
 * @array: contains all the elements
 * @size: number of elements
 * @cmp: runs all comparison functions
 * Return: Returns index where that number
 * was found | -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if ((size <= 0) || (array == NULL) || (cmp == NULL))
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if ((*cmp)(array[index]))
			return (index);
	}
		return (-1);
return (0);
}

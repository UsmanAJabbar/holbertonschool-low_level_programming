#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints the arrays
 * followed by their hex values imported
 * from the next function
 * @array: contains the integers in arrays
 * @action: calls upon the functions in main
 * of type int
 * @size: uses size_t to calculate the size of
 * array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	for (index = 0; index < size; index++)
	{
		(*action)(array[index]);
	}
}

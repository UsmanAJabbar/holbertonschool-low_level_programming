#include "search_algos.h"

/**
 * linear_search - searches for a value
 * in an array and returns the position
 * in the array.
 * @array: pointer pointing to the start of the array
 * @size: size of the array
 * @value: integer value to look for in the array
 */
int linear_search(int *array, size_t size, int value)
{
	int index, int_size = (int)size;

	if (!array)
		return (-1);

	for (index = 0; index < int_size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return(index);
	}

	return (-1);
}

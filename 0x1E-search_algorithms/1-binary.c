#include "search_algos.h"

/**
 * binary_search - looks for a specific
 * number in an array
 * @array: array
 * @size: size
 * @value: value to look for
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int index, start = 0, mid, end = (int)size - 1;

	if (!array)
		return (-1);

	while (1)
	{
		/* Generate printing module */
		printf("Searching in array: ");
		for (index = start; index <= end; index++)
		{
			printf("%d", array[index]);
			if (index < end)
				printf(", ");
		}
		printf("\n");


		mid = (start + end) / 2;

		if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
		if (array[mid] == value)
			return (mid);
		else if (mid == end)
			return (-1);
	}
}

#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints all the arrays in the loop
 * @a: individual elements from the array stored
 * in the pointer
 * @n: number of elements in *a
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

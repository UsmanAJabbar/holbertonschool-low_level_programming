#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints square arrays
 * diagonally on both sides
 * @a: array imported from a
 * @size: size of integers
 * 1st Matrix
 * add 0[0] index to 1[1] to the 2[2] index
 * 2nd matrix ( Reverse )
 * then 0[2] to 1[1] to 2[0]
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;

	for(i = 0, j = 0; i < (size * size); i++, j++)
	{
		*a = a[i][i] += a[i][i];
	}

        for(i = size, j = 0; i < (size * size); i--, j++)
	{
		*a = a[i][j] += a[i][j];
	}

	printf("The value diagonally of a added together is %d", *a);
}

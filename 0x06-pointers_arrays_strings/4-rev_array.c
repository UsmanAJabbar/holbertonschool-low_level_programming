#include "holberton.h"

/**
 * reverse_array - reverses orders
 * of the arrays
 * @a: arrays
 * @n: total number of elements in
 * the array.
 */

void reverse_array(int *a, int n)
{
	int begin = 0;
	int end = n - 1;
	int tmp;

	while (begin <= end)
	{
		tmp = a[begin];
		a[begin] = a[end];
		a[end] = tmp;
		begin++;
		end--;
	}
}

#include "holberton.h"

/**
 * print_triangle - prints triangle
 * with gaps and dots
 * @size: variable input originates from
 * main file
 */

void print_triangle(int size)
{
	int rows, columns, hashes;

	if (size <= 0)
		_putchar('\n');

	for (rows = 1; rows <= size; rows++)
		for (columns = size - rows; columns > 0; columns--)
			_putchar(' ');
		for (hashes = 0; hashes < rows; hashes++)
			_putchar('#');
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_square - prints # in a square format
 * from inputs received from var n
 * @rows: refer to rows
 * @columns: refer to columns
 */
void print_square(int size)
{
	int rows;
	int columns;

	for (rows = 0; rows < size; rows++)
	{
		for (columns = 0; columns < size; columns++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}

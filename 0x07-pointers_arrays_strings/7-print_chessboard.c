#include "holberton.h"

/**
 * print_chessboard - prints
 * a chessboard with an array
 * @a: array elements from main
 */

void print_chessboard(char (*a)[8])
{
	int rows, columns;

	for (rows = 0; rows < 8; rows++)
		for (columns = 0; columns < 8; columns++)
			_putchar(a[rows][columns]);
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_line - prints line visualizing
 * how far inputs from main are to 0
 * @n: variable input originates from
 * main file
 */

void print_diagonal(int n)
{
	int rows;
	int gaps;

	for (rows = 0; rows < n; rows++)
	{
		for (gaps = 0; gaps < rows;gaps++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}

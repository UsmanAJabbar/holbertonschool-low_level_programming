#include "holberton.h"

/**
 * print_line - prints line visualizing
 * how far inputs from main are to 0
 * @n: variable input originates from
 * main file
 */

void print_line(int n)
{
	while (n > 0)
		_putchar('_'), n--;

	_putchar('\n');
}

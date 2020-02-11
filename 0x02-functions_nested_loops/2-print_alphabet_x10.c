#include "holberton.h"

/**
 * print_alphabet_x10 - prints a-z 10x.
 *
 * return - Always (0)
 *
 */

void print_alphabet_x10(void)
{
	int alpha;
	int i;

	for (i = 48; i <= 57; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}

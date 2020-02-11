#include "holberton.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
_putchar('\n');
}

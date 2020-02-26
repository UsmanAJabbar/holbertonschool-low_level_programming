#include "holberton.h"

/**
 * _puts_recursion - recursively calls function
 * to print out strings.
 * @s: contains string
 * Returns: Results to fill in values
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

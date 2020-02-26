#include "holberton.h"

/**
 * _print_rev_recursion - recursively calls function
 * to print out strings in reverse
 * @s: contains string and hardcodes s[0] to get
 * the first character printed
 * Returns: Results to fill in values
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

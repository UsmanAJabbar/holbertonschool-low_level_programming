#include "holberton.h"

/**
 * puts2 - Prints out every second number
 * @str: pointer. *str points to the actual value
 * i controls the index array, allowing it
 * loop.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

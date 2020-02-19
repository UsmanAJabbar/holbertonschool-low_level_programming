#include "holberton.h"

/**
 * puts_half - Halves the total number of indexes
 * @str: pointer. *str points to the actual value
 * i controls the index array, allowing it
 * loop.
 */

void puts_half(char *str)
{
	int i;
	int n = (_strlen(str)) / 2;
	int odd = _strlen(str);

	for (i = n; i <= odd - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - find the string length
 * allows code to be dynamic
 * @s: finds the length
 * Return: Returns the length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}

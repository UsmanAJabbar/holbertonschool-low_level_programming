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

	for (i = 0; i <= _strlen(str) - 1; i++)
	{
		_putchar(str[i]);
		i++;
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

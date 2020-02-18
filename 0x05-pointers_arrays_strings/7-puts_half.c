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
	int n = _strlen(str) - 1;
	int odd = _strlen(str);

	if (n % 2 == 0)
	{
		for (i = 0; i <= n / 2; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = odd / 2; i <= n; i++)
		{
			_putchar(str[i]);
		}
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

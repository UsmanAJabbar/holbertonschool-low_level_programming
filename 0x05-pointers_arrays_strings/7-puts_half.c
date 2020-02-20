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
	int odd = (_strlen(str) + 1) / 2;
	int even = _strlen(str) / 2;
	int totallength = _strlen(str);

	if (totallength % 2 == 0)
	{
		for (i = even; i < totallength; i++)
		{
			_putchar(str[i]);
		}
	}

	else if (totallength % 2 != 0)
	{
		for (i = odd; i < totallength; i++)
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

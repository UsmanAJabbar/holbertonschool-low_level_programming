#include "holberton.h"

/**
 * cap_string - changes the begginning
 * of all worlds with a captial letter
 * @a: array from main
 * Return: Returns final value into a
 */

char *cap_string(char *a)
{
	int i;

	for(i = 0; a[i] != '\0'; i++)
	{
		if (a[0] >= 'a' && a[0] <= 'z')
		{
			a[0] -= 32;
		}

		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == '.')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] -= 32;
			}
		}
	}
	return (a);
}

#include "holberton.h"

/**
 * _strlen - function prints length
 * @s: pointer imported from c
 * Return: (0)
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}

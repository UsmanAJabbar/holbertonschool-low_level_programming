#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of
 * empty chars
 * @size: of input from main
 * @c: character to be saved in arrays
 * Return: (0)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

        if (size == 0)
        {
                return (NULL);
        }

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	*(str + i) = '\0';

	return (str);
}

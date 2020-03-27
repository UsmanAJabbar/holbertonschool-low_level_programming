#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a string of
 * binary into integers
 * @b: contains string of binary
 * Return: 0 if letter is detected | Result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int index;
	unsigned int weight = 1;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	/* Scan for letters */
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
	}

	/* From the strlen to 0 */
	while (index != 0)
	{
		index--; /* go to the index -1 */

		/* If you do find a 1 Multiply by its exponent */
		if (b[index] == '1')
		{
			result = result + ((b[index] - '0') * weight);
			weight = weight * 2; /* increase weight by 2*/
		}

		else if (b[index] == '0')
		{
			weight = weight * 2;
		}
	}
	return (result);
}

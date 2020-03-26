#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a string of
 * binary into integers
 * @b: contains string of binary
 * Return: 0 if letter is detected | Result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int remainder;
	unsigned int weight = 1;
	unsigned int binary;
	unsigned int index;

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

		else
			continue;
	}

	/* Work with numbers directly rather than a string */
	binary = atol(b); /* Save coverted binary string as an int */
	while (binary != 0)
	{
		remainder = binary % 10; /* Fetch and work with the last digit */
		result = result + remainder * weight; /* Mul by weight */
		binary = binary / 10; /* Cut off the last digit */
		weight = weight * 2; /* Increment weight exponent by 2 */
	}

return (result);
}

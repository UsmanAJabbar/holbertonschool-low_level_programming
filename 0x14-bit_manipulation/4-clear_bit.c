#include "holberton.h"

/**
 * clear_bit - goes to the index
 * sets bit to 0
 * @n: contains address to the number
 * @index: location to in the number
 * to change
 * Return: 1 | -1;
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	/* Push 1 to the position defined by index */
	int mask = 1 << index;

	/* Check if there are enough digits */
	/* to get to the required index */
	if (index < sizeof(n) * 8)
	{
		/* Save the bit at that index */
		bit = (*n >> index) & 1;

		/* If that bit was a 0 */
		/* Update manipulate *n to add */
		/* 1 at that position */
		if (bit == 1)
			*n = *n ^ mask;

		return (1);
	}
return (-1);
}

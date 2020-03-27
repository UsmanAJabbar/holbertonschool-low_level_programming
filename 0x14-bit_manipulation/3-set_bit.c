#include "holberton.h"

/**
 * set_bit - goes to the index
 * sets bit to 1
 * @n: contains address to the number
 * @index: location to in the number
 * to change
 * Return: 1 | -1;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	/* Push 1 'index' many indexes */
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
		if (bit == 0)
			*n = *n | mask;

		return (1);
	}
return (-1);
}

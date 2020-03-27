#include "holberton.h"

/**
 * get_bit - gets the bit at the given index
 * @n: input
 * @index: index to return
 * Return: Void
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index < sizeof(n) * 8)
	{
		bit = (n >> index) & 1;
		return (bit);
	}

return (-1);
}


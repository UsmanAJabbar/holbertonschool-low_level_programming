#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - checks if malloc
 * is returning null
 * @b: assigned unsigned int from main
 * Return: if malloc fails, returns 98
 * status code
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *checker;

	checker = malloc(b);

	if (checker == NULL)
	{
		exit(98);
	}
return (checker);
}

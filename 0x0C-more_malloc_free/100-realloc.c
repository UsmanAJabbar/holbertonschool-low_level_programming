#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - contains main function
 * @old_size: old size
 * @new_size: new size
 * Return: reallocate | ptr | NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reallocate;

	if (ptr == NULL)
	{
		reallocate = malloc(new_size);
		free(ptr);
		return (reallocate);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

return(reallocate);
}

/* realloc - change the size of the previous malloc to a new malloc size */

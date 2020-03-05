#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - contains logic to
 * create your own calloc
 * @nmemb: number of members in
 * array
 * @size: malloc (sizeof) from main
 * Return: NULL | function
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *function;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	function = malloc(sizeof(char) * nmemb * size);

	if (function == NULL)
	{
		free(function);
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		function[index] = 0;
	}

	return (function);
}

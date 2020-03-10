#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the pointer
 * d to free up memory
 * @d: points to struct dog *t in dog.h
 * Return: Void | Null
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}

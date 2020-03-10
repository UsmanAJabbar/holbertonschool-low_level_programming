#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bigdog;
	char *copyname; /* stores old name */
	char *copyowner; /* stores old owner */
	int i, j;

	bigdog = malloc(sizeof(dog_t));
	copyname = malloc(sizeof(char) * (_strlen(name) + 1)); /* creating space */
	copyowner = malloc(sizeof(char) * (_strlen(owner) + 1));

	/* checking if malloc failed */
	if (bigdog == NULL)
		return (NULL);

	if (copyname == NULL)
	{
		free(copyname);
		return (NULL);
	}
	if (copyowner == NULL)
	{
		free(copyowner);
		return (NULL);
	}
	/* copying contents into new pointers */
	for (i = 0; name[i] != '\0'; i++)
	{
		copyname[i] = name[i];
	}
	copyname[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
	{
		copyowner[j] = owner[j];
	}
	copyowner[j] = '\0';

	bigdog->name = copyname;
	bigdog->age = age;
	bigdog->owner = copyowner;
	return (bigdog);
}

/**
 * _strlen - function prints length
 * @s: pointer imported from c
 * Return: (0)
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

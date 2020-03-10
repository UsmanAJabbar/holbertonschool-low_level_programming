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

	bigdog = malloc(sizeof(dog_t));
	copyname = malloc(sizeof(char) * (_strlen(name) + 1)); /* creating space */
	copyowner = malloc(sizeof(char) * (_strlen(owner) + 1));

	/* checking if malloc failed */
	if ((bigdog == NULL) || (copyname == NULL) || (copyowner == NULL))
	{
		free(bigdog);
		free(copyname);
		free(copyowner);
		return (NULL);
	}

	_strcpy(copyname, name);
	_strcpy(copyowner, owner);

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

/**
 * _strcpy - copies string from dest to src
 * @src: first var
 * @dest: second var
 * Return: returns stored value in dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
dest[i] = '\0';
return (dest);
}

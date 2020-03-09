#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes struct dog
 * struct dog - dog's properties
 * @d: pointer to the address of struct dog
 * @name: imports name
 * @age: imports age
 * @owner: imports the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

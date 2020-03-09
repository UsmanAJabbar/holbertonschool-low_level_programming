#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog's properties
 * @name: imports name
 * @age: imports age
 * @owner: imports the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

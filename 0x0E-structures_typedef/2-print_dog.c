#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints details of the dogs
 * struct dog - dog struct
 * @d: attributes of the dog
 */

void print_dog(struct dog *d)
{
	if(d == NULL)
		printf("");

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);

	printf("Age: %f\n", (*d).age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}

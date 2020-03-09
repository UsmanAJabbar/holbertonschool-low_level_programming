#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	char *copyname; /* stores old name */
	char *copyowner; /* stores old owner */
	int i;

	copyname = malloc(sizeof(char) * (name + 1)); /* creating space */
	copyowner = malloc(sizeof(char) * (owner + 1));

	/* checking if malloc failed */

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

	if ((*d).name == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < name[i] != '\0'; i++)
		{
			copyname[i] = name[i];
		}
		copyname[i] = '\0'; /* adding null char to last index */
	}

	if ((*d).owner == NULL)
	{
		return (NULL);
	}

	else
	{
		for (j = 0; j < owner[j] != '\0'; j++)
		{
			copyowner[j] = owner[j];
		}
		copyowner[j] = '\0'; /* adding null char to last index */
	}
	return(copyowner, age, owner);
}

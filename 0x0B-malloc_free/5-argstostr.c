#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

char *argstostr(int ac, char **av)
{
	int i, len;
	int giantS = 0;
	int size = 0;
	char *newstring;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
		{
			size++;
		}
	}

	newstring = malloc((sizeof(char) * size) + ac + 1);

	if (newstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
		{
			newstring[giantS] = av[i][len];
			giantS++;
		}
		newstring[giantS] = '\n';
		giantS++;
	}

	newstring[giantS] = '\0';

	if (newstring == NULL)
	{
		return (NULL);
	}

	return (newstring);
}

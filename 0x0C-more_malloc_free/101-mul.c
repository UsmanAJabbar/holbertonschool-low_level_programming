#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - contains all logic
 * @argc: argument counts
 * @argv: argument verbose
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;
	int *return;

	if (argc == 3)
	{
		return = malloc(sizeof(int) * 20000);

		for (i = 1; i < argc; i++)
		{
			result = result * atoi(argv[i]);
		}

	printf("%d\n", result);
	return (0);
	}

	else
	{
		printf("Error\n");
		exit (98);
	}
}

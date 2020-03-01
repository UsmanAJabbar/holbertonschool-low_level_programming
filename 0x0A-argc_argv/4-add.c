#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - contains all logic
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error
 * else print
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int index = 1;
	int subindex = 0;

	for (index = 1; index < argc; index++)
	{
		for (subindex = 0; argv[subindex] != '\0'; subindex++)
		{
			if (argv[index][subindex] >= '0' && argv[index][subindex] <= '9')
			{
				sum = sum + atoi(argv[index]);
				break;
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
printf("%d\n", sum);
}


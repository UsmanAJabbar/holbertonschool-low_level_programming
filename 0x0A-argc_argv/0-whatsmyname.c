#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc - argument count
 * @argv - argument verbose
 * (aka words saved in arrays)
 * @i = used to run through indexes
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

return (0);
}

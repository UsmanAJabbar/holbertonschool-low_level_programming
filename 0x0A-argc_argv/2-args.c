#include <stdio.h>

/**
 * main - contains logic for
 * program
 * @argc: gets the argument
 * count
 * @argv: prints out the indexes
 * that stored the verbose messages
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

return (0);
}

#include <stdio.h>
#include "holberton.h"

#define SRC argv[1]
#define DEST argv[2]

int main(int argc, char *argv[])
{
	int src, dest, readcount, write_d;
	char buffer[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	else
	{
		/* Open the src & dest + Check Success */
		src = open(SRC, O_RDWR);
		if (src == -1)
		{
			printf("Error: Can't read from file NAME_OF_THE_FILE\n");
			exit(98);
		}

		dest = open(DEST, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (dest == -1)
		{
			printf("Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}

		/* Copy everything from source into the 1024 bit buffer */
		readcount = read(src, buffer, 1024);
		if (readcount == -1)
		{
			printf("Error: Can't read from the file NAME_OF_THE_FILE\n");
			exit(99);
		}

		/* Now write everything saved in buffer into dest as many bytes READ picked up on */
		write_d = write(dest, buffer, readcount);
		if (write_d == -1)
		{
			printf("Error: Can't write to NAME_OF_THE_FILE\n");
			exit(99);
		}

		/* Check if closing both files is possible */
		if (close(src) == -1)
		{
			printf("Error: Can't close fd FD_VALUE");
			exit(100);
		}

		if (close(dest) == -1)
		{
			printf("Error: Can't close fd FD_VALUE");
			exit(100);
		}

		/* Closing them both is possible, clear memory */
		close(src);
		close(dest);
	}
	return (0);
}

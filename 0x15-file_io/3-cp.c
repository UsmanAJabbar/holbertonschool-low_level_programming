#include <stdio.h>
#include "holberton.h"

#define SRC argv[1]
#define DEST argv[2]

/**
 * main - replicates cp function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int src, dest, readcount, write_d;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* READ OPERATIONS */
	src = open(SRC, O_RDONLY);
	if (src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", SRC), exit(98);
	/* Copy everything from source into the 1024 bit buffer */
	readcount = read(src, buffer, 1024);
	if (readcount == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", SRC), exit(98);
	/* WRITE OPERATIONS */
	dest = open(DEST, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/* Write everything saved in buffer into dest as many bytes READCOUNT */
	write_d = write(dest, buffer, readcount);
	if (dest == -1 || write_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", DEST), exit(99);
	}
	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	}
	close(src), close(dest);
return (0);
}

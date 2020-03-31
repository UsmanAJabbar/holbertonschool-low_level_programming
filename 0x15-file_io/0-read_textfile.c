#include "holberton.h"
#include <stdio.h>

/**
 * read_textfile - reads file from stdin
 * and prints to stdout
 * @filename: file to read
 * @letters: sets the limiter on letters
 * Return: Returns lettercount
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	/* Gets the size of letters to be used in the read func */
	char *buffer = malloc(sizeof(char) * letters);
	int lettercount;
	int writecount;

	/* NULL CHECK */
	if (filename == NULL || buffer == NULL || letters == 0)
	{
		free(buffer);
		return (0);
	}

	/* Open the file */
	fd = open(filename, O_RDONLY);
	/* Check if file was able to be opened */
	if (fd == -1)
		return (0);

	/* Once the file's opened, read it */
	lettercount = read(fd, buffer, letters);

	if (lettercount == -1)
	{
		free(buffer); /* Frees space allocated */
		close(fd); /* Closes the file */
		return (0); /* Return Error */
	}

	writecount = write(STDOUT_FILENO, buffer, lettercount);

	if (lettercount != writecount)
	{
		return (0);
	}
	/* End processing | Clear memory */
	free(buffer);
	close(fd);

return (lettercount);
}

#include "holberton.h"

/**
 * append_text_to_file - Appends text to an existing file
 * @filename: filename
 * @text_content: text
 * Return: 1 | -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* Saves the file descriptor */
	int lettercount, write_d;

	/* Input checks */
	if (text_content == NULL)
	{
		text_content = "";
	}

	if (filename == NULL)
	{
		return (-1);
	}

	/* Open the file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	/* Get the strlen to pass onto write func */
	for (lettercount = 0; text_content[lettercount] != '\0'; lettercount++)
	{
		;
	}

	/* Now add the data to the current file */
	write_d = write(fd, text_content, lettercount);

	if (write_d == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}

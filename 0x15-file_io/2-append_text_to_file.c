#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 if file exists, -1 if it fails or does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	rw = write(fd, text_content, len);

	if (fd == -1 || rw == -1)
		return (-1);

	close(fd);

	return (1);
}

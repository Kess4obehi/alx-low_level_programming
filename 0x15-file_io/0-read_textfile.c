#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t lenw;
	ssize_t lenr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	lenr = read(fd, buffer, letters);
	lenw = write(STDOUT_FILENO, buffer, lenr);

	free(buffer);
	close(fd);
	return (lenw);
}

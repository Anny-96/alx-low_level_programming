#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This function reads text file, prints it to POSIX std output
 * @filename: The text file about to be read
 * @letters: The number of letters it read
 * Return: w- actual number of bytes to read and print
 *        It prints 0 if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

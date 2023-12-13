#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: the number of letters it should read and print
 *
 * Return:
 *	the actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t pchars;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd < 0)
		return (0);

	buf = (char *) malloc(letters * sizeof(char) + 1);

	if (buf == NULL)
		return (0);

	pchars = read(fd, buf, letters);
	buf[pchars] = '\0';

	if (!pchars)
		return (0);

	pchars = write(STDOUT_FILENO, buf, pchars);

	if (!pchars)
		return (0);
	close(fd);
	return (pchars);
}

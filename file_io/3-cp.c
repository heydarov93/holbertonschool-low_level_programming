#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, rd_sz = 1, wr_sz;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (fd_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (rd_sz)
	{
		rd_sz = read(fd_from, buffer, BUFSIZ);
		if (rd_sz == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (rd_sz > 0)
		{
			wr_sz = write(fd_to, buffer, rd_sz);
			if (wr_sz != rd_sz || wr_sz == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);


	return (0);
}

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	size_t sz;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd)
	{
		if (text_content != NULL)
		{
			sz = write(fd, text_content, strlen(text_content));

			if (close(fd) != -1 && sz)
				return (1);
		}
	}

	return (-1);
}

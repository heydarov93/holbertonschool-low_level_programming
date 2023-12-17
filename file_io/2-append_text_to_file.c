#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to write into
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t sz = 1;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd)
	{
		if (text_content != NULL)
			sz = write(fd, text_content, strlen(text_content) * sizeof(char));

		if (close(fd) != -1 && sz)
			return (1);
	}

	return (-1);
}

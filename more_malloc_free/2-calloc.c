#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_arr;
	unsigned int i = 0, total_bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_bytes = nmemb * size;
	new_arr = malloc(total_bytes);

	if (new_arr)
	{
		while (i < total_bytes)
		{
			new_arr[i] = 0;
			i++;
		}

		return (new_arr);
	}

	free(new_arr);
	return (NULL);
}

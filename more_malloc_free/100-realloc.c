#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory,
 *		or NULL if the request fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_al_mem;
	char *cp_ptr = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	new_al_mem = malloc(new_size);

	if (ptr == NULL)
	{
		free(ptr);
		return ((void *) new_al_mem);
	}

	for (i = 0; i < old_size; i++)
		new_al_mem[i] = cp_ptr[i];

	free(ptr);
	return ((void *) new_al_mem);
}

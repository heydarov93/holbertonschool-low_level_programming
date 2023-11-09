#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 *
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *new_field;

	new_field = malloc(b);

	if (!new_field)
	{
		exit(98);
	}

	return (new_field);
}

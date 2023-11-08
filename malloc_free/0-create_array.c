#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, inits it with a specific char
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL if size = 0; a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	char_arr = malloc(sizeof(char) * size);

	if (char_arr)
	{
		while (i < size)
		{
			char_arr[i] = c;
			i++;
		}

		return (char_arr);
	}

	return (NULL);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: pointer to the char
 *
 * Return: NULL if str = NULL, On success, returns a pointer to the
 *         duplicated string. It returns NULL if insufficient memory
 *         was available
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i = 0, length = strlen(str);

	if (!str)
		return (NULL);

	dup_str = malloc(sizeof(char) * length);

	if (dup_str)
	{
		while (i < length)
		{
			dup_str[i] = str[i];
			i++;
		}

		return (dup_str);
	}

	return (NULL);
}

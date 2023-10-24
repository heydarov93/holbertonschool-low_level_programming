#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: char
 * @src: char
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];

		if (!(src[i + 1]))
			dest[i + 1] = src[i + 1];
	}
	return (dest);
}

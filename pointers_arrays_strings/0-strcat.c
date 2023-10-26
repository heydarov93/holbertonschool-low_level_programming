#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: char
 * @src: char
 *
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lengthSRC, lengthDEST;

	lengthSRC = strlen(src);
	lengthDEST = strlen(dest);

	for (i = 0; i <= lengthSRC; i++)
	{
		*(dest + (lengthDEST + i)) = *(src + i);
	}

	return (dest);
}

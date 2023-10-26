#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lengthDEST;

	lengthDEST = strlen(dest);

	for (i = 0; i < n; i++)
		*(dest + (lengthDEST + i)) = *(src + i);

	return (dest);
}

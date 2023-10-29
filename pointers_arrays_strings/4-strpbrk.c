#include "main.h"
#include <string.h>

/**
 * _strpbrk - gets the length of a prefix substring
 *
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: the number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int length_accept = strlen(accept);

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < length_accept; ++j)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}

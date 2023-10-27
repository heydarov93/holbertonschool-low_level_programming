#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: pointer to char
 * @c: char
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;
	int lengthSTR = strlen(s);


	for (i = 0; i <= lengthSTR; ++i)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}

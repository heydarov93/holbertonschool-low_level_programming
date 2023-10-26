#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to char
 * @s2: pointer to char
 *
 *
 * Return: 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, max, lengthS1, lengthS2;

	lengthS1 = strlen(s1);
	lengthS2 = strlen(s2);

	if (lengthS1 > lengthS2)
		max = lengthS1;
	else
		max = lengthS2;

	for (i = 0; i < max; ++i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

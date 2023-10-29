#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, prev_count = 0, count = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				count++;
				j = 5;
			}
		}

		if (count  > prev_count)
			prev_count = count;
		else
			return (count);

	}

	return (count);
}

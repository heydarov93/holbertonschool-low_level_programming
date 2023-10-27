#include "main.h"

/**
 * leet - that encodes a string into 1337
 *
 * @s: pointer to char
 *
 * Return: pointer to char
 */

char *leet(char *s)
{
	int i, j;
	char matches[2][5] = {
		{'a', 'e', 'o', 't', 'l'},
		{'4', '3', '0', '7', '1'}
	};

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			if (
				s[i] == matches[0][j] ||
				s[i] == matches[0][j] - 32
			)
			{
				s[i] = matches[1][j];
			}
		}
	}

	return (s);
}

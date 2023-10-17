#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *
 *@c: int
 *
 *Return: 1 if c is lowercase and 0 otherwise
 */

int  _isalpha(int c)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (c == ch)
		{
			return (1);
		}

		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		if (c == ch)
		{
			return (1);
		}

		ch++;
	}

	return (0);
}

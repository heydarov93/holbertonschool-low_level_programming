#include "main.h"

/**
 * _isupper -  checks for uppercase character
 * @c: int
 *
 * Return: On success 1.
 *
 */

int _isupper(int c)
{
	int decimal = 65;

	while (decimal <= 90)
	{
		if (c == decimal)
			return (1);
		decimal++;
	}

	return (0);
}

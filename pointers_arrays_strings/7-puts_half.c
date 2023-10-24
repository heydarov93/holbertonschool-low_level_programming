#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: pointer to the string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int n;
	int length = 0;

	while (str[length])
		length++;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	while (n > 0)
	{
		_putchar(str[length - n]);
		n--;
	}

	_putchar('\n');
}

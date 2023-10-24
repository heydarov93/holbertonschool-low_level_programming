#include "main.h"

/**
 * puts2 -  prints every other character of a string
 *
 * @str: pointer to the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}

#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 *
 *@size: size is the size of the square
 *
 * Return: nothing
 *
 */

void print_square(int size)
{
	int row = 0;
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; row < size; row++)
	{
		while (i < size)
		{
			_putchar('#');
			i++;
		}

		i = 0;

		_putchar('\n');
	}

}

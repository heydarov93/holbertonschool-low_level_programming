#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 *
 *@n: the number of times the character \ should be printed
 *
 * Return: nothing
 *
 */

void print_diagonal(int n)
{
	int row = 0;
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; row < n; row++)
	{
		while (i < row)
		{
			_putchar(' ');
			i++;
		}

		i = 0;

		_putchar('\\');
		_putchar('\n');
	}

}

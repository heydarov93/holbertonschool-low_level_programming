#include "main.h"

/**
 * print_triangle -   prints a triangle, followed by a new line
 *
 *@size: the size of the triangle
 *
 * Return: nothing
 *
 */

void print_triangle(int size)
{
	int space;
	int hashtag;
	int row = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; row <= size; row++)
	{
		space = size - row;
		hashtag = row;

		while (space > 0)
		{
			_putchar(' ');
			space--;
		}

		while (hashtag > 0)
		{
			_putchar('#');
			hashtag--;
		}

		_putchar('\n');
	}

}

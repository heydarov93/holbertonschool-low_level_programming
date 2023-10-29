#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to multidimensional array[][8]
 *
 *
 * Return: nothing
 *
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int length = sizeof(a) / sizeof(char);

	for (i = 0; i < length; ++i)
	{
		for (j = 0; j < 8; ++j)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}

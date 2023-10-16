#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar('0' + ch);

		if (ch < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

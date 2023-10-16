#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	int chh;

	for (ch = 0; ch < 10; ch++)
	{

		for (chh = ch + 1; chh < 10; chh++)
		{
			putchar('0' + ch);
			putchar('0' + chh);

			if (!(ch + 1 == 9 && chh ==  9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

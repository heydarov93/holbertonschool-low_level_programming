#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	int ch2;
	int ch3;

	for (ch = 0; ch < 10; ch++)
	{

		for (ch2 = ch + 1; ch2 < 10; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 < 10; ch3++)
			{
				putchar('0' + ch);
				putchar('0' + ch2);
				putchar('0' + ch3);
				if (!(ch + 1 == 8 && ch2 + 1 == 9 && ch3 ==  9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

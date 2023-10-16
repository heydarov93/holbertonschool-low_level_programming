#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 0; ch < 10; ch++)
		putchar('0' + ch);

	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}

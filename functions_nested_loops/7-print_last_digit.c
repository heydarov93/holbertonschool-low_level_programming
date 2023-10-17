#include "main.h"

/**
 *print_last_digit - computes the absolute value of an integer
 *
 *@n: int
 *
 *Return: prints the last digit of a number
  */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
	}
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}

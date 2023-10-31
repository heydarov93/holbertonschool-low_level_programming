#include "main.h"
#include "stdio.h"

/**
 * my_is_prime - finds prime number
 *
 * @n: int
 * @div: int divisor
 *
 *
 * Return: int
 */

int my_is_prime(int n, int div)
{
	if (n == div)
		return (1);

	if (n % div == 0)
		return (0);

	return (my_is_prime(n, div + 1));
}

/**
 * is_prime_number - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (my_is_prime(n, 2));
}






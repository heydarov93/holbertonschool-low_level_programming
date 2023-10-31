#include "main.h"
#include "stdio.h"

/**
 * my_sqrt - returns the natural square root of a number
 *
 * @n: int
 * @subt: int subtrahend
 * @counter: int
 *
 * Return: int
 */

int my_sqrt(int n, int subt, int counter)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (counter);

	counter++;
	return (my_sqrt(n - subt, subt + 2, counter));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (my_sqrt(n, 1, 0));
}






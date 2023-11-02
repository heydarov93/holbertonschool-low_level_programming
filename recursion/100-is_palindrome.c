#include "main.h"
#include "stdio.h"

/**
 *  _strlen_recursion - returns the length of a string
 *
 * @s: char
 *
 * Return: int length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * my_is_palindrome - finds a palindrome strings
 *
 * @s: char
 * @max_index: int
 *
 *
 * Return: int
 */

int my_is_palindrome(char *s, int max_index)
{
	if (*s != *(s + max_index))
		return (0);
	else if (max_index < 0)
		return (1);

	return (my_is_palindrome(s + 1, max_index - 2));
}

/**
 * is_palindrome - checks if a string is palindrome or not
 *
 * @s: char
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int max_index = _strlen_recursion(s) - 1;

	return (my_is_palindrome(s, max_index));
}

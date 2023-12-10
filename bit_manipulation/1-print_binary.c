#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * print_binary - prints the binary representation of a number
  * @n: val
  * Return: unsigned integer if sucess if not 0
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n != 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

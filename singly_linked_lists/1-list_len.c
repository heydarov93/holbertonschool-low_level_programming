#include <stdio.h>
#include "lists.h"

/**
*list_len - a function that returns the number of elements
*in a linked list_t list
*
*@h: a pointer to the list_t list
*
*Return: the number of nodes
*
*
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

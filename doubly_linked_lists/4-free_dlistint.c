#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint - frees a linked list
 *@head: dlistint_t list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

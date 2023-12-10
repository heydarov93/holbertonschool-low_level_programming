#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_dnodeint_end - a function that adds a new node at
 *the beginning of a dlistint_t list.
 *
 *@head:  pointer to the dlistint_t list
 *@n: data to add in new node
 * Return: the adress of the new element, or NULL if it failed
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = temp;

	return (new);
}

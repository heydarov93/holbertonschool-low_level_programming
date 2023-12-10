#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - a function that adds a new node at the beginning of a list_t list
 *@head: pointer to a pointer
 *@str: new string to add in node
 *
 *Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}

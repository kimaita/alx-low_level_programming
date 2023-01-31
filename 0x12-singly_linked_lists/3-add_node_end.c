#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to pointer of list_t head
 * @str: string to put as value in node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	return (new);
}


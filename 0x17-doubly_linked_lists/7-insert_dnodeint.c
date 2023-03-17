#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer of list head node
 * @idx: index at which to add the new node
 * @n: data to store at the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *current;

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		if (*h != NULL)
			new->next = current;
		*h = new;
		return (new);
	}
	i = 0;
	while (current)
	{
		if (i == idx)
		{
			new->next = current;
			current->prev->next = new;
			new->prev = current->prev;
			current->prev = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: pointer to head node of dlistint_t list
 * @index: index of the node to remove
 *
 * Return: the nth node or NULL if non-existent
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	i = 0;
	current = head;
	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}

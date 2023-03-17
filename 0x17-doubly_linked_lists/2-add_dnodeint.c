#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to pointer of first node of dlistint_t list
 * @n: integer data to be stored in the node
 *
 * Return: address of the new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current->prev = new;
		new->next = current;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}

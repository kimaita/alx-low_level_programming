#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer of first node of dlistint_t list
 * @n:integer data to be stored in node
 * Return: address of the newly added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	current = *head;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;

		current->next = new;
		new->prev = current;
		new->next = NULL;
	}
	return (new);
}

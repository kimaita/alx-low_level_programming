#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to linked list head node
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if ((*head) == NULL)
		return (0);
	n = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list and sets the head to
 * NULL
 * @head: double pointer to list head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
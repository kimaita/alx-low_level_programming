#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: pointer to dlistint_t head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

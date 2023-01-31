#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: pointer to list_t head node
 *
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head->next)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
	free(current->str);
	free(current);
}

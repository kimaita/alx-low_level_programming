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

	current = head;
	while (current->next)
	{
		free(current);
		current = current->next;
	}
}

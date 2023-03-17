#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * of a dlistint_t linked list.
 * @head: pointer to pointer of list head node
 * @index:index of node to delete
 *
 * Return: 1 (SUCCESS) or -1 (FAILED)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	i = 0;
	while (current)
	{
		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		if (i == index)
		{
			temp = current;
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}

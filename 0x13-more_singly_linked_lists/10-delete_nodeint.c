#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to listint_t head pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 (SUCCESS), -1(FAILURE)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *_delete;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (tmp != NULL && count != index - 1)
		{
			count++;
			tmp = tmp->next;
		}
		if (count != index - 1)
			return (-1);
		_delete = tmp->next;
		tmp->next = tmp->next->next;
		free(_delete);
		return (1);
	}
}

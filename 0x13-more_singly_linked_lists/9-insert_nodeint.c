#include "lists.h"
#include <stdlib.h>
#include "1-listint_len.c"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to list head node
 * @idx: index of the list where the new node should be added
 * @n: data value to store at inserted node
 *
 * Return: address of the new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;

	if (idx >= listint_len(*head))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
	}
	else
	{
		while (temp && i < idx - 1)
		{
			i++;
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}

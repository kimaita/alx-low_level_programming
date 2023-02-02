#include "lists.h"
#include "1-listint_len.c"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to linked list head node
 * @index: index of the node
 *
 * Return:pointer to node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nth = head;

	i = 0;
	
	if (index >= listint_len(head))
		return (NULL);

	while (head && i != index)
	{
		nth = nth->next;
		i++;
	}
	
	return (nth);
}

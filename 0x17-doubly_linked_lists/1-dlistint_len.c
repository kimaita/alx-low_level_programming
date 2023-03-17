#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to list head
 *
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}

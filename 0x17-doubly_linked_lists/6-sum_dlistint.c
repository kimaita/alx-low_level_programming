#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list.
 * @head: pointer to list head node
 * Return: sum of list node data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head != NULL)
	{
		current = head;
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}

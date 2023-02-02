#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: pointer to list head node
 *
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);

	while (current->next)
	{
		sum += current->n;
		current = current->next;
	}
	sum += current->n;
	return (sum);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to linked list head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		n++;
		printf("%i\n", current->n);
		current = current->next;
	}
	return (n);
}

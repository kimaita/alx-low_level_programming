#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list(list_t)
 * @h:pointer to linked list head
 *
 * Description: prints [0] (nil) if str is NULL, else:
 *	[5] Hello
 *	[5] World
 * Return: number of nodes in list_t
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		n++;
		if (current->str != NULL)
			printf("[%i] %s\n", current->len, current->str);
		else
			printf("[%i] %s\n", 0, "(nil)");
		current = current->next;
	}
	return (n);
}

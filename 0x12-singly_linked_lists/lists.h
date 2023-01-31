#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - function that prints all the elements of a linked list(list_t)
 * @h: pointer to head of list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - function that returns the number of elements in
 *	a linked list_t list
 * @h: pointer to head of list_t
 *
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h);

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of list_t head
 * @str: string to put as value in node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to pointer of list_t head
 * @str: string to put as value in node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - function that frees a list_t list
 * @head: pointer to list_t head node
 *
 */
void free_list(list_t *head);

#endif /* #ifndef _LISTS_H_ */


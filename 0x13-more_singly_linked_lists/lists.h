#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to linked list head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to linked list head node
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to list head node
 * @n: data to store in the node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to list head node
 * @n: data to store in the node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - frees a listint_t list
 * @head: pointer to list head node
 *
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - function that frees a listint_t list and sets the head to
 * NULL
 * @head: double pointer to list head node
 */
void free_listint2(listint_t **head);

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to linked list head node
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to linked list head node
 * @index: index of the node
 *
 * Return:pointer to node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: pointer to list head node
 *
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head);

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to list head node
 * @idx: index of the list where the new node should be added
 * @n: data value to store at inserted node
 *
 * Return: address of the new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to listint_t head pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 (SUCCESS), -1(FAILURE)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif /* #ifndef _LISTS_H_ */

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
 * @h: list_t to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h);
#endif /* #ifndef _LISTS_H_ */


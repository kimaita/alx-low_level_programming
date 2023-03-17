# C - Doubly linked lists

A look at doubly linked lists.  
This is a data structure similar to the singly linked list but with two pointers per node, one pointing to the previous node and the other to the next node. The head node has its previous pointer as `NULL` while the end node has its next node as `NULL`.

For this project the node structure used is:

```C
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

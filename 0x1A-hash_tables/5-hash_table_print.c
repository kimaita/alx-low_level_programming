#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Description: printing is in the order of occurence in the array
 * then the list and nothing is printed for a NULL ht
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long i = 0;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (tmp)
			{
				/* first node found*/
				tmp = ht->array[i];
				printf("'%s': '%s'", tmp->key, tmp->value);
				i++;
			}
			tmp = ht->array[i];
			while (tmp)
			{
				printf(", '%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("}\n");
}

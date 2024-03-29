#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array(of hash_node_t)
 *
 * Return: a pointer to the newly created hash table or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size > 0)
	{
		table = malloc(sizeof(hash_table_t));
		if (table == NULL)
			return (NULL);

		table->size = size;
		table->array = malloc(sizeof(hash_node_t) * size);
		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
		for (i = 0; i < table->size; i++)
			table->array[i] = NULL;

		return (table);
	}
	return (NULL);
}

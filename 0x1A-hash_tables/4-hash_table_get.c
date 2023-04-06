#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	idx = key_index((unsigned char *)key, ht->size);

	/* NULL hash table check*/
	if (!ht)
		return (NULL);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}

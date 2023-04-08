#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Description: `key` cannot be an empty string
 * value can be empty and has to be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	/* check if invalid key or table */
	if (!ht || key == NULL || key[0] == '\0')
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	/* create a node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = strdup(value);

	/* nothing at the index */
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
		node->next = NULL;
	}
	else
	{
		/* same key, update node*/
		if (!strcmp(key, ht->array[idx]->key))
		{
			free(ht->array[idx]->value);
			free(ht->array[idx]);
			ht->array[idx] = node;
		}
		/* different keys, add to beginning*/
		else
		{
			node->next = ht->array[idx];
			ht->array[idx] = node;
		}
	}
	return (1);
}

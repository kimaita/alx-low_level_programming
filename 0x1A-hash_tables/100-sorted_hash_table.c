#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table to create
 *
 * Return: pointer to the hash table or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	if (size > 0)
	{
		table = malloc(sizeof(shash_table_t));
		if (table == NULL)
			return (NULL);
		table->size = size;
		table->array = malloc(sizeof(shash_node_t) * size);
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

/**
 * shash_table_set - inserts a key/value pair into the hash table
 * @ht: hash table to insert into
 * @key: the key
 * @value: the value
 *
 * Return: 1(SUCCESS), 0(FAILURE)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	unsigned long int idx;

	if (!ht || key == NULL || key[0] == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = strdup(value);

	/* insert into list */
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
		node->next = NULL;
	}
	else
	{
		if (!strcmp(key, ht->array[idx]->key))
		{
			node->next = ht->array[idx]->next;
			free(ht->array[idx]->value);
			free(ht->array[idx]);
			ht->array[idx] = node;
		}
		else
		{
			node->next = ht->array[idx];
			ht->array[idx] = node;
		}
	}

	sorted_list_set(ht, node);
	return (1);
}

/**
 * sorted_list_set - inserts a node in the hash table's sorted linked list
 * @ht: the hash table
 * @node: the node
 *
 */
void sorted_list_set(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}
	if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead;
		node->snext->sprev = node;
		ht->shead = node;
		return;
	}

	tmp = ht->shead;
	while (tmp->snext)
	{
		if (strcmp(tmp->key, node->key) > 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev->snext = node;
			tmp->sprev = node;
			return;
		}
		tmp = tmp->snext;
	}
	if (strcmp(tmp->key, node->key) > 0)
	{
		node->snext = tmp;
		node->sprev = tmp->sprev;
		tmp->sprev->snext = node;
		tmp->sprev = node;
		return;
	}
	node->snext = NULL;
	node->sprev = tmp;
	tmp->snext = node;
	ht->stail = node;
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;

	/* invalid hash table or key check*/
	if (!ht || key == NULL || key[0] == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the hash table using the sorted linked list
 * @ht: the hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;

	printf("{");

	tmp = ht->shead;
	while (tmp->snext)
	{
		printf("'%s': '%s', ", tmp->key, tmp->value);
		tmp = tmp->snext;
	}
	printf("'%s': '%s'", tmp->key, tmp->value);

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the hash table using the sorted linked list
 * in reverse order
 * @ht: the hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;

	printf("{");

	tmp = ht->stail;
	while (tmp->sprev)
	{
		printf("'%s': '%s', ", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}
	printf("'%s': '%s'", tmp->key, tmp->value);
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{

			while (ht->array[i])
			{
				tmp = ht->array[i]->next;
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}

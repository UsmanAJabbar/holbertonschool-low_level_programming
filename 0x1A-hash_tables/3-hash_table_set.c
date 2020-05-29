#include "hash_tables.h"

/**
 * hash_table_set - adds an element
 * to the hash table.
 * @ht: hash table
 * @key: key to be inserted
 * @value: value to be inserted
 * Return: 0 on Failure | 1 on Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *oldhead, *search;

	if (!ht || !key || strcmp(key, "") == 0)
		return(0);

	index = key_index((unsigned char *)key, ht->size);
	for (search = ht->array[index]; search; search = search->next, index++)
		if (strcmp(search->key, key) == 0)
		{
			free(search->value);
			search->value = strdup(value);
			return (1);
		}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);

	/* CASE 1: If a singly linked list isn't there */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
	}

	/* CASE 2: If a singly linked list is there, make one */
	else
	{
		oldhead = ht->array[index];	/* Keep a copy of our current head */
		new->next = oldhead; 		/* Our new node should now point to old head */
		ht->array[index] = new; 	/* Make our new node the head */
	}
	return(1);
}

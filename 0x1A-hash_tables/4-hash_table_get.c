#include "hash_tables.h"

/**
 * hash_table_get - retrives the value
 * using the given key.
 * @ht: hash table
 * @key: key
 * Return: NULL on Fail | Value on Pass
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value = NULL;
	hash_node_t *search;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
		for (search = ht->array[index]; search; search = search->next)
			if (strcmp(search->key, key) == 0)
			{
					value = search->value;
					break;
			}

	return (value);
}

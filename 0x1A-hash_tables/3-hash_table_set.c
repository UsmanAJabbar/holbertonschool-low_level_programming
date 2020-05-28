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
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	char *dup_key = strdup(key);
	char *dup_value = strdup(value);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || new_node == NULL)
		return(0);

	new_node->key = dup_key;
	new_node->value = dup_value;

	ht->array[index] = new_node;

	return (1);
}

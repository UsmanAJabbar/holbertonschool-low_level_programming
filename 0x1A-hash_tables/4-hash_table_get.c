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
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	char *value = NULL;

	if (ht->array[index])
		value = ht->array[index]->value;

	return (value);
}

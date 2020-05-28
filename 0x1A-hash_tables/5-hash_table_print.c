#include "hash_tables.h"

/**
 * hash_table_print - prints out all
 * of the elements in the hash table
 * @ht: hash table
 * Return: Always Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;

	printf("{");
	for(index = 0; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
			continue;

		if (flag == 1)
			printf(", ");

		printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
		flag = 1;
	}
	printf("}\n");
}

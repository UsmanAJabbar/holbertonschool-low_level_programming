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
	hash_node_t *temp;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
			continue;

		if (ht->array[index])
			for (temp = ht->array[index]; temp; temp = temp->next)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value), flag = 1;
			}
	}
	printf("}\n");
}

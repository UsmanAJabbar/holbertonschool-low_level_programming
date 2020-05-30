#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size to create hash table with
 * Return: Returns the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));
	unsigned long int index;

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table->array), free(new_table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *oldhead, *search;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	for (search = ht->array[index]; search; search = search->next)
		if (strcmp(search->key, key) == 0)
		{
			free(search->value);
			search->value = strdup(value);
			return (1);
		}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	seeker(ht, ht->array[index]); /* Handles sPrev and sNext */

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
		new->next = oldhead;		/* Our new node should now point to old head */
		ht->array[index] = new;		/* Make our new node the head */
	}
	return (1);
}

void *seeker(shash_table_t *ht, shash_node_t *node)
{
	unsigned long int index;
	int i;
	shash_node_t *search;
	char *alpha[] = 
			{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", 
				"o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", NULL};

	for (i = 0; alpha[i] != NULL; i++)
	{
		index = key_index((unsigned char *)alpha, ht->size);
		for (search = ht->array[index]; search; search = search->next)
		{
			if (alpha[i][0] < search->key[0])
				node->sprev = search, node->snext = NULL;
			else
				node->snext = search, node->sprev = NULL;
		}
	}
/*	1) Seeker should be able to set the sprev and snext
	2) Seeker should go through the hash table, and look for
	   any character, and determine if that character appears
	   before "d" or after "d".
	3) If a character is found and is before d, the node/s node->sprev
	   should be set to that.
	4) Else, if character is found and is after d, thne node/s node->snext
       should be set to that. */
}

/**
 * shash_table_print - prints out all
 * of the elements in the hash table
 * @ht: hash table
 * Return: Always Void
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;
	shash_node_t *temp;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] == NULL)
				continue;

			if (ht->array[index])
				for (temp = ht->array[index]; temp; temp = temp->snext)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value), flag = 1;
				}
		}
		printf("}\n");
	}
}

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;
	shash_node_t *temp;

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
				/* Get to the end of the list */
				for (temp = ht->array[index]; temp; temp = temp->next)
						;
				for (; temp; temp = temp->sprev)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value), flag = 1;
				}
		}
		printf("}\n");
	}
}

int main(void)
{
	shash_table_t *ht = shash_table_create(1024);
	shash_table_set(ht, "y", "0");
	shash_table_print(ht);
	shash_table_set(ht, "j", "1");
	shash_table_set(ht, "b", "3");
	shash_table_set(ht, "c", "2");
	shash_table_print(ht);
	shash_table_print_rev(ht);
	return (0);
}

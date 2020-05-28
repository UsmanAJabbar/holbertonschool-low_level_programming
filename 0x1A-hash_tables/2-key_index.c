#include "hash_tables.h"

/**
 * key_index - generates an index
 * for the hash table to use
 * @key: key
 * @size: size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int lookup = hash_djb2(key) % size;

	return (lookup);
}

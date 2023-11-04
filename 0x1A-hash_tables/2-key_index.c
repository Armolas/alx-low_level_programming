#include "hash_tables.h"
/**
 * key_index - generates a key index
 * @key: the key string
 * @size: size of the hash table
 * Return: index of key/value pairs
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}

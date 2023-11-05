#include "hash_tables.h"
/**
 * hash_table_get - retrieves a key value
 * @ht: hash table
 * @key: key string
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
		return (NULL);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

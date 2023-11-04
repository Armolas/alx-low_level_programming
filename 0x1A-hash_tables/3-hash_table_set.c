#include "hash_tables.h"
/**
 * hash_table_set - adds an element to hash table
 * @ht: the hash table
 * @key; the key string
 * @value: the value string
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t)), *temp, *node;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	if(!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index], temp = ht->array[index];
	if (!node)
		ht->array[index] = new;
	else
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}


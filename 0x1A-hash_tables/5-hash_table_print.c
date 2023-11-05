#include "hash_tables.h"
/**
 * ht_len - returns the number of nodes in ht
 * @ht: hash table
 * Return: number of nodes
 */
int ht_len(const hash_table_t *ht)
{
	int len = 0;
	size_t i = 0;
	hash_node_t *node = NULL;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			len++;
			node = node->next;
		}
		i++;
	}
	return (len);
}
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *node = NULL;
	int len, count = 0;

	if (!ht)
		return;
	len = ht_len(ht);
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			count++;
			if (count < len)
				printf(", ");
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}

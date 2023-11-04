#include "hash_tables.h"
/**
 * hash_table_delete - deletes an hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *node, *temp;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

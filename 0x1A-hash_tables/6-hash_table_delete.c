#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
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
	}

	free(ht->array);
	free(ht);
}

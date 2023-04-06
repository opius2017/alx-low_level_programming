#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array to be created
 *
 * Return: a pointer to the newly created hash table, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int ht;

	
	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (ht = 0; ht < size; ht++)
	{
		hash_table_created->array[ht] = NULL;
	}

	return (hash_table_created);
}

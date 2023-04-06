#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array to be created
 * Return: a pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int i;

	/* allocate memory for the hash table structure */
	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	/* Allocate memory for array of hash nodes*/
	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_created->array[i] = NULL;
	}
	return (hash_table_created);
}

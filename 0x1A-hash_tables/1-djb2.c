#include "hash_tables.h"

/**
 * hash_djb2 - The hash function that implements the djb2 algorithm.
 * @str: The hash string.
 * Return: The hashed computation.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}

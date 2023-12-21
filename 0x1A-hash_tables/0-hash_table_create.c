#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *N;
	unsigned long int x;

	N = malloc(sizeof(hash_table_t));
	if (N == NULL)
		return (NULL);

	N->size = size;
	N->array = malloc(sizeof(hash_node_t *) * size);
	if (N->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		N->array[x] = NULL;

	return (N);
}

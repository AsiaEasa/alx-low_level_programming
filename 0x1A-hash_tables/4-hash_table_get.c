#include "hash_tables.h"

/**
 * hash_table_get - retrive a value from a key
 *
 * @ht: table to work from
 *
 * @key: to find the value, used as an index
 *
 * Return: value combined with key, NULL is key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *t;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	t = ht->array[ind];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
			return (t->value);
		t = t->next;
	}
	return (NULL);
}

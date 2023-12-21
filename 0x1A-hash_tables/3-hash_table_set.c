#include "hash_tables.h"

/**
 * make_new_h_Node - create a new hash node
 *
 * @key : key for the node
 *
 * @value: for the node
 *
 * Return: the new node, or NULL upon failure
 */

hash_node_t *make_new_h_Node(const char *key, const char *value)
{
	hash_node_t *N;

	N = malloc(sizeof(hash_node_t));
	if (N == NULL)
		return (NULL);
	N->key = strdup(key);
	if (N->key == NULL)
	{
		free(N);
		return (NULL);
	}
	N->value = strdup(value);
	if (N->value == NULL)
	{
		free(N->key);
		free(N);
		return (NULL);
	}
	N->next = NULL;
	return (N);
}

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: hash table to put elements into
 *
 * @key: key for the data
 *
 * @value: Data to be stored
 *
 * Return: 1 if successful, 0 Otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *t, *h_node;
	char *_new;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	t = ht->array[ind];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
		{
			_new = strdup(value);
			if (_new == NULL)
				return (0);
			free(t->value);
			t->value = _new;
			return (1);
		}
		t = t->next;
	}
	h_node = make_new_h_Node(key, value);
	if (h_node == NULL)
		return (0);
	h_node->next = ht->array[ind];
	ht->array[ind] = h_node;
	return (1);
}

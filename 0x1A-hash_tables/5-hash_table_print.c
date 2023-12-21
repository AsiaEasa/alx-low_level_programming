#include "hash_tables.h"

/**
 * hash_table_print - A function to print the hash table
 *
 * @ht: hashTable to be printed
 *
 * Return: Nothing (void)
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *t;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		t = ht->array[m];
		while (t != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", t->key, t->value);
			f = 1;
			t = t->next;
		}
	}
	printf("}\n");
}

#include "lists.h"

/**
 * print_dlistint - Prints all elements of ll
 *
 * @h: Head dlistint_t
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)

{
	int i = 0;

	for (; h ;)
	{
		i++;
		h = h->next;
	}

	return (i);
}

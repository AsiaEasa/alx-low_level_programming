#include <stdlib.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}


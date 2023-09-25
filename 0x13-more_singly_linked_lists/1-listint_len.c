#include <stdlib.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int x = 0;

	if (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}


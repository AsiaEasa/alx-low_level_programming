#include <stdio.h>
#include "list.h"

size_t print_listint(const listint_t *h)
{int l ;
	if (h==NULL)
		printf ("the list is empty");
	else
		printf ("%d\n",h->n);
	h=h->next ;
	l++:
}

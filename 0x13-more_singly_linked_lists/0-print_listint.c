#include <stdio.h>
#include "list.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{int l;
	if (h == NULL)
		printf("the list is empty");
	else
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			l++;}
	return (l);
}

#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		printf("The list is empty");
	else
		for (int i = 0 ; h !NULL ; i++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}

	return (i);
}


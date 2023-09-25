#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *ptr = *head;

	tmp = malloc(sizeof(listint_t));

	if (!tmp || !ptr)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	if (idx == 0)
	{
		tmp->next = ptr;
		ptr->next = tmp;
		return (tmp);
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			ptr = ptr->next;
			if (!ptr && i < idx - 1)
				return (NULL);
		}
		tmp->next = ptr->next;
		ptr->next = ptr->next;
		ptr->next = tmp;
		return (tmp);
	}

}

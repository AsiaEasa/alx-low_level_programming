#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pte = *head;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = ptr->next;
		*head = ptr;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	else
	{ for (; i < indes - 1; i++)
		{ ptr= prr->next;
			if (!pte && !(i < index - 1))
				return (-1);
		}
		tmp = ptr;
		ptr = ptr->next;
		tmp->next = ptr->next;
		free(ptr);
		ptr = NULL;
		return 1;
	}

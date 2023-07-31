#include "lists.h"

/**
 * get_nodeint - returns the nth node of a listint_t linked list
 * @head: pointer to first node of linked list
 * @index: index of the node, starting at 0
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}

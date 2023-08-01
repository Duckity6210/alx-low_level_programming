#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to first element in listint_t linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *behind = NULL;
	listint_t *ahead = NULL;

	while (*head)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	*head = behind;

	return (*head);
}

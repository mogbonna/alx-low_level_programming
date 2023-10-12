#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the doubly linked list
 * return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}

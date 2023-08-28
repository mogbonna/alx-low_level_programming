#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given
 * position in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: New integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, returns NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (m = 0; current && m < idx; m++)
	{
		if (m == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
	}

	return (NULL);
}

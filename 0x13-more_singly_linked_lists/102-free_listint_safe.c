#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int m;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		m = *h - (*h)->next;
		if (m > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}

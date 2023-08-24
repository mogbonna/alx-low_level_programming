#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h[0].str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h[0].len, h[0].str);
		}
		h = h->next;
		count++;
	}
	return (count);
}

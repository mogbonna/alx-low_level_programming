#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elements on a newl
 * @array: array
 * @size: The number of elem to print
 * @action: print  pointer in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The unsigned long int from which to get the bit
 * @index: The index of the bit to be retrieved
 * Return: The value of the bit at the specified index
 * or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}

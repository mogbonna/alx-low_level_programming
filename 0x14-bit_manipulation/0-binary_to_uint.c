#include "main.h"

/**
 * binary_to_uint - Converts a binary number string to an unsigned integer
 * @b: Pointer to a string of 0 and 1 chars
 * Return: The converted number, or 0 if invalid input
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		result = 2 * result + (b[m] - '0');
	}

	return (result);
}

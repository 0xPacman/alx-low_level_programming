#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: unsigned long int.
 * @index: unsigned int index.
 *
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}

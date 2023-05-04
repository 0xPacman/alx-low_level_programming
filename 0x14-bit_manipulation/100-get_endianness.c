#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 for little endian, 0 for big endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}

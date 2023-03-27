#include "main.h"

/**
 * swap_int - swaps value
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

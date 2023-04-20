#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: int *
 * @size: int
 * @cmp: pointer to the comparing function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

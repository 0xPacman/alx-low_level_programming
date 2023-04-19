#include "main.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: int *
 * @size: size_t
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

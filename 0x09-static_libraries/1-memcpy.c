#include "main.h"

/**
 *_memcpy - copy number bytes form address src to address dest
 * @dest: char *
 * @src: char *
 * @n: unsigned int
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

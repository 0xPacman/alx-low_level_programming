#include "main.h"

/**
 * rev_string - reverse string
 * @s: char *
 */
void rev_string(char *s)
{
	int i, size, half;
	char first, last;

	i = 0;
	while (s[i])
	{
		i++;
	}
	size = i - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;
		half--;
	}
}

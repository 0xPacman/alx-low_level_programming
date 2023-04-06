#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: char *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, sum = 0, sign = 1, m = 1, i;

	while (*(s + count))
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			sign *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		sum = sum + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (sum * sign);
}

#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: char
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	char lowercase = 'a';
	int islower = 0;

	while (lowercase <= 'z')
	{
		if (c == lowercase)
		{
			islower = 1;
			break;
		}
		lowercase++;
	}
	return (islower);
}

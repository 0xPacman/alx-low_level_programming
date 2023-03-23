#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: char
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	while (uppercase <= 'Z')
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
		uppercase++;
	}
	return (isupper);
}

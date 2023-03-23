#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: char
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	
	int isupper;
	for (isupper = 0; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
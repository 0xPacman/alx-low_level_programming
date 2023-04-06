#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: char
 * Return: 1 if c is alpha
 */
int _isalpha(int c)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int isalpha = 0;

	while (lowercase <= 'z')
	{
		if (c == lowercase)
		{
			isalpha = 1;
			break;
		}
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		if (c == uppercase)
		{
			isalpha = 1;
			break;
		}
		uppercase++;
	}
	return (isalpha);
}

#include "main.h"

/**
 * _isalpha - Check if character is a alphabet character.
 * @n: char
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
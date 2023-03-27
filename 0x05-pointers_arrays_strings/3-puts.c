#include "main.h"

/**
 * _puts - pusts to stdout
 * @str: char *
 */
 
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
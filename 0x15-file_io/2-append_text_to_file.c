#include "main.h"

/**
  * _strlen - length of a string
  * @s: char *
  * Return: int
**/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
* append_text_to_file - appends text at the end of a file.
* @filename: const char *
* @text_content: char *
* Return: int.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t nletters;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nletters = write(file, text_content, _strlen(text_content));
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

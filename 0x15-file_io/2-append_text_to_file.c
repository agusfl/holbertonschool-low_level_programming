#include "main.h"

/**
 * _strlen - find the length of a string
 * @str: string to find length
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename for text to be append
 * @text_content: NULL terminated string to append to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_var;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_var = write(fd, text_content, _strlen(text_content));
	if (write_var == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

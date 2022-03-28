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
 * create_file - creates a file
 * @filename: the filename to create
 * @text_content: NULL terminated string to write to the file
 * Return:1 if success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_var;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

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
	if (write_var == -1 || write_var != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

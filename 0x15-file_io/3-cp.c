#include "main.h"

/**
 * main - Entry point for function that copies the content of a file to
 * another file
 * @argc: argument counter
 * @argv: argument vector (pointer to arrays)
 * Return: 0 if succed
 */

int main(int argc, char *argv[])
{
	int file_from = 0, file_to = 0;
	int read_var = 0, write_var = 0, close_var = 0;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_var = read(file_from, buffer, 1024);
	while (read_var != 0)
	{
		read_var = read(file_from, buffer, 1024);
		if (read_var == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}
		write_var = write(file_to, buffer, read_var);
		if (write_var == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_var = close(file_from);
	if (close_var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_var = close(file_to);
	if (close_var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}


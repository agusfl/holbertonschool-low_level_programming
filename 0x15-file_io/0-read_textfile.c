#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_var;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	read_count = read(fd, buff, letters);
	if (read_count == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	write_var = write(0, buff, read_count);

	close(fd);
	free(buff);
	if (read_count != write_var)
		return (0);
	return (read_count);
}

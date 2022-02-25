#include "main.h"
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int count_argc, count_argv, sum = 0;

	for (count_argc = 1; count_argc < argc; count_argc++)
	{
		for (count_argv = 0; argv[count_argc][count_argv] != '\0' ; count_argv++)
		{
			if (!isdigit(argv[count_argc][count_argv]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[count_argc]);
	}
	printf("%d\n", sum);
	return (0);
}

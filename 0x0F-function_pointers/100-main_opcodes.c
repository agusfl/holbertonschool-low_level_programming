#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the opcodes of its own main function
 *@argc: argument count
 *@argv: argument vector
 *Return: opcodes
 **/

int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < n)
	{
		printf("%02x", *((unsigned char *)main + i));

		i++;

		if (n > i)
			printf(" ");
	}

	printf("\n");

	return (0);
}

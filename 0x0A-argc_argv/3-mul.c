#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int mult, num1, num2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}

#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: Zero
 */

int main(void)
{
	long int n1, n2, n3;
	int i;

	n1 = 1;
	n2 = 2;
	n3 = 0;

	printf("1, 2, ");
	for (i = 0; i < 47; i++)
	{
		n3 = n1 + n2;
		printf("%ld ,", n3);
		n1 = n2;
		n2 = n3;
	}
	n3 = n1 + n2;
	printf("%ld\n", n3);
	return (0);
}


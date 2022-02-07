#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: Zero
 */

int main(void)
{
	int n1, n2, n3, i;

	n1 = 0;
	n2 = 1;

	printf("%d, %d ,", n1, n2);
	for (i = 2; i < 50; i++)
	{
		n3 = n1 + n2;
		printf("%d ,", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}


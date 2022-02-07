#include <stdio.h>
/**
 * main - sum of multiples for 3 or 5
 * Return: Zero
 */

int main(void)
{
	int i;
	int suma = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			suma = suma + i;
		}
	}
	printf("%d\n", suma);
	return (0);
}

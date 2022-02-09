#include <stdio.h>
/**
 * main - print numbers from 1 to 100.
 * Return: numbers in range 1-100 with Fizz instead of 3 and Buzz instead of 5
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
			printf(" ");
	}
	printf("\n");
	return (0);
}

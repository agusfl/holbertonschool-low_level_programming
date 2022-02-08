#include <stdio.h>
/**
 * main - This is a fibonacci function
 * Return: Zero
 */

int main(void)
{
	int a = 0, b = 1, c, sumeven = 0;

	while (b < 4000000)
	{
	c = a + b;
	a = b;
	b = c;

	if (b % 2 == 0) /*Siempre que sea resto cero significa que es un numero par */
	{
	sumeven += b;
	}
}
	printf("%d\n", sumeven);
	return (0);
}

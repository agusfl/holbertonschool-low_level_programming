#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int d, j;

	for (d = 0; d <= 9; d++)
	{
	for (j = (d + 1); j <= 9; j++)
	{
	putchar(d + '0');
	putchar(j + '0');
	if (d != 8 || j != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

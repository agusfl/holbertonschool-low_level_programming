#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar(d + '0');
		if (d != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}

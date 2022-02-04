#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int d, j, k;

	for (d = 0; d <= 9; d++)
	{
		for (j = (d + 1); j <= 9; j++)
		{
			for (k = (j + 1); k <= 9; k++)
			{
				putchar(d + '0');
				putchar(j + '0');
				putchar(k + '0');
					if (d != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

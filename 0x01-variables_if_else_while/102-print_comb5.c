#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int d, j, k, s;

		for (d = 0; d <= 9; d++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = d; k <= 9; k++)
				{
					for (s = j + 1; s <= 9; s++)
					{
					putchar(d + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(s + '0');
					if (!((d == 9 && j == 8) && (k == 9 && s == 9)))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
		putchar('\n');
		return (0);
}

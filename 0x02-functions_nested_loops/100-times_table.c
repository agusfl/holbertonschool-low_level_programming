#include "main.h"

/**
 * print_times_table - print n times table startin with 0
 * @n: integer
 */

void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = (row * col);
				if (col == 0)
					_putchar('0' + prod);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + prod);
					}
					else if (prod > 9 && prod < 100)
					{
						_putchar(' ');
						_putchar('0' + (prod / 10));
						_putchar('0' + (prod % 10));
					}
					else if (prod >= 100)
					{
						_putchar('0' + (prod / 100));
						_putchar('0' + ((prod / 10) % 10));
						_putchar('0' + (prod % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}

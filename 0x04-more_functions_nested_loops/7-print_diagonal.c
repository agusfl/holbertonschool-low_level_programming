#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of caracters to print on the terminal
 */

void print_diagonal(int n)
{
	int largo;
	int blank;

	if (n >= 1)
	{
		for (largo = 0; largo < n; largo++)
		{
			for (blank = 0; blank < largo; blank++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

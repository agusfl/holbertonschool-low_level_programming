#include "main.h"

/**
 * print_square - checks for lowercase character
 * @size: square size
 * Return: square
 */

void print_square(int size)
{
	int row;
	int column;

	if (size >= 1)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

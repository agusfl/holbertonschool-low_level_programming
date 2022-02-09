#include "main.h"

/**
 * print_line - checks for lowercase character
 * @n: character to check
 * Return: n lines _
 */

void print_line(int n)
{
	int largo;

	if (n >= 1)
	{
		for (largo = 0; largo <= n; largo++)
		_putchar('_');
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}

#include "main.h"

/**
 * print_sign - checks for lowercase character
 * @n: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
		return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
	_putchar('\n');
}

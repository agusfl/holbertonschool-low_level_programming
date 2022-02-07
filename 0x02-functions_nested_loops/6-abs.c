#include "main.h"

/**
 * _abs - checks for lowercase character
 * @n: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
	_putchar('\n');
}

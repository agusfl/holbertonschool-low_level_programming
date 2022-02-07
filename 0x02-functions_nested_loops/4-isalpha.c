#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

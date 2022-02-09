#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 0 if lowercase, 1 if uppercase
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

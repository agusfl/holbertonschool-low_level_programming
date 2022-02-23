#include "main.h"

/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: string
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else if (*s != '\0')
	{
		s++;
		_putchar('\n');
	}
	return (void);
}

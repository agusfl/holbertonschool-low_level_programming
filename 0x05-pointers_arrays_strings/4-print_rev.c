#include "main.h"

/**
 * print_rev - print the reverse string
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int rev = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (rev = i - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}

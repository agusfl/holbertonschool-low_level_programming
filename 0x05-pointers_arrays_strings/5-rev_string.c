#include "main.h"

/**
 * rev_string - print the reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
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

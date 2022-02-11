#include "main.h"

/**
 * puts_half - print the second half
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int print = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	n = i / 2;
	else
	n = (n - 1) / 2;

	for (print = n; print < i; print++)
	{
		_putchar(str[print]);
	}
	_putchar('\n');
}

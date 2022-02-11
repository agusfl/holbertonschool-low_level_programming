#include "main.h"

/**
 * puts2 - print every other character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int x2 = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x2 = 0; x2 < i; x2+=2)
	{
		_putchar(str[x2]);
	}
	_putchar('\n');
}

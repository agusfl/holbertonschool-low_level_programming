#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i;
	int x10;

	for (x10 = 0; x10 < 11; x10++)
	{
	for (i = 0; i < 15; i++)
	{
	if (i > 9)
		_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}

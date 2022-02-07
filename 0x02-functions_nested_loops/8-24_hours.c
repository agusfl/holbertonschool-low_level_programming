#include "main.h"

/**
 * print_last_digit - checks for lowercase character
 * @n: character to check
 * Return: comment
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 60; m++)
		{
			putchar(h + m);
		}
	}
	return (0);
}

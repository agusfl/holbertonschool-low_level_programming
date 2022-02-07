#include "main.h"

/**
 * print_last_digit - checks for lowercase character
 * @n: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
	{
	_putchar(ld*-1);
	}
	else 
	{
	_putchar(ld);
	}
	_putchar('\n');
}

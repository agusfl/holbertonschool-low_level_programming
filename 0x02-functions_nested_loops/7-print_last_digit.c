#include "main.h"

/**
 * print_last_digit - checks for lowercase character
 * @n: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = *-1;

	_putchar('0' + (n % 10));

	return (n % 10);
}

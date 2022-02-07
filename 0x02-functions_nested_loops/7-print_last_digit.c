#include "main.h"

/**
 * print_last_digit - checks for lowercase character
 * @n: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar('0' + ld);

	return (ld);
}

#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number in decimal to be printed in binary
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
	/**
	 * El n que nos pasen se toma en binario para trabajr con los bitwise
	 * operators, se usa recursion para ir imprimiendo el numero decimal
	 * en binario.
	 */
}

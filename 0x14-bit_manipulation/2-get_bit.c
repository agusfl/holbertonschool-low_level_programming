#include "main.h"

/**
 * get_bit - get value of a bit at given index
 * @n: number
 * @index: index within binary number of n
 * Return: bit 0 or 1, or -1 in case of error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
	/* arquitectura de 64 bit, si el index es mayor es un error*/
	{
		return (-1);
	}
	bit = ((n >> index) & 1);
	/* Hacemos right shift al index correspondiente */

	return (bit);
}

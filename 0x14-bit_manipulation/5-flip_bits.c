#include "main.h"

/**
 * flip_bits - count the number of bits you would need to flip to get from one
 * number to another.
 * @n: first number to compare
 * @m: second number to compare
 * Return: number of bits you would need to flip
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_comp;
	unsigned int bits_flip;

	bits_flip = 0;

	num_comp = n ^ m;/* compare numbers */

	while (num_comp != 0)
	{
		bits_flip += num_comp & 1;
		num_comp = num_comp >> 1;
	}
	return (bits_flip);
}

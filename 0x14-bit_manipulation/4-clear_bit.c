#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index.
 * @n: pointer of type unsigned long int.
 * @index: index of the bit to modify.
 * Return: 1 if it worked, -1 if an erorr occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int left_shift;

	if (index > 64)
	{
		return (-1);
	}

	left_shift = 1 << index;

	if (*n & left_shift)
	{
		*n ^= left_shift;
	}

	return (1);
	/**
	 * Idem ej anterior solo que en lugar de setear la posicion que
	 * nos pasan con index en 1 hay que setearla en 0.
	 * Usamos el bitwise operator & en lugar de | y el operador ^ para
	 * indicar que los dos bits son diferentes.
	 */
}

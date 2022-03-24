#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index.
 * @n: pointer of type unsigned long int.
 * @index: index of the bit to modify.
 * Return: 1 if it worked, -1 if an erorr occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int left_shift;

	if (index > 64)
	{
		return (-1);
	}

	left_shift = 1 << index;
	*n = (*n | left_shift);

	return (1);
	/**
	 * En este caso lo que se quiere hacer es ir a la posicion que nos
	 * pasen con el "index" y modificar dicha posicion del numero en
	 * binario por 1, por eso es que accedemos con el puntero a dicha
	 * posicion.
	 */
}

#include "main.h"

/**
 * print_square - checks for lowercase character
 * @size: square size
 * Return: square
 */

void print_square(int size)
{
	int row;
	int column;

	if (size >= 1)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			if (row == size - 1)
				continue;/**el continue lo que hace es saltear el ciclo del for
					   *en la ultima fila del cuadrado
					   *osea en la fila 10 si el size es 10 saltea
					   *el espacio y pasa al proximo cuadrado que le pasen
					   */
			_putchar('\n');
		}
	}
	_putchar('\n');
}

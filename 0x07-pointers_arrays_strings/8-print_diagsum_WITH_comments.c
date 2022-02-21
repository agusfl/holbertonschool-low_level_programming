#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of two diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int first_diagonal_sum = 0;
	int second_diagonal_sum = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		first_diagonal_sum += a[i];
	}
/**
 * suma de la primer diagonal, se crea una variable "i" en la cual se
 * multiplica fila por tamano de la matrix y a eso se le suma la fila
 * despues se va almacenando la suma en la variable "first_diagonal_sum"
 * usando a[i] para indicar la posicion que se tiene que ir dentro de la
 * matrix. Ejemlpo en el primero caso i = (0 * 3) + 0 = 0, por lo tanto se va
 * a la posicion 0 dentro del array que es el numero 0 justo, en el porximo
 * caso seria: i = (1 * 3) + 1 = 4 que seria el numero de la posicion 4 -> 11,
 * y asi sucesivamente hasta que no se cumple la condicion del for 3 < 3 no lo
 * es y por lo tanto se sale del loop.
 */
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		second_diagonal_sum += a[i];
	}
/**
 * Aca es similar al for de arriba pero calculado de otra forma para que se
 * obtenga la suma de la segunda diagonal (lado opuesto a la primera diagonal).
 */

	printf("%d, %d\n", first_diagonal_sum, second_diagonal_sum);

}

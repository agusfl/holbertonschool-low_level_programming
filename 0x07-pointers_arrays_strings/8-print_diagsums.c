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

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		second_diagonal_sum += a[i];
	}

	printf("%d, %d\n", first_diagonal_sum, second_diagonal_sum);

}

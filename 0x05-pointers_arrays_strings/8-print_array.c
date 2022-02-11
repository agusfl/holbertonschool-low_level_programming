#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: array
 * @n: numbers of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		/**
		 * hago un if y un else para que se ponga una coma y espacio
		 * en todos los numeros que tenga el array menos en el ultimo
		 */
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

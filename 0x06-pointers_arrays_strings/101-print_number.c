#include "main.h"

/**
 * print_number - print a integer
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int dec, count, i;
	/**
	 * declaramos a "dec", "i" y "count" como unsigned int
	 * para tener mas espacio en memoria.
	 * "dec" seria por: decremento y "count"
	 * por contador para ver las posiciones.
	 */

	if (n < 0)
	/**
	 * si es negativo, le imprimimos el signo de negativo con el putchar
	 * y pasamos i a positivo para quedarnos con el numero que nos pasan
	 * en positivo para lo que sigue del codigo.
	 */
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;
	/**
	 * si el valor es positivo que imprima el mismo valor, pasamos "i" a
	 * "n" para tener mas espacio en memoria por si el "n" que nos pasan
	 * es muy grande.
	 */
	dec = i;
	count = 1;
	while (dec > 9)
	{
		dec /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
		_putchar(((i / count) % 10) + '0');
}

#include "main.h"

/**
 * print_number - print a integer
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int un, count, i;
	/**
	 * declaramos a "un" como unsigned int
	 * para tener mas espacio en memoria.
	 */

	if (n < 0)
	/**
	 * si es negativo, le imprimimos el signo de negativo
	 * y pasamos i a negativo.
	 */
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;
	/* si el valor es positivo que imprima el mismo valor*/

	un = i;
	/**
	 * declaramos un como i, esto es para tener una variable con
	 * mas espacio.
	 */
	count = 1; /* declaramos a count como mayor a cero */

	while (un > 9)
	/**
	 * se pone mayor a 9 ya que ya se analizaron los casos de 1 digito
	 * por lo tanto ahora se analizan los casos de 2 digitos o mas.
	 */
	{
		un /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
		_putchar(((i / count) % 10) + '0');
}

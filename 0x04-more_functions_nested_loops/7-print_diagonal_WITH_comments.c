#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: numbers to print in a diagonla way
 */

void print_diagonal(int n)
{
	int largo;
	int blank;

	if (n >= 1)
	{
	/* Si el numero "n" que nos pasan es mayor que 0 ya que nos piden que se imprima
	 * siempre y cuando n sea mayor a cero, si 'n' es menor a cero o igual a cero se tiene
	 * que imprimir un salto de linea. */
		for (largo = 0; largo < n; largo++)
		{
	/* El primer for es para las lineas que tenemos que imprimir, ejemplo si nos pasan un 'n' de
	 * 2 vamos a tener que imprimir dos lineas la primera con una \ y la segunda con un espacio y luego
	 * la \. */
			for (blank = 0; blank < largo; blank++)
			{
				_putchar(' ');
			/* Este for se hace para imprimir los espacios en cada linea, se van a tener que
			 * imprimir espacios siempre que nuestra variable creada "blank" sea menor a "largo". */
			}
		_putchar('\\'); /* Con este _putchar indicamos que se imprima el caracter que nos piden: \ (hay que
				   poner dos ya que el primer backslash escapa al segundo y hace que lo imprima en
				   pantalla). */
		_putchar('\n'); /* Aca se hace el salto de linea para que se impriman todas las lineas en filas
				   separadas. */
		}
	}
	else
	{
	_putchar('\n');
	/* En caso que n no sea mayor o igual a 1 imprimimos el salto de linea tal cual nos piden en
	 * la letra. */
	}
}

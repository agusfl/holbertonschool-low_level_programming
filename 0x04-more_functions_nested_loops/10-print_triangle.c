#include "main.h"

/**
 * print_triangle - checks for lowercase character
 * @size: character to check
 * Return: triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++) /** inicializo i en 1 para que tome
					      * solo los size mayor a cero
					      */
		{
			for (j = 0; j < (size - i); j++) /**
							   * size - 1 nos devuelve los espacions vacios
							   * ya que nos dice dependiendo en la fila en la que
							   * estamos que el largo de espacios para que quede
							   * un triangulo hacia la derecha va a ser el size
							   * que se le establezca al triangulo menos la fila (i)
							   * en la que se este
							   */
				_putchar(' ');
			for (j = 0; j < i; j++) /** Con este for se ponen los # ya que despues de
						  * haber puesto los
						  * espacios en blanco, siempre que j sea menor a i, voy a querer
						  * poner los # para formar el triangulo.
						  */
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n'); /** si size es 0 o negativo se imprime un
				  * salto de linea tal y como pedian
				  */
}

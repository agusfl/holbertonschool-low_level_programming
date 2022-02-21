#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int fila;
	int columna;

	for (fila = 0; fila < 8; fila++)
	{
		for (columna = 0; columna < 8; columna++)
			_putchar(a[fila][columna]);
		_putchar('\n');
	}
}
/**
Se crea una variable fila y otra variable columna, se hace un for que vaya
recorriendo todas las filas mientras que sea menor a 8 ya que el tablero de aljedrez tiene
8 filas y 8 columnas, despues se hace otro for para que recorra todas las columnas dentro de las filas
Se pone un putchar para que imprima usando el 2 dimensional array segun la posicion en la que se encuentra
cada caracter que nos indiquen, por lo tanto va a arrancar imprimiendo a[0][0] ahi va a imprimir el primer
caracter que este en el indice 00 del array, y asi sucesivamente hasta imprimir todas las columnas dentro de cada fila.
*/


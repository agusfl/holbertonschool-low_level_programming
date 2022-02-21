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

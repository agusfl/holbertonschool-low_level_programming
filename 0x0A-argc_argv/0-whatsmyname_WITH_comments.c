#include "main.h"

/**
 * main - prints a name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

/**
 * En este programa estamos usando command line arguments para la funcion main
 * argc es: argument count y argv es: argument vector (es un puntero de strings
 * en este caso), el largo del vector argv va a ser el mismo largo que indique
 * el "argc". Se pone return 0 porque indicamos que era una funcion de tipo int
 * y en ese caso retorna 0 si el codigo se ejecuta correctamente.
 * Este programa sirve para imprimir en pantalla el nombre que se le ponga al
 * programa, el nombre se pasa como argumento al momento de compilar el
 * programa. Con el argv[0] indico que se imprima lo que esta en la posicon
 * que siempre va a ser el nombre del programa que le pongas. El argc > 0 se
 * indica para que imprima cuando haya por lo menos un argumento, pero se
 * podria hacer sin el if con el argc > 0, indicando que imprima siempre el
 * argv [0].
 */

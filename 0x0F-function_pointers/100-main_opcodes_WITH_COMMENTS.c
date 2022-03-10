#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the opcodes of its own main function
 *@argc: argument count
 *@argv: argument vector
 *Return: opcodes
 **/

int main(int argc, char *argv[])
{
	int i, n;
	/**
	 * Declaro una variable 'i' para usar como contador y otra 'n' para
	 * usar como numero para parsear el argv, padra pasarlo de string a int (voy a usar atoi).
	 */

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/**
	 * Aca defino la primer condicion que nos indican para que imprima: Error y salga con un
	 * exit de 1. En este caso va a ser cuando el argument count sea distinto de 2, ya que solo
	 * puede tener dos argumentos, uno seria el nombre del programa y otro el numero de bytes
	 * que se quiera imprmir (la cantidad de opcode).
	 */

	n = atoi(argv[1]); 
	/* Igualo la variable creada 'n' (de number) a el argv[1] parseado con atoi para que sea un int */

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/**
	 * En esta parte se indica la segunda condicion, en caso que el numero de bytes que se indique para
	 * imprimir sea negativo, definimos que imprima: Error y salga con un exit de 2.
	 */

	while (i < n)
	{
		printf("%02x", *((unsigned char *)main + i));

		i++;

		if (n > i)
			printf(" ");
	/**
	 * Se hace un while que se recorra siempre que 'i' (el contador que habiamos definido) sea menor
	 * a 'n' (el numero de bytes que se quiera imprimir). Se le indica con el printf que imprima en
	 * hexadecimal y minuscula y con un largo de 2 por cada impresion (como dice la letra: "each opcode
	 * is two char long") esto es con --> %02x. En el printf se le dice que imprima la fucntion pointer
	 * main declarada como tipo: 'unsigned char' para que tenga mas espacio para los numeros grandes y
	 * ya sabemos que no hay que imprimir negativos ya que sale con error si nos pasan un negativo. Se
	 * hace un puntero que va recorriendo las posiciones de 'i' e imprimiendo siempre que se cumplan las
	 * condiciones del while y el if siguiente.
	 * En el siguiente if se hace para imprimir el espacio despues de cada numero, se hace esto para que no
	 * se imprima un espacio al final del ultimo numero que se imprima.
	 */
	}

	printf("\n"); /*Aca se imprime el salto de linea que nos piden que tenga al final*/

	return (0);
}

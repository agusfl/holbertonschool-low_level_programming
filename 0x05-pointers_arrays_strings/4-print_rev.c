#include "main.h"

/**
 * print_rev - print the reverse string
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int rev = 0;

	while (s[i] != '\0') /**
			       *se crea un puntero de tipo char para la variable s
			       *es un array que va aumentando hasta llegar a '\0'
			       *que es el ultimo caracter que se agrega automaticamente
			       *cuandos e hace un string.
			       */
	{
		i++;
	}
	for (rev = i - 1; rev >= 0; rev--) /**
					     *aca le resto 1 a i para empezar por el final del string
					     *por eso la ultima condicion va en decremento --
					     *en el putchar le ponemos s[rev] para que imprima
					     *caracter por caracter y la condicion es
					     *mayor igual a 0 ya que arrancamos por la ultima
					     *posicion del string y no por la primera
					     */
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}

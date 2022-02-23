#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	/**
	 * Aca lo que se hace es ir apilando en el stack las letras del string
	 * con cada incremento por el s + 1 y se apila todo hasta que s es
	 * distinto de null, una vez que esta todo apilado hasta que se llego
	 * al final del string se empieza a imprimir por el ultimo valor
	 * apilado ya que el stack se apila con el criterio "LIFO" (Last
	 * In First Out). Aca tenemos el putchar despues del incremento
	 * por eso es que se apila todo hasta que llega al caracter null.
	 */
}

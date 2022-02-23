#include "main.h"

/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: string
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	/**
	 * Aca se chequea que el puntero de "s" no sea null
	 * ,osea que no pasaron ningun string o ya no hay ninguna letra para
	 * imprimir. En caso de que sea null se imprime un salto de linea.
	 * Se pone un "return" solo para que salga de la fucion cuando se
	 * cumpla que se llego al caracter null, si no se pusiera el return
	 * quedaria en un "loop infinito" porque nunca saldria.
	 */
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	/**
	 * En el else se indica que se imprima el puntero de "s" y una vez
	 * que se esta en la posicion 0 que es distinta de null se imprime el
	 * caracter, despues se vuelve a llamar a nuestra funcion puts rec
	 * pero sumandole 1 para que pase a la proxima posicion y vuelve a
	 * chequear que sea distinto de null y en caso que sea distinta vuelve
	 * a imprimir. Cuando se llega al caso de que la ultima posicion es
	 * null se queda en el primer if e imprime un salto de linea.
	 */
}

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
	/**
	 * Aca lo que se hace es que se capturan los resultados en el "return"
	 * y se va sumando en base a lo que diga el return, por eso le ponemos
	 * 1, cada vez que se pasa una posicion se caputra un 1 y se va sumando
	 * en el return, entonces cuando se va pasando de posicion suma de a 1
	 * y como pasa 14 veces de posicion (porque el string tiene 14
	 * caracteres) suma 14, si le pusieramos 2 en lugar de 1 al return
	 * osea 2 + _strlen_recursion (s + 1) daria 28 ya que cada vez que
	 * pasa de posicion el _strlen_recursion en el return se va a sumar
	 * de a 2 y cuando se llega a que s = al caracter null se va a poner
	 * un return 0 y no suma nada porque es cero (si le pusieramos otro
	 * valor como ser 10, sumaria esos 10 y quedaria en 24 en lugar de
	 * 14).
	 */
}

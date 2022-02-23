#include "main.h"

/**
 * factorial - returns the length of a string
 * @n: number
 * Return: factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
	/**
	 * En esta funcion recursiva indicamos que si n es menor a cero que
	 * retrone -1 para saber que hubo un error, despues le decimos que
	 * si n es igual a cero que retorne 1 y despues le indicamos que haga
	 * el factorial del numero que nos pasen, en caso de que sea 5 por
	 * ejemplo seria: 5*(5-1) en la primer recorrida y despues seria:
	 * 4*(4-1) + 3*(3-1) + 2*(2-1) + 1*(1-1) y llega al caso que n es
	 * igual a cero y entonces retorna un 1, si se hacen todas las sumas te
	 * queda 120.
	 */
}

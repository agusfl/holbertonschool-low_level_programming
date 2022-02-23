#include "main.h"

/**
 * search_root - search for square root of n, starting from the lowest
 * possible value (0)
 * @n: number to search squere root
 * @root: test this root starting from 0
 * Return: natural square root, or -1 if not natural root
 */

int search_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	/**
	 * Aca lo que se esta indicando es que si root * root (siendo root la variable
	 * con la que vamos probando arrancando desde el cero para ver si es la raiz cuadrada
	 * del numero "n"que nos pasen) es menor a n por lo tanto no se tiene una raiz natural (que el numero
	 * no termine con coma), esto hay que hacerlo porque una de las condiciones que te indican
	 * es que si "n" no tiene una raiz cuadrada natural que te devuelva -1.
	 */

	if (root * root == n)
		return (root);
	/**
	 * En esta parte se evalua que se haya llegado a la raiz cuadrada correcta ya que
	 * la raiz cuadrada de un numero es el propio numero multiplicado por si mismo, en
	 * este caso seria: root * root.
	 */

	return (search_root(n, root + 1));
	/**
	 * Aca es donde le indicamos que con recursividad (ya que volvemos a llamar a la
	 * funcion search_root una y otra vez) vaya incrementando root de a uno.
	 */
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: number to search squere root
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	/**
	 * Esto es parte de las condiciones que nos da la letra, ya que nos dice que si
	 * n es menor a cero que retornemos -1.
	 */

	return (search_root(n, 0));
	/**
	 * Aca llamamos a la funcion que creamos arriba y le decimos que empiece a probar desde cero.
	 */
}

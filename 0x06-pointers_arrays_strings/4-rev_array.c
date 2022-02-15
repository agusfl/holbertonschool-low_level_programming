#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{

	int tmp, inicio = 0;
	int fin = n - 1;

	while (inicio < fin)
	{
		tmp = *(a + inicio);
		*(a + inicio) = *(a + fin);
		*(a + fin) = tmp;
		inicio++, fin--;

		/**
		 * el primer tmp iguala al puntero de a y la posicion en
		 * la que se encuentra, por eso (a * inicio) seria
		 * posicion cero del array a en la primer iteracion
		 * posicion 1 del array a en la segunda iteracion y asi
		 * sucesivamente hasta que se cumpla la condicion de que
		 * inicio es menor a fin que es la cantidad de elemenots
		 * del array menos 1 para ir a la ultima posicion.
		 **/
	}
}

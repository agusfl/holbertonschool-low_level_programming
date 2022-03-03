#include "main.h"
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: min value of the array
 * @max: max value of the array
 * Return: pointer to the array or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0, len;

	if (min > max)/*dato de letra*/
	{
		return (NULL);
	}
	len = max - min + 1;
	/**
	 * El largo del array va a ser: el maximo menos el minimo + 1
	 */
	arr = malloc(sizeof(int) * len);
	/**
	 * Se reserva en memoria con malloc espacio para tipo int por el largo
	 * del array que se pase.
	 */
	if (arr == NULL)/*if malloc fails retunr null*/
	{
		return (NULL);
	}
	for (i = min; i < len; i++)
	{
		arr[i] = i;
	}
	/**
	 * En el for le indico que recorra desde el minimo seteando i en min
	 * hasta el len (largo del array), con la condicion de i menor a max,
	 * que vaya incrementando de a uno y dentro del for le indico que en
	 * la posicion a[i] (arranca en min) le vaya asignando i (que tmb
	 * arrancaria en min ya que lo sete de esa forma con i = min).
	 */
	return (arr);
	/**
	 * No uso el metodo 'free' porque lo pusieron en el main y si lo pones
	 * mas de una vez puede ocacionar errores.
	 */
}

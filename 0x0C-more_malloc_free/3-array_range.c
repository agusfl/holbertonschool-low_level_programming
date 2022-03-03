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
	for (i = min; i <= len; i++)
	{
		arr[i] = i;
	}
	/**
	 * En el for le indico que recorra desde el i seteado en 0
	 * hasta el len (largo del array), con la condicion de i menor a len,
	 * que vaya incrementando de a uno y dentro del for le indico que en
	 * la posicion a[i] (arranca en cero) le vaya asignando min y que lo
	 * vaya incrementando de a uno hasta llegar a que se cumpla la
	 * condicion del largo del array..
	 */
	return (arr);
	/**
	 * No uso el metodo 'free' porque lo pusieron en el main y si lo pones
	 * mas de una vez puede ocacionar errores.
	 */
}

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
	 * El largo del array va a ser: el numero max que pasen - el min + 1
	 * le sumo uno porque en la letra te piden que se incluyan los extremos
	 * osea tiene que tener tanto al min como al max, al hacer la resta
	 * entre max y min te estaria faltando un espacio de memoria para lo
	 * que seria el maximo, ejemplo si fuera max = 10 y min = 8, la resta
	 * te daria 2 pero en memoria necesitar lugar para 3 int: 8,9 y 10.
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
	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}
	/**
	 * En el for le indico que recorra desde el i seteado en 0
	 * hasta el len (largo del array), con la condicion de i menor a len
	 * (como len ya le sume 1 no es necesario poner <=), que vaya
	 * incrementando de a uno y dentro del for le indico que en la posicion
	 * a[i] (arranca en cero) le vaya asignando min y que lo vaya increment
	 * ando tmb de a uno hasta llegar a que se cumpla la condicion del
	 * largo (len) del array.
	 */
	return (arr);
	/**
	 * No uso el metodo 'free' porque lo pusieron en el main y si lo pones
	 * mas de una vez puede ocacionar errores.
	 */
}

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to the function to be used
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	/**
	 * Chequeo las condiciones de letra, que array sea distinto de null,
	 * que cmp tmb sea distinto de null, no es necesario poner size > 0 ya que si
	 * array es distinto de null signfica que size va a ser mayor a cero, podria hacer la logica
	 * inversa y poner que array == NULL || (or) cmp == NULL aca tengo que poner or en lugar de and
	 * porque tienen que ser las dos iguales para decirle que te retorne -1 (tal cual indica la letra) y
	 * si no que se ejecute el for. En este caso le indico que si es distinto a null me ejecute el for
	 * y sino retorne -1.
	 */
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			return (i);
		/**
		 * Recorro el la posicion 'i' del array siempre que i sea menor a 'size'
		 * y pongo un if diciendo que si la posicion i de array es distinta de 0 que me retorne
		 * el indice 'i' en el que haya terminado el for, se pone distinto de cero porque en la letra
		 * del ejercicio lo indican, ya que al parecer no se quiere mostrar el numero cero.
		 */
		}
	}
	return (-1);
}

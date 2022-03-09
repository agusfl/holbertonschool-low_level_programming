#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: parameter for the function pointer
 * @f:function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;/*size_t es un tipo de dato que representa el tamanio de un objeto, se usa con sizeof*/
	/**
	 * Creo una variable de tipo size_t para que no haya problemas al
	 * compilar ya que 'size' es de tipo size_t entonces para poder hacer
	 * un for y comparar la variable creada 'i' con 'size' tienen que tener
	 * el mismo tipo de dato.
	 */
	if (array != NULL && action != NULL)
	/**
	 * Si el array es distinto a null ya se que 'size' es distinto a null
	 * porque el size es el parametro que se le pasa para el tamanio del
	 * array, entonces si ese es mayor a cero ya sabes que size tmb.
	 */
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		/**
		 * Esto tmb se podria hacer con puntero en lugar de indice.
		 * Con puntero seria: action (*(array + i)) osea va hasta el array y despues
		 * a la posicion en la que este el contador i.
		 */
		}
	}
}

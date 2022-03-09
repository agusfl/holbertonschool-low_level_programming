#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: parameter for the function pointer
 * @f:function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
/**
 * Definimos una funcion llamada 'array_iterator' que recibe como argumentos: un puntero a int llamado array,
 * una variable llamada size de tipo size_t y un puntero a funcion llamado action de tipo void y que recibe
 * un argumento de tipo int.
 */
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
		 * En este caso con el puntero a funcion 'action' llamo a la funcion que nos pasen
		 * en el main, en el main las funciones que pasan son: 'print_elem' y 'print_elem_hex' y las
		 * dos son de tipo void al igual que nuestro puntero a funcion action que es de tipo void
		 * tienen que ser si o si del mismo tipo porque sino no andaria.
		 */
		}
	}
}

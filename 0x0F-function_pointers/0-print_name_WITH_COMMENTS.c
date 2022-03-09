#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: parameter for the function pointer
 * @f:function to be executed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
/**
 * Primero se evalua el caso border de que no pasen nada en el puntero char
 * "name" o al puntero de funcion 'f', ponemos que si es distinto a null osea
 * que si pasaron algo que se ejecute la funcion f con el argumento name
 * y en caso de que sea null alguno de los dos no se ejecuta nada y se sale de
 * la funcion.
 * En el main de ellos nos pasan las funciones que irian en lugar de 'f', como
 * ser: 'print_name_as_is'.
 */
}

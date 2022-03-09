#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: parameter for the function pointer
 * @f:function to be executed
 */

void print_name(char *name, void (*f)(char *))
/**
 * Definimos una funcion llamada 'print_name' de tipo void que recibe como argumentos:
 * un puntero a char llamado 'name' y un puntero a una fucnion llamado f de tipo void y que
 * recibe como argumento un puntero a char.
 * El primer argumento toma el string (en este caso un nombre) que nos pasen como parametro
 * al utilizar la funcion que estamos creando 'print_name' y el segundo argumento toma la funcion
 * que pasen para imprimir el nombre, en estos ejs en el main ves que una imprime el nombre tal y como viene
 * y la otra la imprime todo en mayuscula (print_name_uppercase).
 */
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
 * ser: 'print_name_as_is' o 'print_name_uppercase' ambas son de tipo void al igual
 * que nuestro puntero a funcion 'f'.
 */
}

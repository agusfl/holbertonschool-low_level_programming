#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers_to_print;

	va_start(numbers_to_print, n);
	/**
	 * Declaro las variables macro al igual que en el ejercicio 0, cualquier duda sobre esto 
	 * ver los comentarios que hice en el 0 task.
	 */
	if (n > 0)
	/**
	 * Indico que n sea mayor a cero para tomar en cuenta el posible 'caso border' de que el
	 * usuario no pase ningun argumento.
	 * En el ej anterior no decian que retornemos cero si n == 0 pero en este caso no nos indican
	 * eso, por ese motivo decidi tomar en cuenta este caso border con el if.
	 * Si no pasan ningun argumento, no va a entrar en el if y no se retorna nada.
	 */
	{
		for (i = 1; i <= n; i++)
		/**
	 	* Hago un for al igual que en el otro ejercicio pero en este caso lo inicializo en 1 ya que
	 	* la cantidad de argumentos tiene que ser si o si mayor a uno para que entre en el if declarado
		* arriba.
		*/
		{
			printf("%d", va_arg(numbers_to_print, int));
			/**
			 * Aca se indica que imprima el primer argumento, a medida que recorre el for
			 * va imprimiendo el siguiente argumento.
			 */
			if (i < n && separator != NULL)
			/**
			 * Se hace este if para que imprima el separador (separator) siempre que no sea
			 * NULL (tal cual lo indica la letra) y ademas que imprima siempre que la posicion
			 * 'i' del for no haya llegado al ultimo argumento que se quiera imprimr (n) ya que
			 * si llego al ultimo 'n' no se quiere imprimir el separador al final del ultimo arg,
			 * por eso digo que imprima mientras que 'i' sea menor a 'n', tmb podria poner mientras
			 * i sea disninto a n.
			 */
			{
				printf("%s", separator);
			}
			/**
			 * Luego de imprimir el numero primero, despues que imprima el separador y asi hasta terminar
			 * el recorrido del for
			 */
		}
		va_end(numbers_to_print);

		printf("\n");
		/**
		 * Printeo el salto de linea tal cual lo indica la letra
		 */
	}
}

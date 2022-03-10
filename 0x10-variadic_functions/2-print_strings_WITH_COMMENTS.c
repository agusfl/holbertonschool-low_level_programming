#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 */

/**
 * Ejercicio practicamente igual al 1 pero en vez de imprimir numeros hay que imprimir strings
 * por lo tanto hay que crear una nueva variable puntero llamada 'str' de tipo char.
 * Hay que crear un puntero porque se van a imprimir strings, entonces el puntero
 * te permite recorrer todo el string (que al fin y al cabo es un array de chars).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings_to_print;
	char *str;

	va_start(strings_to_print, n);

	if (n > 0)/* Idem ej 1, ver comentarios ahi cualquier cosa */
	{
		for (i = 1; i <= n; i++)
		{
			/**
			 * Chequeo condicion de letra de que si algun string es == NULL indiquemos que
			 * se imprima (nil).
			 */
			str = va_arg(strings_to_print, char*);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);/*Aca imprimimos el string, por eso usamos %s*/
			}
			if (i < n && separator != NULL) /*idem ej 1, ver comentarios ahi cualquier cosa*/
			{
				printf("%s", separator);
			}
		}
		va_end(strings_to_print);
	}
	printf("\n");
}

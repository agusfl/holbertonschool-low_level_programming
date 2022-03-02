#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size of the array of chars
 * @c: char to fill array
 * Return: NULL if fails and a pointer to an array if succeed
 */

char *create_array(unsigned int size, char c)
{
	char *array; /* creo un puntero a char llamado array */
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	/**
	 * En el if anterior se indica que si el tamaño que nos pasan es menor
	 * a cero que se retorne NULL.
	 */
	array = malloc(sizeof(char) * size);
	/**
	 * Calculo dinamicamente con ls funcion 'sizeof' el tamaño de un char y
	 * lo multiplico por el tamano que nos pasen, y uso la funcion 'malloc'
	 * para alocar la memoria en el array que creamos.
	 */
	if (array == NULL)
	{
		return (NULL);
	}
	/* Si el array apunta a 0 (NULL) que retorne NULL */

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/**
	 * En esta parte copio dentro de cada posicion (i) del array lo que se
	 * pase en el caracter 'c'.
	 */
	return (array);
}

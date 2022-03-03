#include "main.h"
#include <string.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size in bytes of the array
 * Return: pointer to the array or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)/*dato de letra*/
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	/**
	 * Asigno la memoria de forma dinamica en arr (el puntero al array), se
	 * usa malloc de la forma que funciona el metodo calloc que es:
	 * contiguous allocation - se usa para alocar memoria de forma contigua
	 * ose como en una secuencia como en una array.
	 */
	if (arr == NULL)
	{
		return (NULL);
	}
	/**
	 * Chequeamos si el espacio de memoria es NULL para ver que el sistema
	 * no este completo, en caso de que sea NULL significa que hubo un
	 * problema y por lo tanto que retorne NULL, tal cual lo indica la
	 * letra.
	 */
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)arr + i) = 0;
	}
	/**
	 * Hago un for solo para una matriz de dos dimensiones, ya que al poner
	 * nmemb * size va a recorrer todas las filas y columnas que sean.
	 * Hacemos un for para setear la memoria de cada elemento del array en
	 * cero tal y como nos pide la letra, el resultado que printea cuando
	 * compilamos y ejecutamos con el 2-main.c se imprime en hexadecimal
	 * porque lo pusieron para que se imprima con ese formato con el printf
	 * Hay que 'castear' el tipo char porque habiamos creado un puntero
	 * void, ya que no sabes que tipo de array te van a pasar, se pasa a
	 * char porque en el 2-main se puede ver que el array que usan es un
	 * puntero al tipo de dato: char llamado a..
	 */
	return (arr);
}

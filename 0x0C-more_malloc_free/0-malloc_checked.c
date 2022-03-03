#include "main.h"

/**
 * *malloc_checked - function allocates memory using malloc
 * @b: bytes to reserve with malloc
 * Return: pointer to allocates memory or exit 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;
	/**
	 * Se le pone un puntero de tipo void porque es como una especie de
	 * "comodin" ya que despues lo podes castear con otro tipo de dato
	 */

	pointer = malloc(b);
	/**
	 * Le asigno la memoria con malloc de la cantidad que pasen en
	 * b al puntero creado que se llama pointer.
	 */
	if (pointer == NULL)
	{
		exit(98);
	}
	/**
	 *Si el puntero es null que salga del programa con un status de 98
	 */
	return (pointer);
	/*Si todo esta bien que retorne el puntero*/
}

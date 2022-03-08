#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct dog
 * @d: instance to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
	return;
	/**
	 * Aca no es necesario poner 'return' porque es una funcion de tipo
	 * void por lo tanto no espera ningun return, se le puede poner return;
	 * y va a dar un resultado correcto tmb porque es como que no retorna
	 * nada.
	 */
}

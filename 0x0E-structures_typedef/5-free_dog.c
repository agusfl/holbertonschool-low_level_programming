#include "dog.h"

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
	return (void);
}

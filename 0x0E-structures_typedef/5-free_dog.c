#include "dog.h"

/**
 * free_dog - free struct dog
 * @d: instance to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
	return (void);
}

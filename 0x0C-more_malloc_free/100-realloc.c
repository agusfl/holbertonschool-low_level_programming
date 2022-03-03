#include "main.h"
#include <string.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr : pointer to the memory previouls allocated with malloc
 * @old_size : size in bytes of the allocated space for ptr
 * @new_size : new size in bytes of the new memory block
 * Return: new pointer or NULL if fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
	{
		return (ptr);
	}

	new_pointer = malloc(new_size);

	if (new_pointer == NULL)
	{
		return (NULL);
	}

	memcpy(new_pointer, ptr, old_size);/*uso memcpy en vez de hacer un for*/
	free(ptr);
	return (new_pointer);
}

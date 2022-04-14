#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area of destination
 * @src: source of memory to copy
 * @n: bytes to fill
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; /*variable para recorrer dest*/

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}

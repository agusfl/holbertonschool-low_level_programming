#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: copy source to this buffer
 * @src: source to copy
 * @n: number of letters to be print in the string
 * Return: concatenate strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	i =  _strlen(dest);

	for (s = 0; src[s] && s < n; i++, s++)
	{
		dest[i] = src[s];
	}
	return (dest);
}

#include "main.h"

/**
 * _strncpy - copy two strings
 * @dest: copy source to this buffer
 * @src: source to copy
 * @n: number of letters to be print in the string
 * Return: copy strings
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

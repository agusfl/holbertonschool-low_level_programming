#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

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

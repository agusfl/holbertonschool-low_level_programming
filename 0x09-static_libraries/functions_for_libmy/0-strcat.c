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
 * _strcat - concatenates two strings
 * @dest: copy source to this buffer
 * @src: source to copy
 * Return: concatenate strings
 */

char *_strcat(char *dest, char *src)
{
	int i, d;

	i =  _strlen(dest);

	for (d = 0; src[d] != '\0'; i++, d++)
	{
		dest[i] = src[d];
	}
	dest[i] = '\0';
	return (dest);
}

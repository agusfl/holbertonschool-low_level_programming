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
	/**
	 * La diferencia de este ej con el 0 task es que hay que indicar
	 * que imprima el segundo character menor a lo que se indique con "n"
	 * por lo tanto va a imprimir siempre que src[s] y s sean menores a n.
	 * no es necesario agregar el null character como en el ej anterior
	 * por eso lo elimine.
	 **/
}

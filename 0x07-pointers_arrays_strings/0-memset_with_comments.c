#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes to fill
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			s[i] = b;
	}
	return (s);
}

/**
 *Si el n que pasan (que son los bytes para llenar "s" con lo diga "b") es
 * mayor a cero le indico que haga un for donde se fija que i sea menor a n
 * y de ser asi completa s[i] con lo que este en "b".
 * En caso de que n no sea mayor a cero que me devuelva lo que este en "s".
 */

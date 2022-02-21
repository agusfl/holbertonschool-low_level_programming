#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes to fill
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
/**
 * Hago un while para que se recorra mientras que el n que pasan para llenar
 * con bytes sea mayor a cero y despues dentro del while le indico que vaya
 * copiando lo que esta en la constante "b" a "s" que es el memory area.
 * por eso pongo para que i se incremente y n vaya decrementando hasta que
 * se termina de completar s.
 */

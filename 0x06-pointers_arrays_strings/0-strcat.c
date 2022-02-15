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
	/**
	 * Con el dest[i] = '\0' le estoy diciendo que cuando este en la ultima
	 * posicion de dest (que sumo las dos palabras, dest y le agrega src)
	 * le ponga el null character
	 * ya que en la condicion del for pongo que haga la iteracion hasta que
	 * sea distinto del null character que tienen los strings.
	 * En este caso en el for inicializo la i en el tamaño de la primer
	 * palabra de dest (ejemplo si es Hello seria 5 letras i = 5) y
	 * despues le arranco a sumar a i apartir de 5 y cada vez que d
	 * se incremente le va a igualando a la posicion de i en la que
	 * se este (osea apartir de la i = 6 arranca a poner lo que esta en
	 * src[d]).
	 **/
	return (dest);
}

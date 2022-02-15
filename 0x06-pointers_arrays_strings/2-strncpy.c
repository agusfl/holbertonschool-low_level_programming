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
	/**
	 * el segundo for que arranca con ; te toma el valor de i con el que termina
	 * el primer for, por lo tanto si el largo de i termino en 5 en el primer
	 * for, el segundo for arranca en 4, esto es para completar con el
	 * null character por sl "n" que pasaron es mayor al string para imprimir
	 * asi que te imprimiria hasta el largo del string y el resto lo completa
	 * con el null character
	 **/
	return (dest);
}

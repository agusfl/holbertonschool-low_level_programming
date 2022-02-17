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
	 * "src" viene de source, ya que es el input que se quiere copiar
	 * dentro de "dest" que seria destination osea hacia donde va a copiar
	 * lo que tenga "src". El primer for se fija que se copien todos los
	 * caracteres que tenga "src" dentro y el segundo for se completan
	 * los caracters nulos dependiendo del n que te pasen.
	 * El segundo for arranca con ; para tomar el valor de i con el que
	 * termina el primer for, por lo tanto si i termino en 5 en el primer
	 * for, el segundo for arranca en 6 (ya que se hace el incremento y no
	 * vuelve a entrar al for), el segundo for es para completar con el
	 * null character por si el sl "n" que pasaron es mayor al string para
	 * imprimir asi que te imprimiria hasta el largo del string y el resto
	 * lo completa con el null character, en el ejemplo del 2-mainc. usan
	 * un *.
	 */
	return (dest);
}

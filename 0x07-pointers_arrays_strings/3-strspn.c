#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * @s: number of bytes in initial segment of s
 * @accept: bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != ' ')
		/**
		 * itera el string hasta encontrar un espacio, hago esto para
		 * poder quedarme con el "initial segment" que es lo que hace
		 * la funion "strspn", en uno de los ejemplo que te pasan de
		 * string esta "hello, world" y con el espacio haces que te
		 * tome solo el primer segmento que seria "hello".
		 */
	{

		for (j = 0; accept[j] != '\0'; j++)
			/**
			 * itera accept y compara con el string (s)
			 */
		{
			if (s[i] == accept[j])
			/*
			 * usamos un contador llamado "matches" para contar
			 * cada vez que se hace un match entre una posicion de
			 * el string con "accept". En este caso los matches
			 * serian la cantidad de bytes (ya que un character
			 * tiene tamaño de un byte).
			 * Usamos el break para que con el primer match ya
			 * salga del loop y vuelva a entrar para buscar otro
			 * match en caso de que haya.
			 */
			{
				matches++;
				break;
			}
		}
		i++;
	}
	return (matches);
}

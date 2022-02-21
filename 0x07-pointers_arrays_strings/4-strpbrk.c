#include "main.h"

/**
 * _strpbrk - function that searches a string for a set of bytes
 * @s: stirng
 * @accept: bytes in string accept
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
		/**
		 * itera por todo el string "s".
		 */
	{

		for (j = 0; accept[j] != '\0'; j++)
			/**
			 * itera accept
			 */
		{
			if (s[i] == accept[j])
			{
			return (s + i);
			/**
			 * aca le decis que vaya a la posicion de s + i e
			 * imprima desde ahi. Le estas diciendo que se
			 * posicione en el puntero s y vaya a la posicion que
			 * marque "i".
			 */
			}
		}
	i++;/*incremento en i y s dentro del while*/
	}
	return ('\0');
	/*Retorna null en caso que no se encuentre coincidencia*/
}

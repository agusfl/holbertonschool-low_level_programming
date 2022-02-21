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
			if (*s == accept[j])
			{
			return (s);
			}
		}
	i++;/*incremento en i y s dentro del while*/
	s++;
	}
	return ('\0');
	/*Retorna null en caso que no se encuentre coincidencia*/
}

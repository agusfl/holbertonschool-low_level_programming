#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: compare strings
 */

int _strcmp(char *s1, char *s2)
{

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2);

	/**
	 * Aca se le dice en el while que si el puntero de s1 y el puntero de s2
	 * son distintos del caracter null (con el que terminan todos los strings)
	 * y *s1 es igual a *s2 que vaya sumando tanto s1 como s2.
	 * En el return se le dice que reste los dos punteros ya que si
	 * s1 y s2 son iguales, la resta te va a dar cero, si s1 es mayor a s2
	 * te va a dar positivo y si s1 es menor a s2 te va a dar negativo
	 * tal y como dice el man de strcmp.
	 **/
}

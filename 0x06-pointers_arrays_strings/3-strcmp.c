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
	 * En el while que si el puntero de s1 y el puntero de
	 * s2 son distintos del caracter null (con el que terminan todos
	 * los strings) y *s1 es igual a *s2 que vaya sumando tanto s1 como s2.
	 * En caso que *s1 no sea igual a *s2 (como es el caso con los
	 * ejemplos que ponen en 3-main.c para probar el codigo) no entra al
	 * while ya que no cumple con las condiciones para entrar y va directo
	 * al return y hace la resta entre *s1 y *s2.
	 * El puntero s1 tiene el valor de la primer letra que pasan
	 * en el string 1, que en el ejemplo del 3-main.c es "Hello"
	 * la "H" en ASCII es 72 y el segundo string palabra es "World!"
	 * la "W" en ASCII es 87 por lo tanto la resta da: -15.
	 **/
}

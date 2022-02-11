#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int rev = (_strlen(s) - 1);
	char temp;

	while (i < rev)
	{
		/**
		 * en las proximas lineas de codigo se usa una variable temporal
		 * para pasar de a una letra del string que se quiera mostrar de forma
		 * inversa, de esta forma queda el string dado vuelta.
		 */
		temp = s[i];
		s[i] = s[rev];
		s[rev] = temp;
		i++, rev--;
	}
}

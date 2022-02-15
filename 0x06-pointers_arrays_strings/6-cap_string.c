#include "main.h"

/**
 * *cap_string - This is a function to capitalize all words of a string
 * @str: string (array of characters) to be capitalize
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;

	/**
	 * Me fijo si el primer caracter es minuscula y lo paso a mayuscula
	 * en caso que sea minuscula.
	 */

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		(str[i - 1] == ' ' || str[i - 1] == 0x09 || str[i - 1] == '\n' ||
		str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		str[i - 1] == '}'))
		str[i] = str[i] - 32;
			i++;
	}
	return (str);
	/**
	 * Hago un while para que siempre que el string sea distinto del
	 * caracter nulo.Se pone un if que compruebe si se cumple
	 * con las condiciones de que es minuscula y que el caracter
	 * anterior es uno de los caracteres que el
	 * ejercicio pide que haya una mayuscula despues de ellos.
	 * Si se cumplen esas dos condiciones paso la primer letra a mayuscula.
	 */
}

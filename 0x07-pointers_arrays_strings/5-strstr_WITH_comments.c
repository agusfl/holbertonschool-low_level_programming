#include "main.h"

/**
 * _strstr - finds first occurrence of the substring.
 * @haystack: string - pajar en español
 * @needle: substring - aguja en español
 * Return: pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0') /*itero por el string haystack*/
	{
		while (needle[j] != '\0') /*itero por el string needle*/
		{
			if (haystack[i + j] != needle[j])
				break;
	/**
	 * Este break hace que se saltee la suma de j++ y pase a incrementar el
	 * i del while de "haystack", cuando el contenido de las posicones es
	 * distinto. Pero cuando la letra que esta en la posicion señalada
	 * por "haystack" es igual a la de "needle" se deja de cumplir la
	 * condicion de que las posiciones son distintas y se entra en el
	 * segundo while y arranca a incrementar "j", por esto es que se le
	 * pone el [i + j] en haystack, porque cuando entra en ese segundo loop
	 * , la "i" no se incremente, solo se incrementa la j. La "i" se queda
	 * señalando la posicion en la cual se encontro la primer igualdad que
	 * en nuestro caso es la posicion 7 de haystack (donde esta la "w").
	 * Y como despues se tiene que seguir recorriendo needle y haystack
	 * para ver que la palabra de needle sea igual a un subestring de
	 * haystack se recorre con la j la j suma tanto en needle como en
	 * haystack que queda con la posicion de "i" fija y sumando por el
	 * incremento de la j.
	 */
			j++;
		}
		if (needle[j] == '\0')
			/**
			 * aca se pregunta si el needle ya llego al caracter
			 * null, esto se da una vez que el if de arriba deja
			 * de cumplirse y por lo tanto se arranca a incrementar la "j" 
			 * y needle llega al caracter null,
			 * en caso de ser asi se indica que retorne haystack + i (la posicion que habiamos dicho que
			 * quedo seteada en 7 despues de que se incremento la i por el primer while).
			 */
		{
			return (haystack + i);
			/**
			 * se le indica que vaya a la posicion donde esta el
			 * puntero "haystack" y se mueva a la poscion "i".
			 * en este caso i termina en la posicion 7.
			 */
		}
	i++;
	}
	return ('\0'); /*return null si el substring no es encontrado*/
}

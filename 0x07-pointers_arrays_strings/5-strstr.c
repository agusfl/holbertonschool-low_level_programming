#include "main.h"

/**
 * _strstr - finds first occurrence of the substring.
 * @haystack: string
 * @needle: substring
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
			 * este break hace que se saltee la suma de j++ y pase
			 * a incrementar el i del while de "haystack", cuando
			 * sus posiciones son distintas.
			 */
			j++;
		}
		if (needle[j] == '\0')
			/**
			 * aca se pregunta si el needle ya llego al caracter
			 * null, esto se da una vez que el if de arriba deja
			 * de cumplirse y por lo tanto se arranca a increment
			 * ar la "j" y needle llega al caracter null,
			 * en caso de ser asi se indica que retorne haystack +i
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

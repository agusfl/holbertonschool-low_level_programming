#include "main.h"

/**
 * *leet - encode a string into 1337
 * @str: string to encode
 * Return: stiring encoded
 */

char *leet(char *str)
{
	int i = 0, j = 0; /* "i" y "j" son dos variables cualquiera */
	int code[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int decode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == code[j])
				str[i] = decode[j];
		}
	}
	/**
	 * En ese codigo se crean dos arrays, uno con las letras (code) a cambiar
	 * y otro con las letras del codigo (decode).
	 * el primer for itera hasta que srt[i] sea distinto del caracter null
	 * y el segundo for itera por los 10 elementos de los array definidos
	 * siempre y cuando se igualen los elementos de ambos arrays, se
	 * cambia a str[i] por el decode correspondiente.
	 */
	return (str);
}

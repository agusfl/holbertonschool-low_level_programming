#include "main.h"

/**
 * *rot13 - encode string with rot13
 * @rot: encode rot 13
 * Return: decode result
 */

char *rot13(char *rot)
{
	int i = 0, j = 0; /* "i" y "j" son dos variables cualquiera */
	int code[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z'};
	int decode[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm'};/** esto se podria poner igual pero
 * como un string asi:
 * decode [] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
 */

	for (i = 0; rot[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++) /*aca pongo menor a 52 porque son
					  *la cantidad de caracteres del array
					  */
		{
			if (rot[i] == code[j])
			{
				rot[i] = decode[j];
			break;
			}
		}
	}
	return (rot);
}

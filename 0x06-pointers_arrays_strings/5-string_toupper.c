#include "main.h"

/**
 * *string_toupper - capitalize all letters in the string
 * @str: string to capitalize
 * Return: string with all letters capitalized
 */

char *string_toupper(char *str)
{

	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
	/**
	 * En este ejercicio primero que nada hay que declarar un nombre para
	 * el puntero del string (yo le puse str) despues en el for
	 * indico que vaya incrementando de a uno si la posicion del string que
	 * se esta evaluando (empezando por 0 --> i = 0) es distinta del
	 * caracter null. Adentro del for pongo un if para que si el valor
	 * de la posicion de str[i] que se este evaluando es una letra
	 * minuscula que me defina a str[i] como str[i] - 32 (pongo menos
	 * 32 ya que esta es la diferencia en ASCII entre las letras
	 * minusculas y las mayusculas, ejemplo la a minuscula = 97
	 * y la A = 65, dif = 32) tmb se podria poner:
	 * s[i] = s[i] - 'a' + 'A';
	 * esto funciona ya que todo se pasa a ASCII por eso te deja restar
	 * lo que este en la posicion de str[i] con 32.
	 *por ultimo se indica que el return sea lo almacenado en str.
	 **/
}

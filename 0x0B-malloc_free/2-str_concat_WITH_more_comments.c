#include "main.h"

/**
 * *str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a new string that concatenate s1 and s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str_con;
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while ((s1[length1] != '\0'))
	{
		length1++;
	}
	while ((s2[length2] != '\0'))
	{
		length2++;
	}
	length2++;/*le agrego un lugar para que se tenga espacio para el caracter null*/
	/**
	 * Se hace un while para calcular el largo del string (s1)
	 * Se hace otro while para calcular el length de la segunda palabra que pasen (s2)
	 * Con estos dos lengths ya tenes los dos espacios para calcular la memoria que tenes que reservar.
	 */
	str_con = malloc(sizeof(char) * (length1 + length2));
	/* chequeo que no haya problema con la memoria */
	if (str_con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		str_con[i] = s1[i];
	}
	/**
	 * recorremos el primer for para ir copiando en str_con la primer palabra (s1).
	 */
	for (j = 0; j < length2; i++, j++)
	{
		str_con[i] = s2[j];
	}
	/**
	 * Aca tenemos str_con donde vamos a copiar la segunda palabra, usamos "i" que ya viene
	 * en la posicion que termino el s1 y vamos incrementando tanto "i" como "j" para ir concatenando
	 * en str_con s2, ya tenemos s1, ahora le "pegamos" s2.
	 */
	/*No hay que agregarle un 'free' al final porque se lo pusieron ellos*/
	return (str_con);
}

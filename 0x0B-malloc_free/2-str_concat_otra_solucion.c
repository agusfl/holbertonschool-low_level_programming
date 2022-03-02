#include "main.h"

/**
 * Esta es otra posible solucion a la que subi al checker pero con punteros en lugar de usar el indice con el array.
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
	while (*(s1 + i) != '\0')
	{
		length1++, i++;
	}
	while (*(s2 + j) != '\0')
	{
		length2++, j++;
	}
	length2++;
	/* Se hace un while para calcular el largo del string (s1) */
	str_con = malloc(sizeof(char) * (length1 + length2));
	/* chequeo que no haya problema con la memoria */
	if (str_con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		*(str_con + i) = *(s1 + i);
	}
	for (j = 0; j < length2; i++, j++)
	{
		*(str_con + i) = *(s2 + j);
	}
	/*No hay que agregarle un 'free' al final porque se lo pusieron ellos*/
	return (str_con);
}

#include "main.h"

/**
 * _strlen - returns the length of a string -reuso funcion creada para
 * ver largo de string
 * @s: string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * *string_nconcat - functions that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to be copied
 * Return: a pointer with s1 followed with n bytes s2 or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_con;
	unsigned int len, var1, var2;

	if (s1 == NULL)/*si es null que devuelva un string vacio*/
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = _strlen(s1) + n + 1;
	/**
	 * Calculo largo a concatenar, incluyendo un espacio (+1) para el null
	 * caracter (como pide la letra).
	 */
	str_con = malloc(sizeof(char) * len);

	if (str_con == NULL)
	{
		return (NULL);
	}
	/*ahora reuso la funcion de concatenar n bytes que habia crado*/
	for (var1 = 0; s1[var1] != '\0'; var1++)
	{
		str_con[var1] = s1[var1];
	}
	for (var2 = 0; var2 < n; var2++)
	{
		str_con[var1 + var2] = s2[var2];
	}
	str_con[var1 + var2] = '\0';

	return (str_con);
}

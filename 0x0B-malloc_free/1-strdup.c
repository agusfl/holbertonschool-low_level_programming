#include "main.h"

/**
 * *_strdup - pointer to a new allocated space in memory, with a copy of str.
 * @str: string to be copy by the new pointer to a string
 * Return: NULL if str is NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *str_copy;
	unsigned int i = 0;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while ((str[length] != '\0'))
	{
		length++;
	}
	length++;
	/**
	 * Se hace un while para calcular el largo del string (str) que te
	 * pasan para poder saber por cuanto multiplicar el sizeof del char.
	 * Luego le agrego un espacio (con el length++ de afuera del while)
	 * esto es por el null terminator caracter para que se le agregue un
	 * espacio, ya que con el while yo le digo que recorra el string hasta
	 * el null terminator, por eso despues se lo agrego.
	 */
	str_copy = malloc(sizeof(char) * length);

	if (str_copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		str_copy[i] = str[i];
	}

	return (str_copy);
}

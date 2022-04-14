#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{

	while (*s)
	/**
	 * esto recorre s hasta que se termine el string, es lo mismo que
	 * poner *s != '\0'
	 */
	{
		if (*s != c)
			s++; /*esto significa que vaya recorriendo s*/
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}

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
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	i++;
	}
	return ('\0'); /*return null si el substring no es encontrado*/
}

#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length of a string in numbers
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

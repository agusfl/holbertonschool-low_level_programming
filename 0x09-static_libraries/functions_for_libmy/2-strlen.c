#include "main.h"

/**
 * _strlen - change value of a variable with a pointer
 * @s: string
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);
}

#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int length = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL) /* dato de letra */
		return (NULL);

	/* find length to malloc */
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += (ac + 1);
	/**
	 * sumo espacio para el '\0' y nuevas lineas
	 */

	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}

/**
 * _strlen - returns length of a string
 * @s: string to return length
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

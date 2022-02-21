#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * @s: number of bytes in initial segment of s
 * @accept: bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != ' ') /*itera el string*/
	{

		for (j = 0; accept[j] != '\0'; j++) /*itera accept*/
		{
			if (s[i] == accept[j]) /*contador en matches y break con el primer match*/
			{
				matches++;
				break;
			}
		}
		i++;
	}
	return (matches);

}

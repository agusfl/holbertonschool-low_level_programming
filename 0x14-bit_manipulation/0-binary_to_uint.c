#include "main.h"

/**
 * _strlen - returns len of a string
 * @str: string
 * Return: length of the string
 */

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string with 0 and 1 to convert
 * Return: converted number or 0 if there is no 0 or 1 to convert
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x2 = 1, conv_val = 0, len;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			conv_val += x2;
		}
		x2 *= 2;
	}
	return (conv_val);
}

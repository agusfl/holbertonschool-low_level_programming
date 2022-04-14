#include "main.h"
/**
 *_atoi - asd
 *@s: asd
 *Return: asd
 */
int _atoi(char *s)
{
	int op = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			op *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * op);
}

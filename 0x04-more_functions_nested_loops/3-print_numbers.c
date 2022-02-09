#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: numbers from 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++) /* se puede poner el 0 y 9 en '' o
					* en el putchar poner i + '0'
					* para pasarlo a ASCII y poder imprimir
					*/
	{
	_putchar(i);
	}
	_putchar('\n');
}

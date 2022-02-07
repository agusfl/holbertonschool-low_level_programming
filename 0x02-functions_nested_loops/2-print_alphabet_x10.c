#include "main.h"

/**
 *print_alphabet_x10 -code
 *
 *Return: always 0
*/
void print_alphabet_x10(void)
{
	char ch;
	int x10 = 0;

	for (x10 = 0; x10 <= 9; x10++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
	}
}

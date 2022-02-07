#include <stdio.h>

/**
 *main -code
 *
 *Return: always 0
*/
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}

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
	putchar(ch);
	putchar('\n');
	}
}

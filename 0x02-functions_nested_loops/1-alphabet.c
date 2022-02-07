#include <stdio.h>

/**
 *main -code
 *
 *Return: always 0
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

/**
 *print_alphabet -code
 *
 *Return: always 0
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
}

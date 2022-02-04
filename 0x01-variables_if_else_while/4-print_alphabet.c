#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (!((ch == 'q') || (ch == 'e')))
		putchar(ch);
	putchar('\n');
	return (0);
}

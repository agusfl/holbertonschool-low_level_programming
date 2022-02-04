#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		putchar(d + '0');
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	char nameput[8] = "_putchar";

	for (int i = 0; i < 9; i++)
	{
		putchar(nameput[i]);
	}
	putchar('\n');
return (0);
}

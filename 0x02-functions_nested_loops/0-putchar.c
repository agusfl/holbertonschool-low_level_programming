#include "main.h"

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	char nameput[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(nameput[i]);
	}
	_putchar('\n');
return (0);
}

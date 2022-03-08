#include <stdio.h>

/**
 * main - print name of the file it was compiled from.
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
	/**
	 * __FILE__ es una macro standard predefinida y lo que hace es expandir
	 * el nombre del "current input file" que se le pase al programa de C.
	 * Siempre las macro predefinidas arrancan y terminan con: __
	 */
}

#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
	/**
	 * En esta funcion hago un for (loop) para imprimir todos los
	 * argumentos que se pasen al momento de compilar.
	 */
}

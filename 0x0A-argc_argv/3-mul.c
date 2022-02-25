#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int mult, num1, num2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
/**
 * El atoi es una funcion de la libreria: stdlib.h y sirve para "parsear" un
 * char a un int, es para indicar que una variable tipo char se trate como un
 * int. En este programa lo que se hace es multiplicar solo dos numeros y en
 * caso de que se pase solo un parametro que se imprima: "Error".
 * En caso de ques se pase mas de 2 argumentos (ademas del nombre del programa
 * que seria el argumento 0) va a multilpicar solo los primero dos numeros que
 * se pase.
 */
}

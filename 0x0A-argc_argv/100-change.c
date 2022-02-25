#include "main.h"


/**
 * main - prints the minimum number of coins for change for an amount of money
 * @argc: argument count
 * @argv: argument vector, only one argument more beside program name
 * Return: least number of coins, 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int num, coins = 0;

	/**
	 * Solo se acepta dos argumentos, nombre del programa y un numero
	 * indicando el monto que queremos calcular el cambio correspondiente
	 * en monedas de: 25, 10, 5, 2 o 1.
	 * En caso que haya mas de dos agumentos, printiar: "Error" y un salto
	 * de linea y retornar 1.
	 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	num = atoi(argv[1]);

	coins += num / 25;
	num = num % 25;
	coins += num / 10;
	num = num % 10;
	coins += num / 5;
	num = num % 5;
	coins += num / 2;
	num = num % 2;
	coins += num / 1;

	printf("%d\n", coins);
	return (0);
}

#include "main.h"


/**
 * main - prints the minimum number of coins to make change for an amount of money
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
	/**
	 * Si el numero que se pasa es negativo, printiar 0 y un salto de linea
	 * y retornar 0.
	 * La funcion "atoi" que usaremos mas adelante en el codigo escanea una
	 * cadena de string buscando numeros o signos y devuelve el resultado
	 * encontrado en caso de que hubiera numeros o signos (suma, resta) en
	 * el string en cuestion. Si la cadena a convertir por el atoi esta
	 * vacia o no tiene ningun numero, retorna 0.
	 */
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	/**
	 * Se convierte la cadena de argv a int con atoi y calculamos el cambio
	 * El cambio solo se puede dar en monedas de 25, 10, 5, 2 o 1.
	 * Se calcula de la siguiente manera: se divide el numero que nos pasen
	 * entre cada moneda posible para dar cambio (nombradas arriba) y a su
	 * vez se calcula el resto para ir viendo si se necesitan otras monedas
	 * Ejemplo, si entra como num = 100, se divide 100 entre 25 y nos da
	 * que se necesitan 4 monedas y el resto da 0 porque no se necesitan
	 * mas monedas que esas 4, pero si en lugar de 100 num fuera 102
	 * Se dividiria 102 entre 25 y nos daria 4 y el resto de 102 entre 25
	 * es 2, se sigue recorriendo por cada moneda, de 25 pasa a 10 y asi
	 * hasta llegar a la moneda 2 donde queda: 2 / 2 = 1 y le suma al
	 * contador (coins) que pasa de 4 a: 4 + 1 = 5, el cual es el resultado
	 * correcto, serian 4 monedas de 25 y una moneda de 2.
	 */
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

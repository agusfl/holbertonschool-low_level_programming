#include "3-calc.h"
#include <stdlib.h>/*agregro libreria para atoi*/
#include <stdio.h>/*agrego libreria para printf*/

/**
 * main - run the program
 * @argc: argument counter
 * @argv: argument vector - return a string literal
 * Return: 0 on sucess or 98, 99, 100 if error
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	/**
	 * Si el numero de argumentos que pasan es distinto de 4 significa que hubo
	 * algun argumento que no pasaron asi que le indicamos que imprima el mensaje:
	 * Error y que salga del programa con un exit de: 98 (esto en la practica serviria para saber
	 * que tipo de error fue el que sucedio).Los argumentos tienen que ser 4 ya que uno es por el
	 * nombre del programa para ejecutarlo otro para el primer numero que se pase, despues hay otro
	 * argumento para el simbolo de la operacion que se quiera realizar y por el ultimo el cuarto
	 * argumento seria el segundo numero que se pase.
	 */
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	/**
	 * Tengo que 'parsear' con atoi el argumento 1 y 3 de argv ya que el argument vector
	 * se guardan como string literals entonces hay que pasar el primer numero que va a estar en
	 * la posicion argv[1] (ya que en la argv[0] esta el nombre del programa a ejecutar) a integer
	 * para que se pueda hacer sumas con ese numero, lo mismo hay que hacer con el segundo numero que
	 * se encuentra en la posicion argv[3] ya que en la posicion argv[2] esta el simbolo que pasen dependiendo
	 * la operacion que se quiera realizar (suma, resta, div, mul o modulo).
	 * Por otro lado hay que declarar el puntero de funcion 'f' como el get_op_func (la funcion que habiamos
	 * creado antes para seleccionar la operacion a realizar dependiendo del simbolo que eliga el usuario) con
	 * la posicon argv[2] ya que como dije anteriormente ahi va a estar el simbolo.
	 */

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/**
	 * Aca estamos indicando tal y como se pidio en la letra que si se usa un operador que no es de
	 * los cuales definimos en la estructura que imprima: Error y salga con un exit: 99.
	 * Se le dice que sea: f == NULL porque en la estructura que definimos en el archivo: "3-calc.h"
	 * (ver codigo del archivo para entender mejor la siguiente explicacion)
	 * se define que se recorra un while recorriendo cada posicion de la estructura para ver si se
	 * iguala el simbolo indicado por el usuario con uno dentro de los definifos en la estructura
	 * y en caso que no se iguale sale del while y retorna NULL, entonces si f == NULL significa
	 * que no esta dentro de los operadores definidos previamente en la estrucutra.
	 * La segunda parte, lo que esta despues del or ||, es para tomar los 'casos borde' en donde
	 * te pueden pasar por equivacion o lo que sea mas de un operador, ejemplo: ++ en lugar de solo +
	 * por eso le indicamos que si en argv[2][1] que seria donde tiene que estar el carcter null ('\0')
	 * con el que terminan todos los strings es distinto de '\0' osea no es el caracter null que devuelva
	 * error ya que si tendria que serlo, por que el simbolo va a estar en argv[2][0] y ahi termina
	 * el strings.
	 */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	/**
	 * Aca se hace la comparacion indicada en la letra para que si se quiere dividir o hacer el modulo
	 * de un numero entre 0 que salga un error, ya que matematicamente no es posible.
	 * Tengo que poner argv[2][0] para poder acceder al primer caracter que esta dentro de argv[2], en este caso
	 * como indique mas arriba en argv[2] esta el simbolo, pero argv[2] sin nada mas es un puntero a un string(por
	 * definicion de argv) y no se puede compara un puntero contra un int o un string, etc.. por eso tengo
	 * que acceder al primer caracter de argv[2] con argv[2][0] para que sean comparables.
	 * Lo que se hace es ver si el primer caracter es el simbolo de dividido o de modulo y si el argv[3] (que
	 * es el ultimo numero de la operacion que se vaya a realizar) es 0, ya que si fuera cero y se quiere usar
	 * el simbolo de divido o de modulo con 0 como segundo numero va a imprimir: Error y salir con 100.
	 * Se compara argv[3][0] con '0' y no solo 0 porque '0' seria un caracter y asi se puede comparar con argv
	 * que como ya dije los argumentos son strings, entonces es comparable. Lo mismo pasa con los caracteres '/'
	 * y '%'.
	 */
	}

	printf("%d\n", f(num1, num2)); /* imprimimos el resultado de la operacion */

	return (0);/* retornar cero si no hubo ningun error */
}

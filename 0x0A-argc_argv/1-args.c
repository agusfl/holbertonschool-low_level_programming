#include "main.h"

/**
 * main - prints number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	/**
	 * Lo que nos piden en esta tarea es que indiquemos el numero de
	 * argumentos pasados a la funcion main, le ponemos un -1 porque
	 * por la solucion te das cuenta que quieren que se arranque a contar
	 * los argumentos desde el 0 (como se suele hacer en programacion).
	 * Ademas una particularidad de este ejercicio es que tenemos que usar
	 * el __attribute__((unused)) antes del argumento que no vamos a
	 * utilizar, en este caso el "*argv" no lo estamos usando, porque los
	 * argumentos los contamos con el argc, entonces le indicamos al
	 * programa que no vamos a usar ese argumento (argv), esto es para no
	 * tener porblemas con el compilador.
	 */
	return (0);
}

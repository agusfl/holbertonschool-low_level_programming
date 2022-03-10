#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters
 * @n: number to be sum
 * Return: sum of all the numbers passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	/**
	 * Declaro dos variables de tipo 'unsigned int' para no tener problemas con el tipo de variable
	 * de 'n' que es unsigned int. 
	 * Por un lado se declara 'sum' que va a ser donde voy a ir sumando los resultados y por otro lado
	 * 'i' que es el contador que voy a usar para ir recorriendo el for.
	 */
	va_list numbers_to_sum;
	/**
	 * Se declara una lista para que se pueda utilizar con las demas macros y funciones de variadic
	 * functions, la llamo: 'numbers_to_sum'.
	 */

	va_start(numbers_to_sum, n);
	/**
	 * Inicializo va_start lo que me permite tener acceso a los argumentos de las variadic functions
	 * Hay que indicarle dos argumentos, la lista de va_list y el nombre de la primer variable que preceda
	 * a los argumentos variables (...), en este caso 'n'.
	 */
	
	if (n == 0)
	{
		return (0);
	/**
	 * Valido el caso de si los argumentos en n son cero, tal cual pide el ejercicio. Si pasa que los
	 * argumetntos son cero, entonces que devuelva 0.
	 */
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers_to_sum, int);
	/**
	 * Hago un for que recorra siempre i es menor a n (n va a ser la cantidad de argumentos) en el primer
	 * ejemplo que tienen en el main n seria 3 (2, 98, 1024). Adentro del for se va sumando el argumento que se
	 * pase en la lista numbers_to_sum, para acceder a ella uso: la macro 'va_arg' esta toma como argumentos
	 * la lista y el tipo de dato que tiene, en este caso un int.
	 * Sumamos todos los valores dentro de la variable creada: sum.
	 */
	}
	va_end(numbers_to_sum);/*Esto libera la lista numbers_to_sum*/
	return (sum);/*retornamos la suma almacenada en la variable: sum */
}

#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function to select correct function to perform
 * @s: operation given it can be: +, *, -, /, %
 * Return: pointer to the correct operation function or NULL if not match
 * with 's'.
 */

int (*get_op_func(char *s))(int a, int b)
/**
 * Se hace una funcion 'pointer function' que tiene como argumento un puntero a char llamado 's' y recibe
 * dos argumentos de tipo int, llamados 'a' y 'b'.
 */*
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
/**
 * Se usa la estructura que habiamos creado en '3-calc.h' llamada con typedef como: 'op_t'
 * Se crea una estructura llamada 'ops' que toma punteros a char que son los signos que va a tomar
 * 's' despues, los simbolos se pasan con ASCII a char por eso es posible esto, y por otro lado la 
 * estructura tiene otra variable que es un pointer function llamado 'f' y este toma como argumento
 * las funciones que creamos: op_add, op_sub, op_mul, op_div, op_mod o NULL si no se paso nada en 's'.
 */

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
/**
 * Aca accedemos a la estructura y le decimos que se ejecute siempre que la estructura el indice 'i' de la
 * estrucutra ops y la variable 'op' --> ops[i].op sea distinto de null, osea que pasen un simbolo u o algo dentro de
 * 's', despues se hace un if para ver si lo que pasaron en 's' es igual a uno de los simbolos que pusimos en
 * la primer variable de la estrucutra 'ops', en caso de que haya un match entre esas dos cosas se indica que se
 * retorne 'ops[i].f --> que seria la funcion correspondiente al simbolo que se haya seleccionado.
 * En caso que se recorra toda la estructura con el while y no se encuentre dentro de los simbolos permitidos (los
 * indicados en la estructura) se sale del while y se retrona NULL.
 */
	return (NULL);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: compare strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);

	s1++;
	s2++;
	}
	return (0);
}

/**
 * Se declara una variable int "i" para poder iterar tanto por el string
 * "s1" como por "s2". Dentro del while de pone la condicion que tanto 
 * el puntero de s1 como el de s2 sean distintos del caracter null que tienen
 * los stirngs, esto se hace para que se itere hasta que terminen las letras
 * dentro de cada string. Dentro del while se pone un if que dice que si
 * la posicion "i" de s1 es distinta de la posicion "i" (i arranca en cero)
 * de s2 entonces que haga la resta entre el valor que este en la poscion
 * de s1 y s2. Aca lo que se esta buscando es comparar dos strings y cuando
 * se encuentra el primer caracter diferente entre ambos stirngs se calcula
 * dicha diferencia, si se ve el man de la funcion strcmp dice que el calculo
 * se hace con los avlores de ASCII, por lo tanto en los ejemplos que pasan
 * dentro del main para estos casos se puede observar que esta por un lado
 * la palabra "Hello" y por otro lado "World!" al entrar dentro del loop
 * ya en la primer posicion la H es diferente a la W, entonces se pasa
 * a calcular s1[0] - s2[0] = H (72 en ascii) - W (87 en ascii) = -15
 * por eso el primer check da -15.
 */

#include "main.h"

/**
 * prime_number - auxiliar function for is_prime_number
 * @n: number to check
 * @divisor: divisor
 * Return: prime number or not
 */

int prime_number(int n, int divisor)
{
	if (n == divisor)
		return (1);
	/**
	 * En esta parte del codigo le digo que si n es igual al divisor
	 * (empezando por el numero 2, ya que los numeros primos son apartir
	 * del 2) que es un numero primo y por lo tanto que retorne 1 como nos
	 * pedian en las condiciones del ejercicio.
	 * Aclaracion: un numero es divisor cuando solo es divisible por si
	 * mismo y por uno, no puede dividrse por ningun otro numero que no
	 * sean esos dos (si mismo y uno) y dar como resultado un numero entero
	 */
	else if (n % divisor == 0)
		return (0);
	/**
	 * Aca chequeo que el modulo de n dividido el divisor sea cero, ya que
	 * si pasa esto sabemos que no es un numero primo, porque tiene mas
	 * divisores que si mismo y 1 y por lo tanto retornamos 1.
	 */
	return (prime_number(n, divisor + 1));
	/**
	 * En esta parte se indica que se vuelva a llamar recursivamente a la
	 * funcion prime_number y que vaya incrementando el divisor de a uno.
	 */
}

/**
 * is_prime_number - check if n is a prime number, it use prime_number function
 * @n: number to check
 * Return: 1 if it is prime, 0 if it is not
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	/**
	 * En las lineas de codigo de arriba lo que hago es descartar casos en
	 * los que ya se que el numero no es primo, como ser con los numeros 0
	 * y 1. Seteo el divisor en 2 ya que los numeros primos arrancan por el
	 * numero 2.
	 */
	else
	return (prime_number(n, divisor));
}

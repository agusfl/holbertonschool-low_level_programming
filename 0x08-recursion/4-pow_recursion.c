#include "main.h"

/**
 * pow_recrusion - returns the value of x raised to the power of y
 * @x: number to be raised
 * @y: power to raised
 * Return: length of a string
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
	/**
	 * Analicemos el siguiente codigo con un ejemplo: supongamos que x es 5
	 * e y es 3. Arranca y en 3 pasa por el primer if y no entra porque no
	 * cumple la condicion de ser menor a cero, pasa por el segundo if y
	 * tampoco entra porque no es igual a cero, por lo tanto sigue y vamos
	 * al ultimo return y hace 5 (por la primer x del return) * 5 (este 5
	 * es por el segundo x de la recursion cuando se llama a la funcion
	 * nuevamente) ahora la "y" vale 2 ya que se le resto 1 y vuelve a
	 * entrar y hacer el mismo proceso hasta que llega a "y" = 0 y pone
	 * un return 1 y por lo tanto se multiplico: 5*5*5*1 = 125.
	 */
}

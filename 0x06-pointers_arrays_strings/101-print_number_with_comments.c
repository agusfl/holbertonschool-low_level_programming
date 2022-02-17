#include "main.h"

/**
 * print_number - print a integer
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int dec, count, i;
	/**
	 * declaramos a "dec", "i" y "count" como unsigned int
	 * para tener mas espacio en memoria.
	 * "dec" seria por: decremento y "count"
	 * por contador para ver las posiciones.
	 */

	if (n < 0)
	/**
	 * si es negativo, le imprimimos el signo de negativo con el putchar
	 * y pasamos i a positivo para quedarnos con el numero que nos pasan
	 * en positivo para lo que sigue del codigo.
	 */
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;
	/**
	 * si el valor es positivo que imprima el mismo valor, pasamos "i" a
	 * "n" para tener mas espacio en memoria por si el "n" que nos pasan
	 * es muy grande.
	 */

	dec = i;
	/**
	 * declaramos "dec" como i, esto es para tener una variable con
	 * mas espacio como decia anteriormente, por si el numero es muy
	 * grande.
	 */
	count = 1;
	/**
	 *declaramos a count como mayor a cero ya que
	 *cero o menor a cero esta dentro de los casos anteriores,.
	 */

	while (dec > 9)
	/**
	 * se pone mayor a 9 ya que ya se analizaron los casos de 1 digito
	 * por lo tanto ahora se analizan los casos de 2 digitos o mas.
	 */
	{
		dec /= 10;
		count *= 10;
	}
	/**
	 * Aca lo que hacemos es decrementar el numero que nos pasen entre 10
	 * para poder dejar el contador en las posiciones necesarias, ya 
	 * que el contador multiplica por 10.
	 * Por lo tanto si en el "n" que nos pasan fuera: 1024 entraria en el
	 * while y se dividiria entre 10, quedaria en 102 y el contador en
	 * 10 * 1 = 10, entra denuevo en el while ya que 102 > 9 y "dec" queda
	 * en 10 y el contador en 10 * 10 (ya que era 10 y se vuelve a
	 * multiplicar por 10) osea queda en: 100, dec entra denuevo ya que
	 * 10 > 9 y dec queda en 1 (no vuelve a entrar al while) y el count
	 * queda en: 100 * 10 = 1000.
	 */
	for (; count >= 1; count /= 10)
		_putchar(((i / count) % 10) + '0');
	/**
	 * Aca el conunt entro en 1000 (siguiendo con el ejemplo de n = 1024)ca
	 * lo que hacemos es decrementar el numero que nos pasen entre 10
         * para poder dejar el contador en las posiciones necesarias, ya
         * que el contador multiplica por 10.
         * Por lo tanto si en el "n" que nos pasan fuera: 1024 entraria en el
         * while y se dividiria entre 10, quedaria en 102 y el contador en
         * 10 * 1 = 10, entra denuevo en el while ya que 102 > 9 y "dec" queda
         * en 10 y el contador en 10 * 10 (ya que era 10 y se vuelve a
         * multiplicar por 10) osea queda en: 100, dec entra denuevo ya que
         * 10 > 9 y dec queda en 1 (no vuelve a entrar al while) y el count
         * queda en: 100 * 10 = 1000.
	 * Ahora hacemos el proceso inverso con el contador en el for, como
	 * 1000 es mayor a 1 lo divide entre 10 y se imprime i dividio 100
	 * y a eso se le hace el modulo de 10 para quedarnos con el primer
	 * digito, se le suma el '0' para pasarlo a ASCII y que el putchar
	 * lo pueda imprimir como digito, se repite el proceso hasta
	 * que count sea igual o menor a 1 y de esta forma se terminan
	 * imprimiendo todos los digitos que nos pasan.
	 */
}

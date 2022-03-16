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
	 * Declaramos a "dec", "i" y "count" como unsigned int
	 * para tener mas espacio en memoria. "dec" seria por: decremento y "count"
	 * por contador para ver las posiciones.
	 */

	if (n < 0)
	/**
	 * Si es negativo, le imprimimos el signo de negativo con el putchar
	 * y pasamos i a positivo para quedarnos con el numero que nos pasan
	 * en positivo para lo que sigue del codigo. Ya que vamos a usar variables
	 * de tipo unsigned int (no toma el signo negativo) osea toma valores de cero a 
	 * 2 a la 32 - 1 que seria: 4.294.967.295.
	 */
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;
	/**
	 * Si el valor es positivo lo vamos a imprimir con el putchar que esta dentro del for
	 * mas adelante en el codigo. Pasamos "i" a "n" para tener mas espacio en memoria por si el 
	 * "n" que nos pasan es muy grande.
	 */

	dec = i;
	/**
	 * Declaramos "dec" como i, esto es para calcular cuantas veces hay que decrementar el numero
	 * que nos pasen y con esto guardamos en una variable "count" cuantas veces se hizo el decremento
	 * en multiplos de 10 ya que al decremento lo divido entre 10, asi vamos a saber cuantas
	 * decenas, centenas, milesimas o lo que sea tenia el numero que pasaron.
	 */
	count = 1;
	/**
	 *Declaramos a count como uno ya que cero o menor a cero esta dentro de los casos anteriores.
	 */

	while (dec > 9)
	/**
	 * Se pone mayor a 9 ya que ya se analizaron los casos de 1 digito por lo tanto ahora se analizan los 
	 * casos de 2 digitos o mas.
	 */
	{
		dec /= 10;
		count *= 10;
	}
	/**
	 * Aca lo que hacemos es decrementar el numero que nos pasen entre 10 para poder dejar el contador
	 * en las posiciones necesarias, ya que el contador multiplica por 10. Por lo tanto si en el "n" 
	 * que nos pasan fuera: 1024 entraria en el while y se dividiria entre 10, quedaria en 102 y el 
	 * contador en 10 * 1 = 10, entra denuevo en el while ya que 102 > 9 y "dec" queda en 10 y el contador 
	 * en 10 * 10 (ya que era 10 y se vuelve a multiplicar por 10) osea queda en: 100, dec entra denuevo 
	 * ya que 10 > 9 y dec queda en 1 (no vuelve a entrar al while) y el count queda en: 100 * 10 = 1000.
	 */
	for (; count >= 1; count /= 10)
		_putchar(((i / count) % 10) + '0');
	/**
	 * Aca el count entro en 1000 , siguiendo con el ejemplo de n = 1024:
	 * Ahora hacemos el proceso inverso con el contador en el for, como 1000 es mayor a 1 se ejecuta
	 * el putchar (ya que el for funciona de esta forma, se ejecuta el codigo y despues se hace el incremento
	 * o decremento (update expression)) y se imprime: 1024/1000 = 1 (ya que no se toma lo que esta
	 * despues de la coma porque no es un numero float) y al 1 se le hace el modulo de 10 y esto nos trae
	 * el ultimo numero que en este caso va a ser el unico numero (1). Luego se hace el decremento de count
	 * y count queda en = 1024/100 = 102 y se vuelve a repetir el proceso anterior y se imprime el: 0
	 * y sigue asi hasta qeu imprime los numeros restantes y 'count' ya no es mayor a 1 y se sale del
	 * loop (del for). Se le suma el '0' para pasarlo a ASCII y que el putchar pueda imprimir el digito ya que
	 * putchar solo imprime caracteres, por eso hay que pasarlo a ascii.
	 */
}

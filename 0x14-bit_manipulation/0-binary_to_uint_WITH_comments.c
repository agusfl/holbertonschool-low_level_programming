#include "main.h"

/**
 * _strlen - returns len of a string
 * @str: string
 * Return: length of the string
 */

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
/* Creamos una funcion para saber el largo del string que pasen para convertir de binario a decimal
 * usamos unsignes int ya que la funcion binary_to_uint retorna unsigned int. Se pone const char *
 * puntero a char (string) constante como argumento de la funcion _strlen porque tiene que tener el mismo
 * tipo que el string "b" que se recibe en la funcion binary_to_uint para que no haya problemas de compilacion. */
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string with 0 and 1 to convert
 * Return: converted number or 0 if there is no 0 or 1 to convert
 */

unsigned int binary_to_uint(const char *b)
/* Declaramos una funcion llamada binary_to_uint que recibe como argumento un string (puntero a char) const y
 * retorna unsigned int. */
{
	unsigned int x2 = 1, conv_val = 0, len;
	/* Se declara "x2" para indicar cuando hay que multiplicar por 2 y almacenar su valor, se inicializa en
	 * 1 para que la primera vez que tenga que multiplicar se haga: 2 * 1 = 2.
	 * "conv_val" es donde vamos a almacenar el valor convertido a retornar
	 * "len" es donde guardamos el tamanio del string que nos pasen usando la funcion que creamos mas arriba. */
	int i;
	/* Se declara una variable "i" que se va a utilizar para iterar por el string que se nos pasa. */
	if (b == NULL)
	{
		return (0);
	/* Evaluamos el caso de si b es NULL, en dicho caso que retorne 0 tal cual lo indica la letra. */
	}

	len = _strlen(b);
	/* Le asignamos a "len" el largo del string pasado. */

	for (i = len - 1; i >= 0; i--)
	/* Indicamos que "i" va a ser el largo menos 1 (le restamos 1 para que no se tome en cuenta el caracter
	 * NULL ('\0') con el que terminan todos los strings) al hacer esto ya nos estamos posicionando al final
	 * del string por decir de alguna manera. Despues indicamos que se itere siempre y cuando "i" sea mayor o
	 * igual a 0 (esto es para recorrer todas las posiciones del string) y por ultimo indicamos que se vaya
	 * decrementando de a 1 posicion, se va de atras para adelante ya que para pasar de binario a decimal
	 * vamos a tener que contar de derecha a izquierda. */
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		/* Se establece la condicion de letra que si alguna de las posiciones del string tiene algun
		 * caracter que no sea 0 o 1 entonces que se retorne 0 y se salga de la funcion. Se pone el operador
		 * and (&&) porque lo que estas evaluando es que el caracter que se encuentra en la posicion "i"
		 * sea distinto de cero o de uno, ejemplo en el tercer string que pasan en el 0-main.c para
		 * probar el codigo se pasa: "1e01", cuando se evalua la 'e' se pregunta: 'e' es distinto de 0 y de 1
		 * ? y como es distinto se retorna cero. Se le pone 0 entre '' porque estamos trabajando con 
		 * caracteres del string y por lo tanto con ascii, tmb se podria poner 48 que es el valor que
		 * representa 0 en ascii.*/
		}
		if (b[i] == '1')
		{
			conv_val += x2;
		/* Si la posicion que se esta evaluando del string b es 1 entonces vamos a querer almacenar su valor
		 * en nuestra variable "conv_val", para el primer caso se almacena 1 ya que incializamos x2 = 1, esto
		 * es porque 2 a la 0 es 1, entonces si pasan solo 1 en el string como en el primer ejemplo almacenamos
		 * 1 en conv_val y eso es lo que retornamos ya que no se volveria a entrar al loop del for y retornaria
		 * el valor almacenado en conv_val que seria 1. */
		}
		x2 *= 2;
		/* Este x2 se usa para ir almacenando los distintos valores que se puede tomar de las potencias de 2
		 * sin ser el 2^0 el cual se evaluo en el paso anterior. Esto funciona porque cada vez que se pasa una
		 * posicion se hace primero: 2*1 = 2 (que seria 2^1) luego 2*2 (que seria lo mismo que 2^2) y asi
		 * sucesivamente cada vez que se pasen posiciones del string y estos valores se van a almacenar
		 * en "conv_val" siempre y cuando la posicion este "prendida" teniendo 1 en dicho bit, esto suele
		 * significar que "se deja pasar corriente" que esta "prendido". */
	}
	return (conv_val); /* Por ultimo retornamos "cont_val" con el valor binario convertido en decimal. */

	/* Veamos un ejemplo para dejar las cosas mas claras: En el 2 caso del 0-main.c nos pasan para convertir
	 * de binario a decimal el string: "101" cuyo resultado es 5 y lo que pasaria cuando entra en nuestra funcion
	 * seria lo siguiente: 
	 * "len" seria: 3 ya que el primero 1 seria la posicion 0 el cero siguiente al 1 seria la posicion 1, el
	 * 1 que le sigue al cero seria la posicion 2 y el caracter NULL ('\0') con el que terminan todos los
	 * strings (que se pone automaticamente) seria la posicion 3.
	 * Por lo tanto al entrar al for seria de la siguiente manera: for (i = 2; 2 >= 0; 2--)
	 * Se entra en el for ya que 2 es mayor o igual a 0, como 1 que esta en la posicion b[0] es 1 no se entra
	 * en el primer if y se entra en el segundo if y se almacena 1 en "cont_val" ya que x2 se habia incializado
	 * en 1. Por ultimo se multimplica 2 * 1 en x2 y se almacena.
	 * Luego se hace el decremento de i-- y se entra al for nuevamente con 1 (2 - 1) mayor o igual a 0.
	 * No se entra en el primer if y tmp en segundo y se va al x2 y se hace: 2 * 2 = 4 (ya que x2 tenia almacenado
	 * 2 de la ultima iteracion).
	 * Se vuelve a entrar al for con 0 ya que es igual a 0. 
	 * Se entra en el segundo if porque la posicion b[2] tiene a: '1' entonces se almacena en cont_val = 1 + 4
	 * ya que 1 era lo que estaba guardado en cont_val y 4 lo que se venia almacenando en x2.
	 * No se vuelve a entrar al for ya que no se es mayoro igual cero y se sale del programa retornando "cont_val"
	 * que quedo con valor de: 5.
	 */
}

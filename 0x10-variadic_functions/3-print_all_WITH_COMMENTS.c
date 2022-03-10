#include "variadic_functions.h"

/**
 * Primero que nada aclaro que en el 3-main.c cuando llaman a la funcion que creamos 'print_all'
 * el primer argumento que se pasa es el separador que hay que ponerlo entre comillas como indico en el codigo mas
 * adelante, cuando se le pasa "ceis" esta bien que imprima solo: B, 3, stSchool - ya que la 'c' representaria al
 * simbolo 'c' de caracter que definimos en la estructura, la 'e' no se toma en cuenta ya que no es uno de los
 * simbolos que definimos en la estructura que creamos entonces como dice la letra se saltea ('any other char
 * should be ignored), la 'i' es de integer por eso imprime 3 y la 's' es para string --> stSchool.
 */

/*A continuacion se declaran las funciones que se van a usar en la estructura que creo mas abajo */

/**
 * print_char - prints a char
 * @c: char
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));i
	/**
	 * Esta es una funcion para imprimir un char, es de tipo void y toma como argumento
	 * a una va_list llamada c (por char), le tenes que pasar el va_list para que guarde la
	 * informacion en la lista y se pueda acceder con funciones variadicas a las distintas macros
	 * va_start, va_arg, va_end..
	 * va_arg usa a va_list para ir iterando cada 'argumento' de la lista de va_list.
	 * Para poder usar el va_arg para iterar dentro de va_list, es necesario primero inicializar
	 * llamando a la macro va_start. Nosotros ponemos el va_start mas adelante en el codigo antes
	 * de utilizar a la funcion print_char o cualquiera de las otras funciones definidas, todas
	 * llevan la misma logica.
	 */
}

/**
 * print_int - prints an integer
 * @i: integer
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - prints a float
 * @f: float
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
	/**
	 * Usamos el tipo 'double' para que pueda imprimir a un numero de tipo float.
	 */
}

/**
 * print_string - prints a string
 * @s: string
 */

void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char*);
	/*
	 * Creamos una variable 'str' de tipo puntero a char para que se pueda
	 * utilizar para imprimir strings por eso es que lo igualamos a: va_arg(s, char*)
	 * para despues utilizar 'str' cuando vayamos a imprimir con el printf y que se pueda
	 * imprimir todo el string y no solo un caracter como con char (sin hacer un for u otro loop).
	 */

	if (str == NULL)
	{
		printf("(nil)");
		return;
		/**
		 * Es necesario ponerle el return vacio aunque la funcion se de tipo void
		 * porque sino da error.
		 */
	}
	printf("%s", str);
}

/**
 * print_all - print types: char, integer, float and string
 * @format: symbol to print
 */

void print_all(const char * const format, ...)
	/**
	 * 'print_all' es una funcion que recibe como argumentos un puntero constante a char llamado 'format'
	 * y despues usamos variadi funtrions para indicarle con los (...) que puede recibir multiples
	 * argumentos, osea tiene que recibir si o si un argumento entre comillas doblres (" ") porque format
	 * es un string y despues puede recibir multiples o ningun argumento.
	 */
{
	char *separator = "";
	/**
	 * Lo incializas como un string vacio para que en la primer iteracion no se imprima una coma
	 * y un espacio sino que despues de imprimir el primer valor.
	 */
	int i, ii; /*Creo dos variables para usar como contadores */

	va_list list;
	/*
	 * Creo una variable llamada: list de tipo va_list
	 */

	va_struct symbol[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
		};
	/*Se crea la estructura de tipo va_struct (la defini en el header) con los simnolos y su correspondiente
	 * funcion.
	 */

	va_start(list, format);
	/* Incializo la lista con va_start para poder acceder a las variadic functions como va_arg 
	 * Se le indica por un lado la lista creada con va_list y el otro argumento es el tipo de dato
	 * el cual le indico 'format' ya que el tipo de dato varia dependiendo lo que elija el usuario. */

	ii = 0; /* Seteo en cero a mi variable contador ii */
	while (format != NULL && format[ii] != '\0')
		/**
		 * Se le indican estas dos condiciones ya que hay que evaluar que el format que hayan pasado
		 * (el: 'c', 'i', 'f', 's') no sea NULL osea que hayan pasado alguno y format[ii] distinto de
		 * '\0' es para indicarle que recorra el string que nos pasan hasta llegar al caracter
		 * null ('\0') con el que terminan todos los strings.
		 * Le ponemos format[ii] ya que tiene que ir iterando el string que pasen en format a medida
		 * que incrementa el contador 'ii' que dfinimos..
		 */
		{
		i = 0;
		/**
		 * Tengo que setear la 'i' (mi primer variable contador que defini) en cero aca dentro del
		 * primer while ya que siempre que este por arrancar el segundo while voy a querer que esta
		 * 'i' empiece en cero para que pueda recorrer toda la estructura symbol que cree, ya que cada
		 * vez que el primer while hace una iteracion tengo que chequear la segunda letra para ver
		 * si es uno de los simbolos que defini en symbol y poder indicarle la funcion correspondiente.
		 * Ejemplo, en el 3-main.c pasan dentro de lo que seria el argumento 'format' = "ceis"
		 * En la primer iteracion del primer while se chequea la 'c' y en el segund while se chequea
		 * si la 'c' esta dentro de symbol y como la 'i' va incrementando para chequear si la 'c' esta o no
		 * en la estructura, cuando va a la segunda iteracion la tengo que volver a setear en cero
		 * para que pueda recorrer nuevamente toda la estructura, si no recorreria apartir de la posicion uno
		 * y no de la cero como deberia ser. En la segunda se va a chequear a
		 * la posicion format[1] ya que ii esta en uno ahora y seria la letra 'e', por eso tengo que volver
		 * a setear mi 'i' en cero para que vuelva a recorrer todo la estructura symbol creada para ver
		 * si el caracter que pasaron esta dentro de los que defini.
		 */
		while (symbol[i].s != '\0')
		/* Le indicamos esta condicion ya que en la estructura termina con '\0' y que retonre NULL
		 * osea recorre toda la estructura y cuando llega a '\0' signficia que el simbolo pasado
		 * no esta dentro de la estructura por lo tanto sale con NULL.
		 */
		{
			if (symbol[i].s == format[ii])
		/**
		 * En este if como en el ultimo ejercicio mandatorio de 'function pointers' le indicamos
		 * la condicion de si el simbolo que escribieron (que se toma con format) es igual a alguno
		 * de los simbolos definidos dentro de nuestra estructura 'symbol' simbolo vendria a ser
		 * 'c', 'i', 'f', 's' que son los diferentes formatos en los cuales permitimos imprimir, en caso
		 * de que se igualen le indicamos que imprima el separador (el primero es vacio por lo que explique
		 * mas arriba y despues pasa a ser coma y espacio como se define abajo) y que imprima lo que
		 * este en la posicion 'i' (i va aumentando con el loop) en las funciones de symbol (symbol.fun
		 * (list)) la list es la que le pasamos con va_list, necesitas usar la variadic functions
		 * para poder imprmir todos los argumentos que te manden (lo que es variable ya que no sabes cuantos
		 * te van a pasar de antemano), en el ultimo ej de function pointers (el de la calculadora) solo
		 * lo haciamos para 2 numeros, ni mas ni menos, ya sabias cuantos eran de antemano.
		 */
			{
				printf("%s", separator);
				symbol[i].fun(list);
				separator = ", ";
			}
			i++;
		}
		ii++;
	}
	va_end(list);/* Necesario para liberar lo que habiamos inicalizado con va_start y usado */
	printf("\n");
}


#include "variadic_functions.h"

/**
 * Primero que nada aclarar que en el 3-main.c cuando llaman a la funcion que creamos 'print_all'
 * el primer argumento que se pasa es el 'format' que seria el simbolo del formato con el cual queremos
 * imprimir, puede ser: 'c'(char), 'i'(integer), 'f'(float) o 's'(string). Cuando se le pasa "ceis" (como
 * hacen en el 3-main.c) esta bien que imprima solo: B, 3, stSchool --> ya que la 'c' representaria al
 * simbolo 'c' de caracter que definimos en la estructura, la 'e' no se toma en cuenta ya que no es uno de los
 * simbolos que definimos en la estructura que creamos, entonces como dice la letra se saltea ('any other char
 * should be ignored), la 'i' imprime 3 y la 's' --> stSchool.
 */

/* A continuacion se declaran las funciones que se van a usar en la estructura que creo mas abajo 
 * Todas siguen la misma logica, de usar variadic functions, utilizando va_list y va_arg */

/**
 * print_char - prints a char
 * @c: char
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
	/**
	 * Esta es una funcion para imprimir un char, es de tipo void y toma como argumento
	 * a una va_list llamada c (le puse ese nombre por el tipo de dato char), se le pasa como
	 * argumento el va_list y luego se le indica con el 'va_arg' que acceda a la variable 'c' de tipo va_list
	 * y que la imprima, ya que el va_arg nos permite iterar la lista de argumentos (arg) de la lista creada
	 * con va_list. Para poder usar el va_arg para iterar dentro de va_list, es necesario primero inicializar
	 * llamando a la macro va_start. Se inicializa el va_start mas adelante en el codigo antes
	 * de utilizar a la funcion print_char o cualquiera de las otras funciones definidas a continuacion.
	 * Se necesita el va_start ya que este tiene dos argumentos uno es la lista creada, en este caso seria: c
	 * y el otro es la cantidad de argumentos que se tiene, en este caso como veremos mas adelante 'format' va
	 * a representar a la cantidad de argumentos que se pase, como veiamos antes en el 3-main pasan "ceis" que
	 * serian 4 argumentos.
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
	 * utilizar para imprimir strings por este motivo es que lo igualamos a: va_arg(s, char*)
	 * para despues poder utilizar 'str' cuando vayamos a imprimir con el printf y que se pueda
	 * imprimir todo el string y no solo un caracter como con un char (sin hacer un for u otro tipo 
	 * de loop para que imprima todos los char).
	 */

	if (str == NULL)
	{
		printf("(nil)");
		return;
		/**
		 * Es necesario ponerle el return vacio aunque la funcion sea de tipo void
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
	 * 'print_all' es una funcion que recibe como argumentos un puntero constante char llamado 'format'
	 * y despues usamos variadic functions para indicarle con los tres puntos (...) que puede recibir multiples
	 * argumentos, osea tiene que recibir si o si un argumento entre comillas dobles (" ") porque format
	 * es un string (ya que se definio como puntero de char, se define de esta forma para poder iterar por toda
	 * la cadena de caracteres que se pase en 'format') y despues puede recibir multiples o ningun argumento.
	 */
{
	char *separator = "";
	/**
	 * Lo incializas como un string vacio para que en la primer iteracion no se imprima una coma
	 * y un espacio sino que despues de imprimir el primer valor y que se haya realizado el primer incremento
	 * del while que vamos a definir a continuacion.
	 */
	int i, ii; /*Creo dos variables para usar como contadores */

	va_list list; /* Creo una variable llamada: list de tipo va_list */

	va_struct symbol[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
		};
	/*Se crea la estructura de tipo va_struct (la declare en el header) con los simbolos para elegir el formato
	 * con el cual se quiere imprmir y su correspondiente funcion como segundo miembro, si se ve en el 
	 * header 'variadic_functions.h' el tipo de dato de esta estructura es por un lado un char llamado 's' y
	 * su segundo y ultimo miembro es una funcion de punteros que toma como argumento la 'va_list' que fuimos
	 * creando al definir las funciones de mas arriba (esto es gracias a function pointer, tema visto el dia
	 * anterior), esta function pointer nos permite acceder a las distintas funciones que habiamos creado.
	 */

	va_start(list, format);
	/* Incializo la lista con va_start para poder acceder a las variadic functions como va_arg (tal cual se
	 * habia comentado anteriormente). Se le indica como primer argumento la lista creada con va_list y como
	 * segundo argumento 'format' que como ya se comento seria el formato con el cual se va a imprimir. */

	ii = 0; /* Seteo en cero a mi variable contador ii */
	while (format != NULL && format[ii] != '\0')
		/**
		 * Se le indican estas dos condiciones ya que hay que evaluar que el format que hayan pasado
		 * (el: 'c', 'i', 'f', 's') no sea NULL osea que hayan pasado alguno y format[ii] distinto de
		 * '\0' es para indicarle que recorra el string que nos pasan hasta llegar al caracter
		 * null ('\0') con el que terminan todos los strings. 
		 * Le ponemos format[ii] ya que tiene que ir iterando el string que pasen en 'format' a medida
		 * que incrementa el contador definido como: 'ii' utilizado en el primer while..
		 */
		{
		i = 0;
		/**
		 * Tengo que setear la 'i' (mi primer variable contador que defini) en cero aca dentro del
		 * primer while ya que siempre que este por arrancar el segundo while voy a querer que esta
		 * 'i' empiece en cero para que pueda recorrer toda la estructura symbol que cree, ya que cada
		 * vez que el primer while hace una iteracion tengo que chequear el segundo caracter para ver
		 * si es uno de los formatos que defini en symbol y poder indicarle la funcion correspondiente.
		 * Se hace de esta manera porque cada vez que se entra en el segundo while se tiene que setear el
		 * contador usado (en este caso 'i') en 0 para que pueda recorrer toda la estructura para cada
		 * caracter del string pasado en 'format'.
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
	va_end(list);/* Necesario para liberar lo que habiamos inicalizado con va_start (la lista: list) */
	printf("\n");
}


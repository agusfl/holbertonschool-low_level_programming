#include "main.h"

/**
 * main - Entry point for function that copies the content of a file to
 * another file
 * @argc: argument counter
 * @argv: argument vector (pointer to arrays)
 * Return: 0 if succed
 */

/* En el archivo original que subi a github para el cheker esta con menos espacions y sin corchetes para que
 * me entrara todo en 40 lineas y no tenga problemas de betty, aca lo tengo con mas espacio y con corchetes. */

int main(int argc, char *argv[])
/* En este ejercicio no nos pasaban un main de ellos por lo tanto hago la funcion para copiar el contenido
 * de un archivo en otro archivo dentro de main, ya que main es el entry point y siempre tiene que estar.
 * Uso los argumentos "argc" (argument counter) y "argv" (argument vector, es un puntero a un array de strings),
 * estos son los comandos que ya habiamos visto para poder pasar argumentos al momento de ejecutar el programa
 * (son command line arguments). */
{
	int file_from = 0, file_to = 0;
	int read_var = 0, write_var = 0, close_var = 0;
	/* Creo variables de tipo int que voy a usar mas adelante en el codigo para almacenar los valores de los
	 * system calls: read, write, close - para que sea mas facil escribir en el codigo y reutilizar los
	 * valores almacenados los system calls al momento de chequear los casos que nos piden en la letra. */
	char buffer[1024];
	/* Se crea un "buffer" de tipo array de chars (con espacio para 1024 chars, 1024 bytes) para almacenar
	 * los valores y pasar el buffer al system call de read o write y que se haga un solo llamado al sistema
	 * en vez de multiples. */

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	/* Se evalua la primer condicion que nos indican, si el argument counter es distinto de 3, indicamos con
	 * "dprintf" que imprima en consola la forma de uso del programa que hicimos (hay que poner: cp file_from
	 * (archivo de donde se quiere copiar) file_to (archivo al que se quiere copiar lo de file_from)) y que
	 * salga del programa con exit de 97 (usamos 'exit' en lugar de return, porque asi nos indica la letra y
	 * ademos exit se usa para salir del programa cuando hay un error usualmente ya que este termina el 
	 * programa. Sino fuera por el checker podriamos haber usado return en este caso y tendria el mismo
	 * signficado). "dprintf" es una funcion que sirve para imprimir al igual que printf, pero el primer
	 * parametro que recibe es un "file descriptor" en este caso le indicamos como es un error lo que estamos
	 * imprimiendo que se utilice el "unistd" symbolic constant de standar error, podriamos haber puesto 2
	 * en lugar de "STDERR_FILENO" ya que representan lo mismo. El estandar error imprime el mensaje de error
	 * en pantalla para que el usuario lo pueda ver. */
	}
	file_from = open(argv[1], O_RDONLY);
	/* Usamos el system call "open" para asignarlo a la variable creada "file_from" es el archivo desde
	 * el cual queremos copiar el contenido al "file_to"..
	 * En el primer argumento de "open" le indicamos el path del archivo que queremos abrir, en este caso
	 * seria el archivo que pasemos en la posicion command line 1 osea en argv[1] (recordar que se arranca a
	 * contar desde 0 por lo tanto 1 seria la segunda posicion, por ende el nombre del primer archivo).
	 * El segundo argumento que se le pasa es la flag de Read Only, ya que en este caso solo necesitamos
	 * leer el contenido del archivo que queremos copiar. */
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	/* Chequeamos el caso del que el archivo que se pase en "file_from" no exista (esto sucede cuando "open" 
	 * retorna -1), si no existe indicamos que se imprima en pantalla que no se puede leer ese archivo y ponemos
	 * el nombre del archivo con %s y lo que este en argv[1] (que va a ser el nombre de dicho archivo) y salimos
	 * con un exit de 98. */
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/* Ahora usamos nuevamente el system call "open" pero en este caso para asignarlo a "file_to". Le indicamos
	 * a open que tome como "file descriptor" el archivo que este en la posicion 2 (seria el tercer comando
	 * que pasamos en consola (el primero es el nombre del programa y el segundo el archivo del cual queremos
	 * copiar)), despues le indicamos las flags para crear un archivo en caso que no exista y para que
	 * se escriba dentro del archivo y tmb el de trunc para que si existe el archivo se tome el que ya estaba. Por
	 * ultimo le indicamos con el 0664 que le estamos dando permisos de lectura y escritura para el "owner" y
	 * "grupos" y solo lectura para "otros" (hay que poner los permisos ya que usamos O_CREAT y siempre que se
	 * usa hay que decir que permisos se le otorgan en caso de que se tenga que crear el archivo). */
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	/* Hacemos mismo analisis que para "file_from" solo que con un mensaje de error un poco distinto y un exit de
	 * 99 en lugar de 98, pero seria la misma logica si falla que se retorne lo que se acaba de decir.*/
	}
	while ((read_var = read(file_from, buffer, 1024)) != 0)
	/* Hacemos un while que se recorra siempre que haya un numero distinto de 0 bytes para leer con el system
	 * call "read". Le asignamos a nuestra variable "read_var" la system call read. En "read" se le pasa como
	 * primer argumento el file descriptor del cual se quiere leer la informacion (en este caso seria el primer
	 * archivo que se pase, que es el que tiene el contenido que se quiere copiar al archivo de "file_to"), como
	 * segundo argumento se le pasa el "buffer" que es donde se van almacenar los bytes (de chars) leidos y
	 * por ultimo se le dice el maximo de bytes que se quieren leer.
	 * Tenemos que hacer un while para que se fije si "read_var" leyo algun byte osea es distinto de 0 (tmb se
	 * podria poner si es mayor que 0) ya que queremos escribir en el "file_to" con la system call "write"
	 * siempre y cuando haya algo que leer del "file_from". La system call "read" si salio todo bien retorna
	 * el numero de bytes leidos, por lo tanto se entra en el while la primera vez y se va a retornar la cantidad
	 * de bytes leidos en el archivo creado "incitatous" (el "file_from") y como este tenia menos de 1024 bytes
	 * la proxima vez que se vuelva a preguntar si "read_var" es distinto de 0 para ver si se entra o no al while
	 * la respuesta va a ser no ya que van a ser iguales porque el buffer va a estar en 0 y no va a quedar nada
	 * por leer del "file_from" porque ya se leyo todo por lo tanto va a retornar 0 y no se va a entrar nuevamente
	 * al while.
	 * Si ponia el: read_var = read(file_from, buffer, 1024) antes del while y despues en la condicion del while
	 * ponia: read_var != 0 --> quedaba en un loop infinito ya que la condicion siempre iba a ser verdadera
	 * porque el valor que tenia read_var era el retorno de la cantidad de bytes que leyo la primera vez del
	 * arhchivo "incitatous" y por lo tanto nunca se salia del while.*/
	 *
	{
		if (read_var == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	/* Chequeo el caso de que "read_var" de un error (si retorna -1) y pongo para que imprima el mensaje y el exit
	 * que nos indicaban en la letra. */
		}
		write_var = write(file_to, buffer, read_var);
	/* Aca estamos asignando donde se quiere escribir (con la system call "write"), al igual que read el primer
	 * argumento es el file descriptor (nos indica en este caso el archivo donde vamos querer escribir el texto
	 * a copiar), el segundo es un buffer que almacena los bytes (de letras) que van a ser escritos en el "file_to"
	 * y por ultimo la cantidad maxima de bytes que se van a escribir (que esta almacenado en el retorno de
	 * "read_var"). */
		if (write_var == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	/* Idem logica chequeo anterior pero para el caso de write */
		}
	}

	close_var = close(file_from);
	/* Se le asigna a la variable creada "close_var" la system call de "close" para cerrar los archivos que
	 * abrimos tanto con file_from como con file_to (mas abajo declaramos este). */
	if (close_var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	/* Tal cual nos indica la letra. */
	}
	close_var = close(file_to);
	if (close_var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0); /* En caso que todo salga bien retornamos 0. */
}

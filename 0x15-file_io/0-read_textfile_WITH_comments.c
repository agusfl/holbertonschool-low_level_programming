#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* Creamos una variable de tipo int llamada fd por "file descriptor". */
	int read_count, write_var;
	/* Creamos dos variables, una llamada "read_count" y otra "write_var" el var es por variable, las hacemos
	 * de tipo int porque si le ponia tipo ssize_t al igual que la funcion que creamos el checker daba mal.
	 * Lo que tenemos que retornar con esta funcion es la cantidad de letras que se
	 * leyeron e imprimieron con el "write" (usamos wirte en lugar de putchar ya que putchar usa write).
	 */
	char *buff; /* Se crea una variable buffer "buff" para almacenar las letras que se van a terminar
		       imprimiendo, */

	if (filename == NULL)
	{
		return (0);
	/* Chequeamos la condicion de letra que si el filename es NULL que se retorne 0 ya que si es NULL
	 * significa que hubo un error y le decimos al programa que salga y retorne el valor 0. */
	}

	fd = open(filename, O_RDONLY); 
	/* Usamos el file descriptor "open" para abrir el archivo que se le pase al programa con filename
	 * (filename es el primer argumento que le pasamos a nuestra funcion) en nuestro caso le vamos a pasar
	 * el arhivo creado como "Requiescat" que contiene el texto que nos piden que imprimamos. */
	if (fd == -1)
	{
		return (0);
	/* Chequeamos condicion de letra de que si el file descriptor es -1 significa que hubo un error (si se
	 * retorna -1 el man nos indica que esto pasa cuando hubo un error. */
	}

	buff = malloc(sizeof(char) * letters);
	/* Le asignamos memoria al buffer con malloc, le asignamos el tamaño de un char ya que el file que le
	 * estamos pasando es un archivo que contiene texto (el Requiescat), por lo tanto le pasamos el sizeof
	 * de un char que es un byte multiplicado por la cantidad de letras que quieran imprimir, "letters" es
	 * el segundo argumento que se pasa en nuestra funcion, el usuario indica cuantos bytes imprimir. */
	if (buff == NULL)
	{
		return (0);
	/* Chequeamos que si el puntero que creamos "buff" y al cual le estamos asignando memoria con malloc si
	 * el sistema tiene espacio para asignar esa memoria, en caso que no se tenga espacio se retorna NULL, por
	 * lo tanto si es NULL indicamos que salga del programa ya que significa que hubo un problema y que retorne
	 * 0. */
	}

	read_count = read(fd, buff, letters);
	/* Le asignamos el system call "read" a nuestra variable creada "read_count" a read se le indica
	 * el file descriptor usado, el buffear de donde tiene que leer y la cantidad de letras a leer (letters). */
	if (read_count == -1)
	{
		free(buff);
		close(fd);
		return (0);
	/* Si hubo un error al utilizar "read" significa que se nos retorno -1 por lo tanto liberamos la memoria
	 * que habiamos almacenado con malloc para buff ya que no se va a usar y cerramos el file descriptor usado
	 * con close para cerrar el archivo abierto ya que no se va a usar por que hubo un error. */
	}

	write_var = write(0, buff, read_count);
	/* Le asignamos a nuestra variable creada "write_var" el system call 'write' a write le indicamos 0 que
	 * seria lo mismo que poner: "STDIN_FILENO" es el standard input que le vas a pasar con el buff (buffer) y
	 * con "read_count" le estas pasando la cantidad de letras (bytes) que se leyeron. */
	if (write_var == -1)
	{
		free(buff);
		close(fd);
		return (0);
	/* Aca basicamente hacemos el mismo check que para read_count pero para writ_var. */
	}

	free(buff) /* Liberamos el buffer */
	close(fd); /* Indicamos que se cierre el archivo que se abrio con la system call "open". Siempre se
	tiene que cerrar porque sino otras personas no podrian acceder al archivo y hacer cambiso, es como cuando
	en excel queres entrar a un archivo y te dice que otra persona lo esta usando (porque tiene el archivo
	abierto). */
	return (read_count); /* Se nos pide que se retorne la cantidad de letras (bytes) leidas, para eso
				retornamos nuestra variable creada para contar la cantidad de bytes leidos. */
}

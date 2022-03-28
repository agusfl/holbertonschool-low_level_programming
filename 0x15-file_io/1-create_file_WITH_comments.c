#include "main.h"

/* Creamos una funcion para saber el largo de un string que la vamos a usar despues, creamos la funcion
 * porque no nos dejan usar la funcion de strlen de la libreria estandar. */

/**
 * _strlen - find the length of a string
 * @str: string to find length
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - creates a file
 * @filename: the filename to create
 * @text_content: NULL terminated string to write to the file
 * Return:1 if success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	/* text_content: vendria a ser el buffer donde vamos a almacenar lo que se quiera escribir en el
	 * archivo que vayamos a crear. */

	int fd, write_var;
	/* fd es el file descriptor que vamos a usar y "write_var" es la variable que usamos para almacenar
	 * lo que escribirmos con write. */

	if (filename == NULL)
	{
		return (-1);
	/* Chequeamos caso de letra al igual que en el ej 0 y retornamos -1 tal como nos indican */
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/* Aca se indica que se use la system call "open" y se le dice que abra el archivo que nos pasen en el
	 * argumento "filename" y le indicamos que se cree el archivo en caso que no exista con 0_CREAT y que se
	 * escriba en el archivo con 0_WRONLY y si el arhivo ya existe que se trunque (que se use el existente).
	 * Como estamos indicando que se cree un archivo en caso de que no exista tenemos que indicarle los permisos
	 * que se le van a dar a ese archivo, eso lo hacemos con el 0600 en el cual le indicamos que se le de
	 * permisos de lectura y escritura tal cual nos pide la letra. */

	if (fd == -1)
	{
		return (-1);
	/* Chequeamos caso de letra */
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	/* Si el text content que se pasa es NULL entonces que se cierre la llamada al sistema que hicimos y que
	 * se retorne 1 ya que podria pasar que el texto que se pasa esta vacio entonces tendria que devolver un 
	 * archivo vacio y retornar 1. */
	}

	write_var = write(fd, text_content, _strlen(text_content));
	/* Usamos el system call "write" y le indicamos que escriba en el archivo que creamos o que ya existia
	 * con "fd" y que utilice el buffer "text_content" y el largo va a ser el strlen de text content. Con esto
	 * vamos a escribir la palabra que se pase al arhivo que indiquemos. */
	if (write_var == -1)
	{
		close(fd);
		return (-1);
	/* Chequeamos condicion de letra, si write_var es -1 significa que hubo un error y por lo tanto que
	 * retorne -1 y cerramos "fd". */
	}

	close(fd);
	return (1);
}

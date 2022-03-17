#include "lists.h"

/**
 * _strlen - return length of a string
 * @str: string
 * Return: length
 */

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);

/**
 * Creo una funcion para contar el largo de un string como ya vimos en el pasado, la funcion
 * retorna el largo del string el cual se almacena en la variable creada: "i", la misma con tipo
 * unsigned int ya que en la estructura "list_t" se usa un unsigned int para el miembro "len"
 */
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: string to be added to the list
 * Return: address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
/**
 * Se define una funcion llamada "add_node" que retorna un puntero a list_t (list_t es un tipo de dato
 * que creamos con "struct" su definicion esta dentro de "lists.h") y toma como argumentos a un puntero
 * de punteros llamado "head" de tipo list_t (linked list) y a un string llamado "str" de tipo puntero a
 * char.
 */
{
	list_t *new_node; 
	/* Creamos e inicializamos la variable llamada "new_node" de tipo list_t, esta variable
	 * va a ser la que vamos a usar para ir creando los nuevos nodos */

	if (str == NULL)
	{
		return (NULL);
	/**
	 * En la letra nos indican que si str == NULL que se retorne NULL
	 * Esto es por si nos pasan un string vacio. */
	}

	new_node = malloc(sizeof(list_t));
	/* Le asignamos memoria (dinamica) al nuevo nodo con malloc y el sizeof del tipo liat_t ya que
	 * va a ser del mismo tipo que head.
	 */

	if (new_node == NULL)
	{
		return (NULL);
	/**
	 * Esto es por si el puntero que creamos llamado "new_node" esta apuntando a una direccion de memoria NULL
	 * le indicamos que retorne null, esto lo haciamos por si el espacio de memoria esta completo le indicamos
	 * al programa que nos retorne null (para indicarnos que hubo un problema) y termine el programa..
	 */
	}

	new_node->str = strdup(str);
	/* Aca accedemos al miembro "str" de la estructura del nuevo node ("new_node") y le indicamos que
	 * copie con la funcion "strdup" (que viene de string duplicate) lo que nos pasen como argumento
	 * en el main (2-main.c) al momento de llamar nuestra funcion "add_node", como se puede ver en el 2-main.c
	 * cuando llaman a nuestra funcion por primera vez, el primer argumento que le pasan es la linked list
	 * "head" y el segundo el string a copiar en este caso seria Alexandro.
	 */
	new_node->len = _strlen(str);
	/* Con esto se le indica el largo del string que se va a imprimir, utilizamos nuestra propia funcion
	 * de _strlen para ver el largo que nos pasen en "str".
	 */
	new_node->next = *head;
	/* Le indicamos al miembro "next" de nuestra estructura que se iguale al puntero head */
	*head = new_node;
	/* Apuntamos head al puntero "new_node" que creamos mas arriba, esto lo que hace es siempre
	 * apuntar "head" al ultimo nodo creado y ponerlo al principio, osea se crea un nodo y se lo
	 * agrega la principio de la linked list, ya que se apunta head (que es el principio de la linked
	 * list) al nuevo nodo creado. Entonces cada vez que se va creando un nodo termina siendo agregado al
	 * principio de la linked list.
	 */

	return (new_node); /* Por ultimo se indica que se retorne el nuevo nodo creado */

	/**
	 * En el 2-main.c se puede ver que crean una variable "head" de tipo list_t y despues la apuntan a NULL
	 * esto es para indicar que arranca apuntando a la nada y despues con nuestro codigo la "re dirigimos" para
	 * que apunte al nuevo nodo creado como se explico anteriormente.
	 */
}

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
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the linked list
 * @str: string to be added to the list
 * Return: address of the new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	/**
	 * Hasta esta parte del codigo es igual al ejercicio anterior (cualquier cosa ver comentarios ahi) salvo
	 * que al principio declaramos e incializamos la variable "last_node" de tipo de dato puntero a list_t, y
	 * ademas pusimos: new_node-> next = NULL; en lugar de new_node->next = *head, esto es porque en este caso
	 * el nuevo nodo va a ser el ultimo y el ultimo nodo en una linked list siempre apunta a "NULL".
	 * "last_node" es una variable temporal que vamos a utilizar mas adelante en el codigo para poderagregar un nodo
	 * al final y no al inicio de la lista.
	 */

	if (*head == NULL)
	{
		*head = new_node;
	/**
	 * Hacemos este condicional para indicar que si el puntero head apunta a NULL significa que se llego al
	 * final, por lo tanto definimos que el puntero head va a ser el nuvo nodo porque ya estariamos en el
	 * final de la lista. Si pasamos solo un nuevo dato a la lista se va a convertir en el ultimo
	 * nodo de la lista ya que mas arriba definimos: new_node->next = NULL. 
	 * En caso que no estemos en el final de la lista pasamos al siguiente else que definimos a continuacion.
	 */
	}
	else
	{
		last_node = *head;
		/**
		 * Le asignamos puntero head a nuestra variable last_node para no perder el puntero a
		 * head, trabajamos con last_node ahora.
		 */
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		/**
		 * Si el puntero del nodo no apunta a NULL significa que todavia no llegamos al final de la lista
		 * por lo tanto le asignamos a last_node el siguiente lugar en la lista y hacemos esto hasta llegar
		 * a que se apunte a NULL ya que cuando pase esto va a significar que estamos en el final de la lista.
		 * Iteramos por la lista al igual que hicimos en los otros ejercicios, hacemos un recorrido lineal
		 * de la lista ya que se pasa de a un lugar hasta llegar al final.
		 */
		}

		last_node->next = new_node;
		/**
		 * Tal cual fue indicado en los comentarios de arriba, con el while anterior logramos llegar
		 * al final de la lista y como ahora last_node->next estaba apuntando a null ya sabemos que se
		 * encontraba en el final y por lo tanto pasamos a asignarle el new_node (que es el nodo que
		 * queremos agregar a la lista en el final de la misma) y con esto logramos asignarlo al final
		 * de la lista.
		 */
	}

	return (new_node); /* Retornamos el nuevo nodo al final de la lista. */
}

#include "lists.h"

/**
 * list_len - prints all the elements of a list of our created
 * structure: list_t
 * @h: Pointer to a singly linked list of type list_t
 * Return: numbers of elements in a linked list
 */

size_t list_len(const list_t *h)
{

	unsigned int cont_nodes = 0;

	while (h != NULL)
	{
		cont_nodes++;
		h = h->next;
	/**
	 * Usamos el codigo del ejercicio anterior pero solo utilizamos un
	 * contador llamado cont_nodes y vamos pasando los elementos de la
	 * linked list "h" y retornamos la cantidad de elementos de linked
	 * list.
	 */
	}
	return (cont_nodes);
}

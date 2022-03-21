#include "lists.h"

/**
 * listint_len - prints all the elements of a list of our created
 * structure: listint_t
 * @h: Pointer to a singly linked list of type listint_t
 * Return: numbers of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{

	int cont_nodes = 0;

	while (h != NULL)
	{
		cont_nodes++;
		h = h->next;
	/**
	 * Muy similar al ej 1 del project 0x12, cualquier cosa ver
	 * comentarios ahi.
	 * El h != NULL nos indica que la lista no esta vacia y que hay
	 * todavia hay elementos para recorrer dentro de la lista, o si es
	 * igual a NULL es una lista vacia o no hay mas elementos para recorrer
	 */
	}
	return (cont_nodes);
}

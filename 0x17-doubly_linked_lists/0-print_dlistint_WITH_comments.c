#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: Pointer to a doubly linked list of type dlistint_t.
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int cont_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont_nodes++;
	}
	return (cont_nodes);
}
/**
 * El ejercicio es muy parecido al ejercicio 0 del proyecto de sinlgy linked list, ver los comentarios que hice ahi
 * cualquier cosa, pero basicamente se declara una variable "cont_nodes" para contar la cantidad de nodos que
 * se imprimen y devolver eso en el return tal cual nos piden en la letra. Se recorre con un while a la lista 'h'
 * se va iterando por la lista con: h = h->next y se va imprimiendo cada elemento de la misma con el printf.
 * No hay que liberar con free a la lista porque eso lo hacen en la funcion 0-main.

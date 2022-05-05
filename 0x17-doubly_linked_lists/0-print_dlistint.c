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

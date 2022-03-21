#include "lists.h"

/**
 * print_listint - prints all the elements of a list of type listint_t
 * @h: Pointer to a singly linked list of type listint_t.
 * Return: numbers of nodes
 **/

size_t print_listint(const listint_t *h)
{

	int cont_nodes = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		cont_nodes++;
	}
	return (cont_nodes);
}

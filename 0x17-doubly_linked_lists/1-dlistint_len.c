#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the doubly linked list of type dlistint_t.
 * Return: number of elements ina linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cont_nodes = 0;

	while (h != NULL)
	{
		cont_nodes++;
		h = h->next;
	}
	return (cont_nodes);
}

#include "lists.h"

/**
 * print_list - prints all the elements of a list of type list_t
 * @h: Pointer to a singly linked list of type list_t.
 * Return: numbers of nodes
 **/

size_t print_list(const list_t *h)
{

	unsigned int cont_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		}
		cont_nodes++;
	}
	return (cont_nodes);
}

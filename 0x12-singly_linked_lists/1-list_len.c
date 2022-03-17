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

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: index to insert in the list
 * @n: value to insert
 * Return:address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *aux = *h;
	unsigned int cont = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL, new_node->next = NULL;
	if (idx == 0)
	{
		if (h == NULL || *h == NULL)
		{
			*h = new_node;
			return (new_node);
		}
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (cont < idx - 1)
	{
		if (aux->next  == NULL)
			return (NULL);
		aux = aux->next;
		cont++;
	}
	if (aux->next == NULL)
	{
		aux->next = new_node;
		new_node->prev = aux;
		return (new_node);
	}
	new_node->next = aux->next;
	aux->next->prev = new_node;
	new_node->prev = aux;
	aux->next = new_node;
	return (new_node);
}

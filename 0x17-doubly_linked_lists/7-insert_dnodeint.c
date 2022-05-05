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
	unsigned int cont = 0;
	dlistint_t *new_node = NULL, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	if (tmp == NULL)
		return (NULL);
	while (cont < idx - 1)
	{
		tmp = tmp->next;
		cont++;
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}

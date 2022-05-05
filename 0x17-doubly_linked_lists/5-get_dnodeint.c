#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the beginning of the list.
 * @index: index of the node to be returned
 * Return: value of the nth index of the list or NULL if does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	while (head != NULL)
	{
		if (cont == index)
		{
			return (head);
		}
		cont++;
		head = head->next;
	}
	return (NULL);
}

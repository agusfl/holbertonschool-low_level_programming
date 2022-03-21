#include "lists.h"

/**
 * get_nodeint_at_index - get node at specified index
 * @head: pointer to linked list
 * @index: index of the node to be returned
 * Return: value of the nth index of the list or NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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

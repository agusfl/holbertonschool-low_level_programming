#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list..
 * @head: Pointer to the beginning of the list.
 * @index: index to delete
 * Return: 1 if it succeeded and -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *delete_node_next;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	delete_node_next = tmp->next->next;

	free(tmp->next);
	tmp->next = delete_node_next;
	return (1);
}

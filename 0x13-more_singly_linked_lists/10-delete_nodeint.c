#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index 'index' of a linked list
 * @head: pointer to pointer of the linked list
 * @index: index of the list to be removed
 * Return: 1 if succeeded and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *delete_node_next;
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

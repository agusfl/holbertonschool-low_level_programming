#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list..
 * @head: Pointer to the beginning of the list.
 * @index: index to delete
 * Return: 1 if it succeeded and -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = NULL;

	if (*head == NULL || head == NULL)
		return (-1);
	delete = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (index != 0 && delete != NULL)
	{
		delete = delete->next;
		index -= 1;
	}

	if (index == 0)
	{
		delete->prev->next = delete->next;
		if (delete->next != NULL)
			delete->next->prev = delete->prev;
		free(delete);
		return (1);
	}
	return (-1);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list of type listint_t
 * @head: pointer to pointer of the head of the list
 * Return: head nodes data or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int retValue = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else 
	{
		tmp = *head;
		retValue = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	return (retValue);
}


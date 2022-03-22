#include "lists.h"

/**
 * reverse_listint - function to reverse data of a linked list
 * @head: pointer to the start of a linked list
 * Return: pointer to the first node of a reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
	}

	*head = prev;
	return (*head);
}

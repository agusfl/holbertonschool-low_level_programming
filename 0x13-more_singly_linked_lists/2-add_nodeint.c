#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: integer to be added to the list
 * Return: address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
	/**
	 * Muy similar al ej 2 del project 0x12 a diferencia de que aca es con
	 * un int y no con un string.
	 */
}

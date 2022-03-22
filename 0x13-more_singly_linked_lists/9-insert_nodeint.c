#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: pointer to pointer of the linked list
 * @idx: index of the list where the new node should be added
 * @n: number to be added with the new node
 * Return: addres of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
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
	tmp->next = new_node;
	return (new_node);
}

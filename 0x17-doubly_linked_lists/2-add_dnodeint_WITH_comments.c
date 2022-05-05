#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the beginning of the list
 * @n: value to add at the beginning of the list.
 * Return: address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		(*head)->prev = new_node;
		/* Esto es para enlazar al que apuntaba head con el nuevo nodo, osea seria para ir a la "izquierda"
		 * recordar que las doubly linked lists nos permiten ir para atras, sino hacia esto estaba "perdiendo"
		 * la posibilidad de volver para tras.
		 */
	}

	new_node->n = n; /* Le asignamos el numero que pasen en 'n' al nuevo nodo */
	new_node->next = *head; /* ponemos que next apunte al principio de la lista (head) porque queremos agregar
				   el nuevo nodo al comienzo de la lista. */
	*head = new_node; /* Ahora decimos que head es igual al nuevo nodo para volver a definir head como el principio
			     de la lista. */
	new_node->prev = NULL; /*el puntero que apunta al nodo previo lo igualamos a NULL ya que el nuevo nodo va a ser
				 el primero y el primer nodo en una doubly linked list apunta a NULL. */

	return (new_node);
}

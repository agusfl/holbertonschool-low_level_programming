#include "lists.h"

/**
 * free_listint2 - function to free a linked list of type listint_t
 * @head: pointer to linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	/**
	 * En este ejercicio estamos liberando la lista a la que apunta el
	 * puntero "head" y a su vez estamos seteando en NULL a head una vez
	 * que es liberado.
	 * Nos pasan un puntero de puntero de head y despues modificamos al
	 * puntero (*head) lo dereferenciamos para que quede en NULL una vez
	 * que es liberado. Cuando se llega al ultimo elemento de la lista que
	 * se pase "tmp->next" va a ser igul a NULL por lo tanto
	 * dereferenciamos "head" para que quede seteado en NULL.
	 */
}

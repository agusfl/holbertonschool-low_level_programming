#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: Pointer to the beginning of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * El codigo lo saque del ejercicio 4 del project 0x13-more_singly_linked_lists-
 * Funciona igual, aca la logica es que usas un puntero temporal de tipo dlistint_t y lo vas
 * igualando al puntero a la lista: head, y head despues lo modificas y lo igualas al proximo
 * nodo de la lisa a la que apunta head. De esta forma vas liberando siempre la posicion anterior a que cambies
 * head por el siguiente nodo, ya que la posicion anterior quedo guardada en "tmp"-
 */

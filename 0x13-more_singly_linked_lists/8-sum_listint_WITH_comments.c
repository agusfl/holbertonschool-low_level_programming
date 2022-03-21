#include "lists.h"

/**
 * sum_listint - sum of the data of a linked list
 * @head: pointer to linked list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	/* Creamos una variable "sum" de tipo int para almacenar las suma de los nodos dentro de la lista */

	if (head == NULL)
	{
		return (0);
	/**
	 * Chequeamos caso de que la lista este vacia, de ser asi retornamos 0 tal cual indica la letra. */
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	/**
	 * Mientras que head sea distinto a NULL (osea que no se llego al final de la lista) sumamos y almacenamos
	 * el resultado en "sum" de los valores dentro de cada nodo, accedemos a ellos con el siguiente codigo:
	 * head->n y vamos iterando dentro de la lista con: head = head->next
	 */
	}
	return (sum); /* Por ultimo retornamos el resultado de la suma almacenado en "sum". */
}

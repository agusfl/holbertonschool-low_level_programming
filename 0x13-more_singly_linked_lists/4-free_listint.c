#include "lists.h"

/**
 * free_listint - function to free a linked list of type listint_t
 * @head: pointer to linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	/**
	 * Este ej es distinto al 4 del project 0x12, en este caso estamos
	 * liberando una lista con integers y hay que hacerlo de esta forma
	 * para no tener problemas con "make pointer from an integer without a
	 * cast". Se crea un puntero temporal (tmp) de tipo listint_t, se
	 * iguala el puntero temporal a head y se itera sobre la lista a la que
	 * apunta "head", se libera tmp, que tiene asignado lo que habia en
	 * head antes de iterar por primera vez, luego se hacen las iteraciones
	 * y se libera hasta que head sea NULL y ya no haya lo que liberar, en
	 * caso que head sea NULL o este vacio simplemente retornamos para que
	 * se salga del loop.
	 */
}
